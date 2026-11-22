#!/bin/sh
# Time "the last n rows" through the SQL engine and through the B-tree, on tables of three sizes.
# usage: scripts/bench.sh [ms per cell, default 300]
set -eu
cd "$(dirname "$0")/.."
MS=${1:-300}
DB=build/bench.db
echo "Warm caches, one thread. Nanoseconds per query (lower is better)."
for rows in 1000 100000 1000000; do
  python3 scripts/mkdb.py "$DB" "$rows"
  echo
  echo "### $rows rows ($(sqlite3 "$DB" 'pragma page_count') pages)"
  echo
  echo "| n | SQL (prepared) | SQL (prepare each time) | B-tree in C | B-tree via Lean | B-tree in C, txn kept open | B-tree via Lean, txn kept open |"
  echo "|--:|--:|--:|--:|--:|--:|--:|"
  build/leansql-demo bench "$DB" posts "$MS"
done
