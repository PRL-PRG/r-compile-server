# Saner makefile
MAKEFLAGS += --no-builtin-rules

LLVM_LIB := $(shell llvm-config-17 --libfiles)
BEAR := $(shell command -v bear 2> /dev/null)

BASE_DIR = $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST))))/../..)
RSH_HOME = $(BASE_DIR)/client/rsh
R_HOME ?= $(BASE_DIR)/external/R
R := $(R_HOME)/bin/R --slave --no-restore
LLVM_R := LD_PRELOAD=$(LLVM_LIB) $(R)

.PHONY: all
all: install test benchmark

.PHONY: build
build:
	$(R) CMD build .

.PHONY: clean
clean:
	-rm -f rsh*tar.gz
	-rm -fr rsh.Rcheck
	-rm -rf src/*.so
	-find src -name '*.o' -exec rm {} \;

.PHONY: install
install:
	$(LLVM_R) CMD INSTALL --install-tests --use-LTO .

.PHONY: dependencies
dependencies:
	$(R) -e 'install.packages(c("microbenchmark"), repos="https://cloud.r-project.org", Ncpus=4)'

.PHONY: setup
setup: dependencies
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
		$(TEST_R) $$file; \
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
BENCH_R = R_PROFILE_USER=$(BENCH_DIR)/Rprofile.site $(LLVM_R) -f

.PHONY: benchmark
benchmark:
	@for file in $$(find $(BENCH_DIR) -mindepth 2 -name "*.R"); do \
		test=$$(basename $$file); \
		echo "$(TXT_BOLD)┌──── $$test ...$(TXT_NORM)"; \
		$(BENCH_R) $(BENCH_DIR)/harness.R --args $${file%.*}; \
		exit=$$?; \
		echo -n "$(TXT_BOLD)└──── $$test: "; \
	  if [ $$exit -eq 0 ]; then \
			echo "$(TXT_GREEN)OK$(TXT_NORM)"; \
		else \
		echo "$(TXT_RED)FAIL$(NO_NORM) $$exit$(TXT_NORM)"; \
		fi; \
	done

