import Plan

/-! Time the same question, "the last n rows", on four paths. -/

def checksum (rows : List Post) : Nat :=
  rows.foldl (fun a p => a + p.id + p.body.utf8ByteSize) 0

/-- Nanoseconds per call of `planIO`, repeated for about `budgetNs`. -/
def benchLean (path table : String) (n : Nat) (txnPerQuery : Bool) (budgetNs : Nat) : IO Float := do
  let h ← Handle.open path table
  let _ ← planIO h n                              -- warm up
  let t0 ← IO.monoNanosNow
  let mut iters := 0
  let mut t := t0
  while t - t0 < budgetNs do
    for _ in [0:8] do
      if txnPerQuery then let _ ← h.begin
      let _ ← planIO h n
      if txnPerQuery then h.end
    iters := iters + 8
    t ← IO.monoNanosNow
  return (Float.ofNat (t - t0)) / (Float.ofNat iters)

def fmt (ns : Float) : String :=
  let tenths := (ns * 10).round.toUInt64.toNat
  s!"{tenths / 10}.{tenths % 10}"

/-- Two markdown tables: one transaction per query (SQL does this), and one transaction kept open.
Fails if the paths disagree on the rows they return. -/
def benchDb (path table : String) (budgetMs : Nat) : IO Bool := do
  let budget := budgetMs * 1000000
  let mut ok := true
  let mut perQuery : Array String := #[]
  let mut keptOpen : Array String := #[]
  for n in [1, 20, 2000] do
    let h ← Handle.open path table
    let want ← checkSql path table n
    let c ← checkBtreeC path table n
    let e ← checkEmitted path table n
    let l := checksum (← planIO h n)
    if want != c || want != e || want != l then
      IO.eprintln s!"MISMATCH n={n}: sql={want} btree-c={c} emitted={e} btree-lean={l}"
      ok := false
    let sqlP ← benchSql path table n false budget.toFloat
    let sqlR ← benchSql path table n true budget.toFloat
    let cTx ← benchBtreeC path table n true budget.toFloat
    let eTx ← benchEmitted path table n true budget.toFloat
    let lTx ← benchLean path table n true budget
    let cOpen ← benchBtreeC path table n false budget.toFloat
    let eOpen ← benchEmitted path table n false budget.toFloat
    let lOpen ← benchLean path table n false budget
    perQuery := perQuery.push s!"| {n} | {fmt sqlP} | {fmt sqlR} | {fmt cTx} | {fmt eTx} | {fmt lTx} |"
    keptOpen := keptOpen.push s!"| {n} | {fmt cOpen} | {fmt eOpen} | {fmt lOpen} |"
  IO.println "One read transaction per query:\n"
  IO.println "| n | SQL (prepared) | SQL (prepare each time) | B-tree, hand-written C | B-tree, C printed by Lean | B-tree, Lean-compiled planIO |"
  IO.println "|--:|--:|--:|--:|--:|--:|"
  for r in perQuery do IO.println r
  IO.println "\nOne read transaction kept open:\n"
  IO.println "| n | B-tree, hand-written C | B-tree, C printed by Lean | B-tree, Lean-compiled planIO |"
  IO.println "|--:|--:|--:|--:|"
  for r in keptOpen do IO.println r
  return ok
