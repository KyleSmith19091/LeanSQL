#!/bin/sh
# Differential test: the Lean plan on the real cursor must equal
#   SELECT ... ORDER BY id DESC LIMIT n   (re-sorted oldest first)
# on tables with and without gaps in the rowids, for several n.
set -eu
cd "$(dirname "$0")/.."
BIN=build/leansql-demo
DB=build/test.db
fail=0
for spec in "0 0" "1 0" "5 0" "200 0" "5000 0" "5000 3" "300 2"; do
  set -- $spec
  rows=$1; gap=$2
  python3 scripts/mkdb.py "$DB" "$rows" "$gap"
  for n in 0 1 20 199 5000; do
    got=$($BIN "$DB" posts "$n" 2>/dev/null)
    want=$(sqlite3 "$DB" "SELECT id || char(9) || body FROM (SELECT id, body FROM posts ORDER BY id DESC LIMIT $n) ORDER BY id")
    if [ "$got" = "$want" ]; then :; else echo "FAIL rows=$rows gap=$gap n=$n"; fail=1; fi
  done
  echo "ok  rows=$rows gap=$gap"
done
exit $fail
