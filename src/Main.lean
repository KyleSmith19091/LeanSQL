import Plan
import Bench

def main (args : List String) : IO UInt32 := do
  if let ["bench", path, table, ms] := args then
    let some ms := ms.toNat? | IO.eprintln "budget must be a number of milliseconds"; return 2
    return if (← benchDb path table ms) then 0 else 1
  let [path, table, n] := args
    | IO.eprintln "usage: leansql-demo <db file> <table> <n>\n       leansql-demo bench <db file> <table> <ms per cell>"; return 2
  let some n := n.toNat?
    | IO.eprintln "n must be a number"; return 2
  let h ← Handle.open path table
  let rows ← planIO h n
  for p in rows do
    IO.println s!"{p.id}\t{p.body}"
  IO.eprintln s!"[{rows.length} rows, {← h.pageFetches} page fetches]"
  return 0
