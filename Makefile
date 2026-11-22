SQLITE_DIR := vendor/sqlite-amalgamation-3540100
LEAN_PREFIX := $(shell lean --print-prefix)
MODULES := Model Sqlite Plan Bench Main
GEN := $(addprefix generated/,$(addsuffix .c,$(MODULES)))
export LEAN_PATH := $(CURDIR)/build

.PHONY: all clean show test demo bench
_dirs := $(shell mkdir -p build generated)
all: build/leansql-demo

# Lean -> C. The generated C is also kept in generated/ so you can read it without building.
build/Model.olean generated/Model.c: src/Model.lean
	lean --root=src -o build/Model.olean -c generated/Model.c $<
build/Sqlite.olean generated/Sqlite.c: src/Sqlite.lean
	lean --root=src -o build/Sqlite.olean -c generated/Sqlite.c $<
build/Plan.olean generated/Plan.c: src/Plan.lean build/Model.olean build/Sqlite.olean
	lean --root=src -o build/Plan.olean -c generated/Plan.c $<
build/Bench.olean generated/Bench.c: src/Bench.lean build/Plan.olean
	lean --root=src -o build/Bench.olean -c generated/Bench.c $<
generated/Main.c: src/Main.lean build/Bench.olean
	lean --root=src -c generated/Main.c $<

# SQLite amalgamation + shim: one translation unit, so the internal B-tree API is visible.
$(SQLITE_DIR)/sqlite3.c:
	scripts/fetch-sqlite.sh

build/sqlite_shim.o: c/sqlite_shim.c c/shim.h $(SQLITE_DIR)/sqlite3.c
	cc -O2 -I$(SQLITE_DIR) -Ic -DSQLITE_THREADSAFE=0 -DSQLITE_OMIT_LOAD_EXTENSION -w -c $< -o $@

build/lean_ffi.o: c/lean_ffi.c c/shim.h
	leanc -O2 -Ic -c $< -o $@

build/%.o: generated/%.c
	leanc -O2 -c $< -o $@

build/leansql-demo: $(addprefix build/,$(addsuffix .o,$(MODULES))) build/lean_ffi.o build/sqlite_shim.o
	leanc -o $@ $^

show: $(GEN)
	@scripts/show.sh

test: build/leansql-demo
	@scripts/test.sh

demo: build/leansql-demo
	@scripts/demo.sh

bench: build/leansql-demo
	@scripts/bench.sh

clean:
	rm -rf build generated/*.c
