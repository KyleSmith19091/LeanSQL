/-! Foreign functions: a thin wrapper over SQLite's internal B-tree cursor. -/

opaque HandlePointed : NonemptyType
def Handle : Type := HandlePointed.type
instance : Nonempty Handle := HandlePointed.property

/-- Open a database file and put a cursor on the root page of a table. -/
@[extern "lsql_open"] opaque Handle.open (path table : @& String) : IO Handle
/-- Start a read transaction and a cursor. `open` already did this once. -/
@[extern "lsql_begin"] opaque Handle.begin (h : @& Handle) : IO Bool
/-- Close the cursor and end the read transaction, as SQL does after every statement. -/
@[extern "lsql_end"] opaque Handle.end (h : @& Handle) : IO Unit
/-- `sqlite3BtreeLast`. `true` when the cursor sits on a row. -/
@[extern "lsql_last"] opaque Handle.last (h : @& Handle) : IO Bool
/-- `sqlite3BtreePrevious`. `true` when the cursor sits on a row, `false` after the first row. -/
@[extern "lsql_previous"] opaque Handle.previous (h : @& Handle) : IO Bool
@[extern "lsql_rowid"] opaque Handle.rowid (h : @& Handle) : IO Nat
@[extern "lsql_body"] opaque Handle.body (h : @& Handle) : IO String
/-- Page gets (cache hits and misses) since `open`. -/
@[extern "lsql_page_fetches"] opaque Handle.pageFetches (h : @& Handle) : IO Nat

/-! Benchmark paths that run entirely in C. Each returns nanoseconds per query. -/

/-- `SELECT id, body FROM t ORDER BY id DESC LIMIT n` through the SQL engine. -/
@[extern "lsql_bench_sql"]
opaque benchSql (path table : @& String) (n : @& Nat) (reprepare : Bool) (budgetNs : Float) : IO Float
/-- `Last`, then `Previous`, called from C with no Lean in the loop. -/
@[extern "lsql_bench_btree"]
opaque benchBtreeC (path table : @& String) (n : @& Nat) (txnPerQuery : Bool) (budgetNs : Float) : IO Float
/-- Checksum of the rows each C path returns: sum of `id + body length`. -/
@[extern "lsql_check_sql"] opaque checkSql (path table : @& String) (n : @& Nat) : IO Nat
@[extern "lsql_check_btree"] opaque checkBtreeC (path table : @& String) (n : @& Nat) : IO Nat
/-- The loop printed by `Emit.lean`, compiled as C. -/
@[extern "lsql_bench_emitted"]
opaque benchEmitted (path table : @& String) (n : @& Nat) (txnPerQuery : Bool) (budgetNs : Float) : IO Float
@[extern "lsql_check_emitted"] opaque checkEmitted (path table : @& String) (n : @& Nat) : IO Nat
