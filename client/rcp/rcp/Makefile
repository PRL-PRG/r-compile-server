include common.mk

.PHONY: all
all: install

.PHONY: install
install:
	$(R) CMD INSTALL .

.PHONY: clean
clean:
	$(MAKE) -C src -f Makevars clean

.PHONY: test
test:
	$(MAKE) install DWARF_SUPPORT=0
	$(MAKE) -C tests test
	$(MAKE) install DWARF_SUPPORT=1
	$(MAKE) -C tests test

.PHONY: test-functional
test-functional: install
	$(MAKE) -C tests/smoketest test
	$(MAKE) -C tests/types test
	$(MAKE) -C tests/gdb-jit test

.PHONY: run
run: install
	$(R)

.PHONY: debug
debug:
	$(MAKE) install DWARF_SUPPORT=1
	RCP_GDB_JIT=1 RCP_DUMP_DIR=/tmp $(R) -d gdb

.PHONY: format
format:
	find src -type f \( -name "*.c" -o -name "*.h" -o -name "*.cpp" \) -exec clang-format -i {} +

.PHONY: setup
setup:
	$(R) --quiet -e 'install.packages("microbenchmark", repos="https://cloud.r-project.org")'

BENCH_ITER ?= 15
BENCH_PARALLEL ?= 1
BENCH_OUT_DIR ?=

.PHONY: benchmark
benchmark:
	@$(call ensure_microbenchmark_installed)
	@RSH_HOME=$(RSH_HOME) R_HOME=$(R_HOME) ./inst/benchmarks/run-benchmarks.sh \
		--runs $(BENCH_ITER) --parallel $(BENCH_PARALLEL) \
		$(if $(BENCH_OUT_DIR),--output $(BENCH_OUT_DIR))

compile_commands.json:
	bear -- $(MAKE) clean install
