#!/bin/sh
# Download the SQLite amalgamation and check it against the SHA3-256 that sqlite.org publishes.
# (SQLite publishes SHA3-256, not SHA-256, so shasum cannot check it.)
set -eu
cd "$(dirname "$0")/.."
VER=3540100
YEAR=2026
SHA3=92281c86e2957f9b9305890f9ac04204caa7b677cc868dc326d942689df28e30
[ -f vendor/sqlite-amalgamation-$VER/sqlite3.c ] && exit 0
mkdir -p vendor build
curl -fsSL -o build/amalgamation.zip "https://www.sqlite.org/$YEAR/sqlite-amalgamation-$VER.zip"
got=$(python3 -c "import hashlib,sys;print(hashlib.sha3_256(open('build/amalgamation.zip','rb').read()).hexdigest())")
[ "$got" = "$SHA3" ] || { echo "SHA3-256 mismatch: $got" >&2; exit 1; }
unzip -qo build/amalgamation.zip -d vendor
