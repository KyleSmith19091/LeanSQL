# Benchmarks

Question: how long does "the last `n` rows" take through the SQL engine, and through the B-tree cursor?

Run it yourself with `make bench` (about 40 seconds, builds a 1,000,000-row table in `build/`).

```
machine: Apple M2 Pro, 12 cores, Darwin 27.0.0; SQLite 3.54.1 amalgamation, cc -O2; Lean Lean (version 4.36.0
```

### 1000 rows (13 pages)

| n | SQL (prepared) | SQL (prepare each time) | B-tree in C | B-tree via Lean | B-tree in C, txn kept open | B-tree via Lean, txn kept open |
|--:|--:|--:|--:|--:|--:|--:|
| 1 | 4933.3 | 8447.0 | 4804.9 | 4951.3 | 21.0 | 124.8 |
| 20 | 6095.6 | 9636.7 | 5236.9 | 9992.8 | 476.8 | 5097.5 |
| 2000 | 64406.9 | 67400.4 | 29057.5 | 219370.2 | 24128.5 | 212908.2 |

### 100000 rows (1144 pages)

| n | SQL (prepared) | SQL (prepare each time) | B-tree in C | B-tree via Lean | B-tree in C, txn kept open | B-tree via Lean, txn kept open |
|--:|--:|--:|--:|--:|--:|--:|
| 1 | 4950.4 | 8513.2 | 4797.7 | 4939.6 | 21.9 | 130.3 |
| 20 | 6083.5 | 9655.3 | 5298.6 | 10181.1 | 504.5 | 5217.3 |
| 2000 | 126127.5 | 129079.9 | 51559.1 | 451720.5 | 46272.0 | 446096.5 |

### 1000000 rows (11702 pages)

| n | SQL (prepared) | SQL (prepare each time) | B-tree in C | B-tree via Lean | B-tree in C, txn kept open | B-tree via Lean, txn kept open |
|--:|--:|--:|--:|--:|--:|--:|
| 1 | 4880.8 | 8399.2 | 4777.2 | 4958.1 | 22.3 | 132.2 |
| 20 | 6132.9 | 9561.9 | 5263.1 | 10226.0 | 514.0 | 5291.9 |
| 2000 | 126154.4 | 128821.1 | 51817.9 | 462611.2 | 46488.5 | 457407.9 |

All times are **nanoseconds per query**. Lower is better.

## The paths

| Column | What runs |
|---|---|
| SQL (prepared) | `SELECT id, body FROM posts ORDER BY id DESC LIMIT ?` on a statement that is prepared once and reused. |
| SQL (prepare each time) | The same query, parsed and planned on every call. |
| B-tree in C | `Last`, then `Previous`, called from C. Each query starts and ends its own read transaction and cursor, as SQL does. |
| B-tree via Lean | The real `planIO` from `src/Plan.lean`: Lean loop, FFI calls, Lean `String` and `List Post` allocation. Same per-query transaction. |
| ... txn kept open | The two B-tree paths again, with one transaction and cursor opened once and reused. |

Every path returns the same rows. Before timing, the benchmark compares a checksum of the rows from the SQL path,
the C path and the Lean path, and exits with an error if they differ.

## What the numbers say

1. **Table size does not matter.** For `n = 1` and `n = 20`, 1,000 rows and 1,000,000 rows give the same times to within
   about 5%. For `n = 2000`, 100,000 and 1,000,000 rows agree (the 1,000-row table has fewer than 2,000 rows, so that
   cell reads the whole table and is not comparable). The plan reads one root-to-leaf path (2 to 3 pages) plus the leaves it walks. This is the claim in the post, and it holds.
2. **For small `n`, the SQL engine is not slower.** At `n = 1` and `n = 20`, SQL (prepared) takes 4.9 and 6.1 µs, and the
   B-tree in C takes 4.8 and 5.3 µs. Almost all of this is a fixed cost of about 4.8 µs per query that both paths pay
   for starting and ending a read transaction. I did not profile it. The likely cause is the file lock and the check that
   the database file did not change.
3. **For large `n`, the B-tree wins.** At `n = 2000` on 1,000,000 rows: 52 µs for the B-tree in C against 126 µs for SQL, about
   2.4 times faster. SQL pays roughly 40 ns per row on top of the B-tree, for the bytecode loop and for column access.
4. **Keeping the transaction open is where the big win is.** With the transaction open, `n = 20` takes 0.5 µs, about 12 times
   faster than SQL. This only applies if your program may hold a read transaction across queries, which brings its own
   rules (a long read transaction pins the file's view of the data).
5. **The Lean layer is expensive, and it is the weak point of this demo.** `planIO` costs about 230 ns per row against about 25 ns
   per row in C. At `n = 20` it is slower than SQL (10.2 against 6.1 µs), and at `n = 2000` it is 3.7 times slower
   (463 against 126 µs). The cost is not in the plan. It is in what the demo does with each row: four FFI calls that each
   allocate an IO result, a new Lean `String`, a `Post` and a list cell. I did not tune this. Returning one packed
   buffer per row, or the whole window in one call, would remove most of it.

So the honest summary for the post: the B-tree plan reads the same few pages whatever the table size, but whether it
beats SQL depends on `n`, on the transaction, and on how cheaply the rows are handed back to the caller.

## Caveats

- One machine, one thread, one run per cell of 300 ms. I did not measure the spread between runs. Differences under
  about 5% should not be read as real.
- Warm caches only: the file is in the OS page cache and the pages are in SQLite's cache. A cold read would be dominated by disk I/O,
  and the B-tree would win by reading fewer pages.
- Read-only database, no concurrent writers, default `cache_size`.
- The SQL query must use the table's rowid order. `EXPLAIN QUERY PLAN` shows a plain `SCAN posts`, so SQLite does read
  the rowid tree backwards and does not sort.
- Connection open, schema load and (for the prepared path) statement preparation are not in the timings.
