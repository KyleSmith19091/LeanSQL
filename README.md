# leansql-demo

Companion code for the blog post *Lean SQL: Formally Verifying Runtime Cost*.

It answers one question: **give me the last `n` rows of a table without scanning it.**
The plan is `sqlite3BtreeLast` once, then `sqlite3BtreePrevious` up to `n - 1` times. It is written in Lean,
compiled to C by Lean, and linked against SQLite's *internal* B-tree API.

```
src/Model.lean   the model, the spec and the proof (plan_eq). No SQLite here.
src/Sqlite.lean  foreign functions: Handle.open / last / previous / rowid / body
src/Plan.lean    the plan, running on a real cursor
src/Emit.lean    code generator: Lean prints the C for the plan (generated/plan_emit.c)
src/Bench.lean   benchmark driver: SQL engine vs B-tree, same rows, checksummed
src/Main.lean    command line: leansql-demo <db> <table> <n>
c/sqlite_shim.c  #includes the SQLite amalgamation, so the private B-tree functions are callable
c/lean_ffi.c     Lean runtime glue (external object, IO results)
generated/*.c    the C that Lean produced (committed so you can read it without building)
```

## Run it

You need Lean 4 (via `elan`), a C compiler, `python3` and the `sqlite3` CLI (the last two only for the demo and tests).

```sh
make          # fetches + checks the SQLite amalgamation, builds build/leansql-demo
make show     # Lean source of the plan next to the C that Lean generated
make demo     # 100,000 rows: how many pages does the plan touch?
make bench    # time the SQL engine against the B-tree paths (see BENCHMARKS.md)
make test     # plan == SELECT ... ORDER BY id DESC LIMIT n, with and without rowid gaps
```

Example output of `make demo` (100,000 rows, 1,144 pages of 4 KiB):

```
last 1 rows:     3 page fetches
last 20 rows:    3 page fetches
last 2000 rows: 26 page fetches
```

Three fetches is the height of the tree: root, one interior page, one leaf. The 20 rows fit on the last leaf.

## Does it beat SQL?

Sometimes. Full numbers and caveats are in [BENCHMARKS.md](BENCHMARKS.md). In short: the plan's cost does not grow with the
table, but for the last 20 rows SQL is about as fast as the B-tree once both pay for their own read transaction. The B-tree
wins for large `n` (about 2.4 times at 2,000 rows), and by about 12 times if you keep the transaction open.
The Lean-compiled `planIO` is slower than SQL, because it allocates a lot per row. The same loop printed as C by `src/Emit.lean`
runs at hand-written C speed.

## What is proved, and what is not

`plan_eq` proves that on the **list model** of a table, `Db.plan n = Db.lastN n` for every table and every `n`.
It has no hypothesis about the rowids.

`Plan.planIO` is the same plan on the real cursor. It is **not** proved equal to `Db.plan`. The link is:

- `planIO` is written to have the same shape as the model (`Last`, then `Previous`, stop after `n` rows).
- `make test` compares it with SQLite's own answer on tables of 0 to 5,000 rows, with and without gaps in the rowids.

So you trust two things that Lean does not check: that the C shim wraps the two B-tree calls faithfully,
and that the model of a cursor as "the rows, newest first" is right.
A test is evidence, not proof. Closing the gap would mean modelling the B-tree itself in Lean.

## Notes

- The internal functions are `static` in the amalgamation. `sqlite_shim.c` includes `sqlite3.c`, so it sits in the same
  translation unit and can call them. No `-DSQLITE_PRIVATE=` trick is needed.
- Internal APIs change between SQLite versions. The amalgamation is pinned to 3.54.1 and its SHA3-256 is checked.
- The demo table must be `(id INTEGER PRIMARY KEY, body TEXT)`. Rowids are read as non-negative numbers.
- The generated C looks noisy. Most of it is Lean's reference counting (`lean_inc`, `lean_dec`, `lean_is_exclusive`).
  The calls to `lsql_last` and `lsql_previous` are the part to look for.
