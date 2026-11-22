import Model
import Sqlite

/-! The plan from `Model.lean`, running on a real B-tree cursor. -/

def readPost (h : Handle) : IO Post :=
  return { id := ← h.rowid, body := ← h.body }

/-- Read `k` more rows, walking back from the cursor. `acc` holds the rows read so far,
    oldest first: each older row is consed onto the front, so no final `reverse` is needed. -/
def walkBack (h : Handle) : Nat → List Post → IO (List Post)
  | 0, acc => pure acc
  | k + 1, acc => do
    let acc := (← readPost h) :: acc
    if k == 0 then pure acc                 -- do not step past the n-th row
    else if ← h.previous then walkBack h k acc
    else pure acc                           -- ran off the start of the table

/-- The last `n` rows: one `Last`, then up to `n - 1` `Previous` calls. -/
def planIO (h : Handle) (n : Nat) : IO (List Post) := do
  if n == 0 then return []
  if ← h.last then walkBack h n [] else return []
