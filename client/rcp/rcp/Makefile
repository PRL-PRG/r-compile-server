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
test: install
	$(MAKE) -C tests test

.PHONY: run
run: install
	$(R)

.PHONY: debug
debug: install
	$(R) -d gdb

.PHONY: format
format:
	find src -type f \( -name "*.c" -o -name "*.h" -o -name "*.cpp" \) -exec clang-format -i {} +

.PHONY: setup
setup:
	$(R) --quiet -e 'install.packages("microbenchmark", repos="https://cloud.r-project.org")'

BENCH_ITER ?= 15
BENCH_PARALLEL ?= 1

.PHONY: benchmark
benchmark:
	@RSH_HOME=$(RSH_HOME) R_HOME=$(R_HOME) ./inst/benchmarks/run-benchmarks.sh --runs $(BENCH_ITER) --parallel $(BENCH_PARALLEL)

compile_commands.json:
	bear -- $(MAKE) clean install
