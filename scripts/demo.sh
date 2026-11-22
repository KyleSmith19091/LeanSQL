#!/bin/sh
# 100,000 posts in a ~4.5 MB file. Show how few pages the plan touches.
set -eu
cd "$(dirname "$0")/.."
DB=build/demo.db
python3 scripts/mkdb.py "$DB" 100000
echo "table: 100000 rows, $(sqlite3 "$DB" 'pragma page_count') pages of $(sqlite3 "$DB" 'pragma page_size') bytes"
for n in 1 20 2000; do
  echo; echo "last $n rows:"
  build/leansql-demo "$DB" posts "$n" 2>&1 >/dev/null | sed 's/^/  /'
done
echo; echo "last 3 rows:"; build/leansql-demo "$DB" posts 3 2>/dev/null
