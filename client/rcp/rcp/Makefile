include common.mk

.PHONY: all
all: install

STAMP := .install-stamp
STAMP_CFG := .install-stamp.cfg

# Config variables that should trigger a reinstall when changed
CUR_CFG := RCP_COMPILE_PROMISES=$(RCP_COMPILE_PROMISES) RELOC_MODEL=$(RELOC_MODEL) DEBUG=$(DEBUG) OPENMP=$(OPENMP) SPECIALIZE_STEPFOR=$(SPECIALIZE_STEPFOR) SPECIALIZE_SWITCH=$(SPECIALIZE_SWITCH) SPECIALIZE_MAKEPROM=$(SPECIALIZE_MAKEPROM) ALIGN_INSTRUCTIONS=$(ALIGN_INSTRUCTIONS)

.PHONY: install
install:
	@config_changed=0; \
	if [ ! -f $(STAMP_CFG) ] || [ "$$(cat $(STAMP_CFG))" != "$(CUR_CFG)" ]; then \
		config_changed=1; \
	fi; \
	if [ ! -f $(STAMP) ] || [ "$$config_changed" = "1" ] || \
	    [ -n "$$(find src R DESCRIPTION NAMESPACE common.mk $(RSH_HOME)/src/bc2c/runtime.h -newer $(STAMP) 2>/dev/null | head -1)" ]; then \
		MAKEFLAGS="$(MAKEFLAGS) CC=$(CC) CXX=$(CXX)" $(R) CMD INSTALL . && touch $(STAMP) && echo "$(CUR_CFG)" > $(STAMP_CFG); \
	else \
		echo "Nothing changed, skipping install."; \
	fi

.PHONY: clean
clean:
	$(MAKE) -C src -f Makevars clean
	rm -f $(STAMP) $(STAMP_CFG)

.PHONY: test
test: install
	$(MAKE) -C tests test; \
	status=$$?; \
	$(MAKE) clean \
	exit $$status

.PHONY: test-functional
test-functional: install
	$(MAKE) -C tests/smoketest test
	$(MAKE) -C tests/types test
	$(MAKE) -C tests/gdb-jit test

.PHONY: run
run: install
	$(R)

.PHONY: debug
debug: install
	RCP_GDB_JIT=1 RCP_DUMP_DIR=/tmp $(R) -d gdb

.PHONY: format
format:
	find src -type f \( -name "*.c" -o -name "*.h" -o -name "*.cpp" \) -exec clang-format -i {} +

.PHONY: setup
setup: check-toolchain
	$(R) --quiet -e 'install.packages("microbenchmark", repos="https://cloud.r-project.org")'

BENCH_ITER ?= 15
BENCH_PARALLEL ?= 1
BENCH_OUT_DIR ?=

.PHONY: benchmark
benchmark: check-toolchain
	@$(call ensure_microbenchmark_installed)
	@RSH_HOME=$(RSH_HOME) R_HOME=$(R_HOME) ./inst/benchmarks/run-benchmarks.sh \
		--runs $(BENCH_ITER) --parallel $(BENCH_PARALLEL) \
		$(if $(BENCH_OUT_DIR),--output $(BENCH_OUT_DIR))

compile_commands.json:
	bear -- $(MAKE) clean install
