# Saner makefile
MAKEFLAGS += --no-builtin-rules

LLVM_LIB := $(shell llvm-config-17 --libfiles)
BEAR := $(shell command -v bear 2> /dev/null)

BASE_DIR = $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST))))/../..)
RSH_HOME = $(BASE_DIR)/client/rsh
R_HOME ?= $(BASE_DIR)/external/R
R := $(R_HOME)/bin/R --slave --no-restore
LLVM_R := LD_PRELOAD=$(LLVM_LIB) $(R)


CRAN_MIRROR ?= https://cloud.r-project.org
PKG_INSTALL_TASKS ?= 4

.PHONY: all
all: install test benchmark

.PHONY: clean
clean:
	-rm -f rsh*tar.gz
	-rm -fr rsh.Rcheck
	-rm -rf src/*.so
	-find src -name '*.o' -delete

.PHONY: build
build:
	$(LLVM_R) CMD build .

.PHONY: install
install:
	$(LLVM_R) CMD INSTALL --install-tests --use-LTO .

.PHONY: setup
.ONESHELL:
setup:
	$(R) <<-'EOF'
	d <- read.dcf("$(RSH_HOME)/DESCRIPTION");
	pkgs <- strsplit(gsub("\n", " ", d[1,"Suggests"]), ",\\s*")[[1]];
	pkgs <- gsub(" \\(.*\\)", "", pkgs);
	to_install <- setdiff(pkgs, rownames(installed.packages()));
	if (length(to_install)) {
	  install.packages(to_install, Ncpus=$(PKG_INSTALL_TASKS), repos="$(CRAN_MIRROR)")
	}
	EOF

.PHONY: compile_commands.json
compile_commands.json:
	$(BEAR) -- $(MAKE) clean install

TEST_DIR = $(RSH_HOME)/tests
TEST_R = R_PROFILE_USER=$(TEST_DIR)/Rprofile.site $(LLVM_R) -f
TXT_BOLD = \033[1m
TXT_NORM = \033[0m
TXT_GREEN = \033[0;32m
TXT_RED = \033[0;31m

.PHONY: test
test:
	@for file in $(TEST_DIR)/*.R; do \
		test=$$(basename $$file); \
		echo "$(TXT_BOLD)┌──── $$test ...$(TXT_NORM)"; \
		cmd="$(TEST_R) $$file;"; \
		echo $$cmd; \
		eval "$$cmd"; \
		exit=$$?; \
		echo -n "$(TXT_BOLD)└──── $$test: "; \
	  if [ $$exit -eq 0 ]; then \
			echo "$(TXT_GREEN)OK$(TXT_NORM)"; \
		else \
		echo "$(TXT_RED)FAIL$(NO_NORM) $$exit$(TXT_NORM)"; \
		fi; \
	done

BENCH_ITER := 30

BENCH_DIR = $(RSH_HOME)/inst/benchmarks
BENCH_NAME ?= $(shell echo "$$(date +'%Y%m%d-%H%M%S')-$$(git rev-parse --short HEAD)")
BENCH_OUT_DIR := $(shell echo "$$(pwd)/benchmark-results")/$(BENCH_NAME)
BENCH_R = R_PROFILE_USER=$(BENCH_DIR)/Rprofile.site $(LLVM_R) -f
OPTS ?= --rsh
FILTER ?=

.PHONY: benchmark
benchmark:
	@total=0; failed=0; failed_tests=""; \
	for file in $$(find $(BENCH_DIR) -mindepth 2 -name "*$(FILTER)*.R"); do \
		test=$$(basename $$file); \
		total=$$((total + 1)); \
		echo "$(TXT_BOLD)┌──── $$test ...$(TXT_NORM)"; \
		cmd="$(BENCH_R) $(BENCH_DIR)/harness.R --args --output-dir $(BENCH_OUT_DIR) $(OPTS) $${file%.*}"; \
		echo $$cmd; \
		eval "$$cmd"; \
		exit=$$?; \
		echo -n "$(TXT_BOLD)└──── $$test: "; \
		if [ $$exit -eq 0 ]; then \
			echo "$(TXT_GREEN)OK$(TXT_NORM) (output in $(BENCH_OUT_DIR)/$${test%.*}.csv)"; \
		else \
			echo "$(TXT_RED)FAIL$(NO_NORM) $$exit$(TXT_NORM)"; \
			failed=$$((failed + 1)); \
			failed_tests="$$failed_tests $$test"; \
		fi; \
	done; \
	echo "$(TXT_BOLD)========================================$(TXT_NORM)"; \
	echo "$(TXT_BOLD)Total tests: $$total$(TXT_NORM)"; \
	echo "$(TXT_BOLD)Failed: $$failed$(TXT_NORM)"; \
	if [ $$failed -gt 0 ]; then \
		echo "$(TXT_BOLD)Failed tests:$(TXT_RED)$$failed_tests$(TXT_NORM)"; \
	fi
	$(LLVM_R) -f $(BENCH_DIR)/benchmark.R --args save $(BENCH_OUT_DIR)/benchmarks.csv $(BENCH_OUT_DIR)

.PHONY: benchmark-baseline
benchmark-baseline: 
	$(MAKE) benchmark OPTS=--bc BENCH_NAME=baseline

BC_PROF_HOME ?= $(realpath $(BASE_DIR)/../bc-prof-gnu-r)
BC_PROF_R := $(BC_PROF_HOME)/bin/R --slave --no-restore
BC_PROF_OUT_DIR := $(shell echo "$$(pwd)/bcprof-results")

.PHONY: bytecode-profile 
bytecode-profile:
	find $(BENCH_DIR) -mindepth 2 -name "*.R" | while read file; do \
		test=$$(basename $$file); \
		echo "$(TXT_BOLD)┌──── $$test ...$(TXT_NORM)"; \
		cmd="$(BC_PROF_R) -f $(BENCH_DIR)/bc-prof-harness.R --args --output-dir $(BC_PROF_OUT_DIR)  $${file%.*}"; \
		echo $$cmd; \
		eval "$$cmd"; \
		exit=$$?; \
		echo -n "$(TXT_BOLD)└──── $$test: "; \
		if [ $$exit -eq 0 ]; then \
			echo "$(TXT_GREEN)OK$(TXT_NORM) (output in $(BC_PROF_OUT_DIR)/$${test%.*}.csv)"; \
		else \
			echo "$(TXT_RED)FAIL$(NO_NORM) $$exit$(TXT_NORM)"; \
		fi; \
	done