include ../../common.mk

# Per-instruction execution-count profiling over the whole benchmark suite.
#
# Reuses the SHARED benchmark runner (rsh's run-benchmarks.sh) with our counting
# harness (via HARNESS_BIN), then aggregates the per-benchmark CSVs into a
# benchmark x instruction matrix + a tidy long form. Counting is a runtime option
# (rcp_count_enable), so no special RCP build/macro is needed.
#
# Just run it (parallel by default, since counting is not load-sensitive):
#   make -C tools/profile-counts
# Or compute native-instruction throughput per benchmark:
#   make -C tools/profile-counts throughput
# Knobs: RUNS (executions per benchmark), PARALLEL (concurrent benchmarks),
# FILTER (filename substring), STAMP (results subfolder name).
#
# Each run writes to a fresh measurements/<kind>/<STAMP> folder (STAMP defaults
# to the launch datetime), so previous results are never overwritten -- and a
# stale folder can't leak extra benchmarks into the aggregated output.

SELF_DIR   := $(ROOT_DIR)/tools/profile-counts
RUNNER     := $(RSH_HOME)/inst/benchmarks/run-benchmarks.sh
HARNESS    := $(SELF_DIR)/count-harness.R
AGGREGATE  := $(SELF_DIR)/aggregate-counts.R
THROUGHPUT := $(SELF_DIR)/throughput.R

RUNS     ?= 1
PARALLEL ?= $(shell nproc)
FILTER   ?=
# One datetime stamp per make invocation, shared by all three measurement kinds
# of a `throughput' run so they group together. Must be computed ONCE: with `?='
# STAMP stays recursively expanded and `$(shell date)' re-runs on every
# reference, giving the profile and throughput steps different folders. `:=' (via
# the ifndef guard, so STAMP=<name> can still override) fixes it.
ifndef STAMP
STAMP := $(shell date +%Y-%m-%d_%H-%M-%S)
endif
OUT       ?= $(ROOT_DIR)/measurements/profiling/$(STAMP)
BENCH_OUT ?= $(ROOT_DIR)/measurements/benchmarks/$(STAMP)
THRU_OUT  ?= $(ROOT_DIR)/measurements/throughput/$(STAMP)

.PHONY: all profile throughput install
all: profile

# Counting is a runtime option, so a normal install is enough (no macro).
install:
	$(MAKE) -C $(ROOT_DIR) install

# `-' on the runner so aggregation still runs if some benchmarks fail.
profile: install
	echo "Running the suite to measure execution count of each instruction ..."
	-@FILTER='$(FILTER)' RSH_HOME=$(RSH_HOME) R_HOME=$(R_HOME) HARNESS_BIN=$(HARNESS) \
		$(RUNNER) --runs $(RUNS) --parallel $(PARALLEL) --output $(OUT)
	@$(RSCRIPT) $(AGGREGATE) $(OUT)

# Native-instruction throughput per benchmark: measure the per-instruction
# counts (above), then time the suite via the rcp `benchmark' target (run from
# the rcp directory, sequential for accurate timing), then combine the two into
# measurements/throughput.csv -- instructions executed per second for each
# benchmark = total instructions in one run / geomean seconds per run.
throughput: profile
	echo "Running the suite to measure execution time (for throughput) ..."
	$(MAKE) -C $(ROOT_DIR) benchmark BENCH_OUT_DIR=$(BENCH_OUT)
	@$(RSCRIPT) $(THROUGHPUT) $(OUT) $(BENCH_OUT) $(THRU_OUT)/throughput.csv
