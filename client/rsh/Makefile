# Saner makefile
MAKEFLAGS += --no-builtin-rules

LLVM_LIB := $(shell llvm-config-17 --libfiles)
BEAR := $(shell command -v bear 2> /dev/null)

BASE_DIR = $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST))))/../..)
RSH_HOME = $(BASE_DIR)/client/rsh
R_HOME ?= $(BASE_DIR)/external/R
R := $(R_HOME)/bin/R --slave --no-restore
LLVM_R := LD_PRELOAD=$(LLVM_LIB) $(R)

.PHONY: all build check document test install setup

all: install

build:
	$(R) CMD build .

clean:
	-rm -f rsh*tar.gz
	-rm -fr rsh.Rcheck
	-rm -rf src/*.so
	-find src -name '*.o' -exec rm {} \;

install:
	$(LLVM_R) CMD INSTALL --install-tests --use-LTO .

setup:
	$(R) -e 'install.packages(c("microbenchmark", "tinytests"), repos="https://cloud.r-project.org", Ncpus=4)'
	$(BEAR) -- $(MAKE) install

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

.PHONY: benchmark
benchmark:
	$(LLVM_R) -f inst/benchmarks/simple/harness.R --args super-while $(BENCH_ITER) 2000000

