#!/usr/bin/env python3
"""Make a posts table. usage: mkdb.py <file> <rows> [gap-every]
With gap-every=k, every k-th rowid is skipped, so the ids are not 1..n."""
import os, sqlite3, sys
path, rows = sys.argv[1], int(sys.argv[2])
gap = int(sys.argv[3]) if len(sys.argv) > 3 else 0
if os.path.exists(path):
    os.remove(path)
db = sqlite3.connect(path)
db.execute("CREATE TABLE posts (id INTEGER PRIMARY KEY, body TEXT)")
rid, made = 0, 0
while made < rows:
    rid += 1
    if gap and rid % gap == 0:
        continue
    db.execute("INSERT INTO posts VALUES (?, ?)", (rid, f"post number {rid} " + "x" * (rid % 40)))
    made += 1
db.commit()
db.close()
