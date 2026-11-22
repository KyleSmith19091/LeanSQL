# Benchmarks

Question: how long does "the last `n` rows" take through the SQL engine, and through the B-tree cursor?
And how much of that depends on how the Lean plan becomes machine code?

Run it yourself with `make bench` (about 70 seconds, builds a 1,000,000-row table in `build/`).

```
machine: Apple M2 Pro, 12 cores, Darwin 27.0.0; SQLite 3.54.1 amalgamation, cc -O2; Lean (version 4.36.0, arm64-apple-darwin24.6.0
```

### 1000 rows (13 pages)

One read transaction per query:

| n | SQL (prepared) | SQL (prepare each time) | B-tree, hand-written C | B-tree, C printed by Lean | B-tree, Lean-compiled planIO |
|--:|--:|--:|--:|--:|--:|
| 1 | 4918.0 | 8420.1 | 4721.4 | 4737.0 | 4924.0 |
| 20 | 6032.2 | 9608.6 | 5242.5 | 5236.9 | 9843.4 |
| 2000 | 65304.3 | 68112.7 | 28759.3 | 28896.4 | 219186.7 |

One read transaction kept open:

| n | B-tree, hand-written C | B-tree, C printed by Lean | B-tree, Lean-compiled planIO |
|--:|--:|--:|--:|
| 1 | 21.3 | 21.2 | 121.0 |
| 20 | 469.1 | 469.5 | 4991.8 |
| 2000 | 23846.9 | 24124.4 | 211169.2 |

### 100000 rows (1144 pages)

One read transaction per query:

| n | SQL (prepared) | SQL (prepare each time) | B-tree, hand-written C | B-tree, C printed by Lean | B-tree, Lean-compiled planIO |
|--:|--:|--:|--:|--:|--:|
| 1 | 4908.0 | 8382.8 | 4791.1 | 4763.7 | 4935.8 |
| 20 | 6057.9 | 9467.6 | 5245.8 | 5255.8 | 9973.3 |
| 2000 | 124208.2 | 127850.8 | 50742.2 | 51132.2 | 440597.3 |

One read transaction kept open:

| n | B-tree, hand-written C | B-tree, C printed by Lean | B-tree, Lean-compiled planIO |
|--:|--:|--:|--:|
| 1 | 22.1 | 22.2 | 125.8 |
| 20 | 496.8 | 499.3 | 5115.3 |
| 2000 | 45557.9 | 46169.0 | 435716.1 |

### 1000000 rows (11702 pages)

One read transaction per query:

| n | SQL (prepared) | SQL (prepare each time) | B-tree, hand-written C | B-tree, C printed by Lean | B-tree, Lean-compiled planIO |
|--:|--:|--:|--:|--:|--:|
| 1 | 4907.9 | 8343.5 | 4766.9 | 4751.7 | 4917.2 |
| 20 | 6064.0 | 9512.2 | 5255.3 | 5260.0 | 10080.2 |
| 2000 | 124125.0 | 128092.6 | 51006.8 | 50901.1 | 453222.6 |

One read transaction kept open:

| n | B-tree, hand-written C | B-tree, C printed by Lean | B-tree, Lean-compiled planIO |
|--:|--:|--:|--:|
| 1 | 22.6 | 22.6 | 128.5 |
| 20 | 505.3 | 504.8 | 5200.6 |
| 2000 | 45757.9 | 45918.1 | 447258.7 |

All times are **nanoseconds per query**. Lower is better.

## The paths

| Column | What runs |
|---|---|
| SQL (prepared) | `SELECT id, body FROM posts ORDER BY id DESC LIMIT ?` on a statement that is prepared once and reused. |
| SQL (prepare each time) | The same query, parsed and planned on every call. |
| B-tree, hand-written C | `Last`, then `Previous`, written by hand in `c/sqlite_shim.c`. |
| B-tree, C printed by Lean | The same loop, but the C text is printed by `src/Emit.lean` into `generated/plan_emit.c`, and compiled in the same translation unit as SQLite. No Lean runtime in the loop. |
| B-tree, Lean-compiled planIO | The real `planIO` from `src/Plan.lean`: Lean compiles it to C, and it calls SQLite through the FFI. It allocates a Lean `String`, `Post` and list cell per row. |
| One transaction per query | Every query starts and ends its own read transaction and cursor, as the SQL engine does for each statement. |
| One transaction kept open | One transaction and cursor, opened once and reused. SQL has no column here. |

Every path returns the same rows. Before timing, the benchmark compares a checksum of the rows from all of the paths
and exits with an error if they differ.

## What the numbers say

1. **Table size does not matter.** For `n = 1` and `n = 20`, 1,000 rows and 1,000,000 rows give the same times to within
   about 5%. For `n = 2000`, 100,000 and 1,000,000 rows agree (the 1,000-row table has fewer than 2,000 rows, so that
   cell reads the whole table and is not comparable). The plan reads one root-to-leaf path (2 to 3 pages) plus the leaves it walks.
2. **For small `n`, SQL is close.** With one transaction per query, `n = 1` takes 4.9 µs in SQL and 4.8 µs in the B-tree, and
   `n = 20` takes 6.1 µs and 5.3 µs (the B-tree is 13% faster). Almost all of this is a fixed cost of about 4.8 µs per
   query that both paths pay for starting and ending a read transaction. I did not profile it. The likely cause is the
   file lock and the check that the database file did not change.
3. **For large `n`, the B-tree wins.** At `n = 2000` on 1,000,000 rows: 51 µs against 124 µs for SQL, about 2.4 times faster.
   SQL pays roughly 40 ns per row on top of the B-tree, for the bytecode loop and for column access.
4. **Keeping the transaction open is where the big win is.** With the transaction open, `n = 20` takes 0.5 µs, about 12 times
   faster than SQL. This only applies if your program may hold a read transaction across queries, which brings its own
   rules (a long read transaction pins the file's view of the data). The PR you pointed me at gets a similar effect by running
   all the requests of one batch inside one SQLite transaction.
5. **How the plan becomes code matters more than the plan.** The Lean-compiled `planIO` costs about 230 ns per row against
   about 25 ns for C. That is the Lean runtime, not the plan: four FFI calls per row that each allocate an IO result, plus a
   `String`, a `Post` and a list cell. With the transaction open and `n = 20`, it takes 5.2 µs against 0.5 µs, about
   10 times slower. At `n = 2000` with one transaction per query, it is 3.7 times slower than SQL (453 against 124 µs).
6. **Printing the C from Lean removes that cost.** The C printed by `Emit.lean` runs as fast as the hand-written C, within
   noise, in every cell. That is expected: it prints the same loop, so this column shows that printing the code costs
   nothing at run time, and it is not a separate speedup of the algorithm.

So the honest summary for the post: the B-tree plan reads the same few pages whatever the table size, but whether it
beats SQL depends on `n`, on the transaction, and on how cheaply the rows are handed back to the caller. A Lean program
can reach C speed when Lean prints the C. It cannot when Lean compiles a loop that allocates per row.

## What the emitter does and does not guarantee

`Model.lean` proves that "Last, then Previous, stop after `n` rows" returns the last `n` rows. Nothing proves that the
text printed by `Emit.lean` has that shape. The evidence is the checksum in this benchmark and `make test`. The PR you pointed me at
has the same gap, and says so ("tested, not proved").

## Caveats

- One machine, one thread, one run per cell of 300 ms. I did not measure the spread between runs. Differences under
  about 5% should not be read as real.
- Warm caches only: the file is in the OS page cache and the pages are in SQLite's cache. A cold read would be dominated by disk I/O,
  and the B-tree would win by reading fewer pages.
- Read-only database, no concurrent writers, default `cache_size`.
- The SQL query must use the table's rowid order. `EXPLAIN QUERY PLAN` shows a plain `SCAN posts`, so SQLite does read
  the rowid tree backwards and does not sort.
- Connection open, schema load and (for the prepared path) statement preparation are not in the timings.
