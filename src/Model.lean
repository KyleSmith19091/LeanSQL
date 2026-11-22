/-! The model and the proof from the blog post. Nothing here talks to SQLite. -/

structure Post where
  id   : Nat
  body : String

structure Db where
  posts : List Post          -- rows in rowid order

/-- Spec: the last n rows, oldest first. -/
def Db.lastN (db : Db) (n : Nat) : List Post :=
  db.posts.drop (db.posts.length - n)

/-- Model of sqlite3BtreeLast, then sqlite3BtreePrevious until the start:
    the cursor visits the rows newest first. -/
def Db.walkBack (db : Db) : List Post := db.posts.reverse

/-- Plan: Last, then Previous n - 1 times. Stop after n rows and put them back in order. -/
def Db.plan (db : Db) (n : Nat) : List Post :=
  (db.walkBack.take n).reverse

theorem plan_eq (db : Db) (n : Nat) : db.plan n = db.lastN n := by
  unfold Db.plan Db.walkBack Db.lastN
  rw [List.reverse_take]
  simp
