/-! Foreign functions: a thin wrapper over SQLite's internal B-tree cursor. -/

opaque HandlePointed : NonemptyType
def Handle : Type := HandlePointed.type
instance : Nonempty Handle := HandlePointed.property

/-- Open a database file and put a cursor on the root page of a table. -/
@[extern "lsql_open"] opaque Handle.open (path table : @& String) : IO Handle
/-- `sqlite3BtreeLast`. `true` when the cursor sits on a row. -/
@[extern "lsql_last"] opaque Handle.last (h : @& Handle) : IO Bool
/-- `sqlite3BtreePrevious`. `true` when the cursor sits on a row, `false` after the first row. -/
@[extern "lsql_previous"] opaque Handle.previous (h : @& Handle) : IO Bool
@[extern "lsql_rowid"] opaque Handle.rowid (h : @& Handle) : IO Nat
@[extern "lsql_body"] opaque Handle.body (h : @& Handle) : IO String
/-- Page gets (cache hits and misses) since `open`. -/
@[extern "lsql_page_fetches"] opaque Handle.pageFetches (h : @& Handle) : IO Nat
