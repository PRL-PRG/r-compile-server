# Saner makefile
MAKEFLAGS += --no-builtin-rules

LLVM_LIB := $(shell llvm-config-17 --libfiles 2> /dev/null                                         \
					|| /opt/homebrew/Cellar/llvm@17/*/bin/llvm-config --libfiles 2> /dev/null      \
					|| /usr/local/Homebrew/Cellar/llvm@17/*/bin/llvm-config --libfiles 2> /dev/null\
					|| (echo "please install LLVM 17"; exit 1))
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

BENCH_ITER ?= 15

BENCH_DIR = $(RSH_HOME)/inst/benchmarks
BENCH_NAME ?= $(shell echo "$$(date +'%Y%m%d-%H%M%S')-$$(git rev-parse --short HEAD)")
BENCH_OUT_DIR := $(shell echo "$$(pwd)/benchmark-results")/$(BENCH_NAME)
BENCH_R = R_PROFILE_USER=$(BENCH_DIR)/Rprofile.site $(LLVM_R) -f
BENCH_OPTS ?= --rsh
FILTER ?=
HARVEST_OPTS ?=

.PHONY: benchmark
benchmark:
	@RVER=$$($(R_HOME)/bin/Rscript -e 'cat(paste(R.version$$major, R.version$$minor, sep="."))' 2>/dev/null); \
	CRAN_LIB=$(BENCH_DIR)/cran-harvest/lib/$$RVER; \
	if [ -d "$$CRAN_LIB" ]; then export R_LIBS_USER="$$CRAN_LIB$${R_LIBS_USER:+:$$R_LIBS_USER}"; fi; \
	total=0; failed=0; failed_tests=""; \
	for file in $$(find $(BENCH_DIR) -mindepth 2 -name "*$(FILTER)*.R" -not -path "*/cran-harvest/*"); do \
		test=$$(basename $$file); \
		label=$$(echo "$${file#$(BENCH_DIR)/}" | sed 's#\.R$$##; s#/#__#g'); \
		total=$$((total + 1)); \
		echo "$(TXT_BOLD)┌──── $$test ...$(TXT_NORM)"; \
		cmd="$(BENCH_R) $(BENCH_DIR)/harness.R --args --runs $(BENCH_ITER) --output-dir $(BENCH_OUT_DIR) --name $$label $(BENCH_OPTS) $${file%.*}"; \
		echo $$cmd; \
		eval "$$cmd"; \
		exit=$$?; \
		echo -n "$(TXT_BOLD)└──── $$test: "; \
		if [ $$exit -eq 0 ]; then \
			echo "$(TXT_GREEN)OK$(TXT_NORM) (output in $(BENCH_OUT_DIR)/$$label.csv)"; \
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
		$(R) -f $(BENCH_DIR)/benchmark.R --args save $(BENCH_OUT_DIR)/benchmarks.csv $(BENCH_OUT_DIR)

.PHONY: benchmark-baseline
benchmark-baseline:
	$(MAKE) benchmark BENCH_OPTS=--bc BENCH_NAME=baseline

# Provision the CRAN package benchmarks: install the pinned packages (into a
# per-R-version library under inst/benchmarks/cran-harvest/lib) and generate the
# cran/ benchmark group. One-time; `make benchmark` then runs them like any
# other suite. Use R_HOME=... to target a different R (e.g. a vanilla bc R) and
# HARVEST_OPTS=--install-only to only populate that R's library.
.PHONY: cran-harvest
cran-harvest:
	$(R_HOME)/bin/Rscript $(BENCH_DIR)/cran-harvest/harvest.R $(HARVEST_OPTS)

