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

/-- One markdown table row per n. Fails if the four paths disagree on the rows they return. -/
def benchDb (path table : String) (budgetMs : Nat) : IO Bool := do
  let budget := budgetMs * 1000000
  let mut ok := true
  for n in [1, 20, 2000] do
    let h ← Handle.open path table
    let want ← checkSql path table n
    let c ← checkBtreeC path table n
    let l := checksum (← planIO h n)
    if want != c || want != l then
      IO.eprintln s!"MISMATCH n={n}: sql={want} btree-c={c} btree-lean={l}"
      ok := false
    let sqlP ← benchSql path table n false budget.toFloat
    let sqlR ← benchSql path table n true budget.toFloat
    let cTx ← benchBtreeC path table n true budget.toFloat
    let lTx ← benchLean path table n true budget
    let cOpen ← benchBtreeC path table n false budget.toFloat
    let lOpen ← benchLean path table n false budget
    IO.println s!"| {n} | {fmt sqlP} | {fmt sqlR} | {fmt cTx} | {fmt lTx} | {fmt cOpen} | {fmt lOpen} |"
  return ok
