include common.mk

.PHONY: check-toolchain
check-toolchain:
	@command -v $(CC) >/dev/null 2>&1 || (echo "Missing compiler: $(CC)"; exit 1)
	@command -v $(CXX) >/dev/null 2>&1 || (echo "Missing compiler: $(CXX)"; exit 1)
	@cc_ver=`$(CC) -dumpfullversion -dumpversion | cut -d. -f1`; \
	if [ "$$cc_ver" != "14" ]; then \
		echo "Expected GCC major version 14 for $(CC), got $$cc_ver"; \
		exit 1; \
	fi
	@cxx_ver=`$(CXX) -dumpfullversion -dumpversion | cut -d. -f1`; \
	if [ "$$cxx_ver" != "14" ]; then \
		echo "Expected G++ major version 14 for $(CXX), got $$cxx_ver"; \
		exit 1; \
	fi
	@printf 'int main(void){return 0;}\n' | $(CC) $(C_STD_FLAG) -x c -fsyntax-only -
	@printf '#include <concepts>\nint main(){return 0;}\n' | $(CXX) $(CXX_STD_FLAG) -x c++ -fsyntax-only -

.PHONY: all
all: install

.PHONY: install
install: check-toolchain
	CC="$(CC)" CXX="$(CXX)" $(R) CMD INSTALL .
	$(R) CMD INSTALL .

.PHONY: clean
clean:
	$(MAKE) -C src -f Makevars clean

.PHONY: test
test: check-toolchain install
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
