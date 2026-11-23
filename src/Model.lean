/-! The model and the proof from the blog post. Nothing here talks to SQLite. -/

structure Post where
  id   : Nat
  body : String

structure Db where
  posts : List Post          -- rows as the table B-tree holds them

/-- What a table B-tree guarantees: leaf entries are in strictly increasing rowid order.
    This is the one fact about SQLite that the proof relies on. -/
def Db.Sorted (db : Db) : Prop := db.posts.Pairwise (fun a b => a.id < b.id)

/-- Spec, in terms of ids and not list position: `SELECT ... ORDER BY id DESC LIMIT n`,
    then put the rows back in ascending order. -/
def Db.byIdDesc (db : Db) : List Post :=
  db.posts.mergeSort (fun a b => decide (b.id ≤ a.id))

def Db.lastN (db : Db) (n : Nat) : List Post :=
  (db.byIdDesc.take n).reverse

/-- Model of sqlite3BtreeLast, then sqlite3BtreePrevious until the start:
    the cursor visits the rows in reverse tree order. -/
def Db.walkBack (db : Db) : List Post := db.posts.reverse

/-- Plan: Last, then Previous n - 1 times. Stop after n rows and put them back in order. -/
def Db.plan (db : Db) (n : Nat) : List Post :=
  (db.walkBack.take n).reverse

/-- With strictly increasing ids, two rows with the same id are the same row. -/
theorem eq_of_id_eq (db : Db) (hs : db.Sorted) (a b : Post)
    (ha : a ∈ db.posts) (hb : b ∈ db.posts) (h : a.id = b.id) : a = b := by
  obtain ⟨i, hi, rfl⟩ := List.getElem_of_mem ha
  obtain ⟨j, hj, rfl⟩ := List.getElem_of_mem hb
  rcases Nat.lt_trichotomy i j with h' | h' | h'
  · have := List.pairwise_iff_getElem.mp hs i j hi hj h'
    omega
  · subst h'; rfl
  · have := List.pairwise_iff_getElem.mp hs j i hj hi h'
    omega

/-- On a sorted table, sorting by id descending is the same as reversing the list. -/
theorem byIdDesc_eq (db : Db) (hs : db.Sorted) : db.byIdDesc = db.posts.reverse := by
  unfold Db.byIdDesc
  apply List.Perm.eq_of_pairwise (le := fun a b => decide (b.id ≤ a.id) = true)
  · intro a b ha hb hab hba
    simp only [List.mem_mergeSort] at ha
    simp only [List.mem_reverse] at hb
    simp only [decide_eq_true_eq] at hab hba
    exact eq_of_id_eq db hs a b ha hb (by omega)
  · exact List.pairwise_mergeSort
      (fun a b c hab hbc => by simp only [decide_eq_true_eq] at *; omega)
      (fun a b => by simp only [Bool.or_eq_true, decide_eq_true_eq]; omega) _
  · rw [List.pairwise_reverse]
    exact hs.imp (fun h => by simp only [decide_eq_true_eq]; omega)
  · exact (List.mergeSort_perm _ _).trans (List.reverse_perm _).symm

theorem plan_eq (db : Db) (hs : db.Sorted) (n : Nat) : db.plan n = db.lastN n := by
  unfold Db.plan Db.lastN Db.walkBack
  rw [byIdDesc_eq db hs]

