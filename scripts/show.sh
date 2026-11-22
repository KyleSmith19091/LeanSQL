#!/bin/sh
# Print the Lean source of the plan next to the C that Lean generated for it.
cd "$(dirname "$0")/.."
rule() { printf '\n\033[1m── %s ──\033[0m\n' "$1"; }
cfun() { awk -v n="$2" '$0 ~ "^LEAN_EXPORT lean_object\\* "n"\\(.*\\)\\{" {p=1} p {print} p && /^}/ {exit}' "$1"; }

rule "Lean: src/Plan.lean"
sed -n '/^def walkBack/,$p' src/Plan.lean
rule "C: generated/Plan.c  l_planIO"
cfun generated/Plan.c l_planIO
rule "C: generated/Plan.c  l_walkBack"
cfun generated/Plan.c l_walkBack
rule "C: the calls that reach SQLite (c/lean_ffi.c -> c/sqlite_shim.c -> sqlite3BtreeLast / sqlite3BtreePrevious)"
grep -n "sqlite3BtreeLast\|sqlite3BtreePrevious" c/sqlite_shim.c
