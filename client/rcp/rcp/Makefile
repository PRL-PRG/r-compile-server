include common.mk

.PHONY: all
all: install

.PHONY: install
BEAR := $(shell command -v bear 2>/dev/null)
BEAR := $(if $(BEAR),$(BEAR) --)

install:
	$(BEAR) $(R) CMD INSTALL .

.PHONY: clean
clean:
	$(MAKE) -C src -f Makevars clean
	rm -f compile_commands.json

.PHONY: test
test: install
	$(MAKE) -C tests test

.PHONY: run
run: install
	$(R)

.PHONY: debug
debug: install
	RCP_GDB_JIT=1 RCP_DUMP_DIR=/tmp $(R) -d gdb

.PHONY: format
format:
	find src -type f \( -name "*.c" -o -name "*.h" -o -name "*.cpp" \) -exec clang-format -i {} +

BENCH_ITER ?= 15
BENCH_PARALLEL ?= 1
# Benchmark results go under the repo's (gitignored) measurements/ folder, which
# unifies all local measurement output (benchmarks here, profiling counts under
# tools/profile-counts). Each run lands in its own datetime subfolder so previous
# results are never overwritten. Absolute so the harness, which chdir()s into
# each benchmark's directory, writes to the right place. (tools/profile-counts'
# throughput target overrides BENCH_OUT_DIR to share its run's stamp.)
BENCH_STAMP := $(shell date +%Y-%m-%d_%H-%M-%S)
BENCH_OUT_DIR ?= $(ROOT_DIR)/measurements/benchmarks/$(BENCH_STAMP)
HARVEST_OPTS ?=

RSH_HOME ?= ../external/rsh
R_HOME ?= $(RSH_HOME)/external/R

# The benchmark infrastructure (runner, harness, suites, CRAN harvester) lives
# in the rsh project so it is shared; rcp just drives it with its own R. Add a
# benchmark by dropping a file into a group folder under
# $(RSH_HOME)/inst/benchmarks -- no change here needed.
.PHONY: benchmark
benchmark:
	@$(call ensure_microbenchmark_installed)
	@RSH_HOME=$(RSH_HOME) R_HOME=$(R_HOME) $(RSH_HOME)/inst/benchmarks/run-benchmarks.sh \
		--runs $(BENCH_ITER) --parallel $(BENCH_PARALLEL) \
		$(if $(BENCH_OUT_DIR),--output $(BENCH_OUT_DIR))

# Provision the CRAN package benchmarks (install pinned packages into a
# per-R-version library and generate the cran/ group). One-time; `make
# benchmark` then runs whatever has been harvested. Override the target R with
# R_HOME=... (e.g. the vanilla bc R) and pass extra flags via HARVEST_OPTS.
.PHONY: cran-harvest
cran-harvest:
	@RSH_HOME=$(RSH_HOME) R_HOME=$(R_HOME) "$(RSCRIPT)" \
		$(RSH_HOME)/inst/benchmarks/cran-harvest/harvest.R $(HARVEST_OPTS)
