import Plan

def main (args : List String) : IO UInt32 := do
  let [path, table, n] := args
    | IO.eprintln "usage: leansql-demo <db file> <table> <n>"; return 2
  let some n := n.toNat?
    | IO.eprintln "n must be a number"; return 2
  let h ← Handle.open path table
  let rows ← planIO h n
  for p in rows do
    IO.println s!"{p.id}\t{p.body}"
  IO.eprintln s!"[{rows.length} rows, {← h.pageFetches} page fetches]"
  return 0
