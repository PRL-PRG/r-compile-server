# Saner makefile
MAKEFLAGS += --no-builtin-rules

LLVM_LIB := $(shell llvm-config-17 --libfiles)
BEAR := $(shell command -v bear 2> /dev/null)

BASE_DIR = $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST))))/../..)
R_HOME ?= $(BASE_DIR)/external/R
R := $(R_HOME)/bin/R --slave
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

test: install
	$(LLVM_R) -e "tinytest::test_package('rsh')"

BENCH_ITER := 30

benchmark:
	$(LLVM_R) -f inst/benchmarks/simple/harness.R --args super-while $(BENCH_ITER) 2000000

test6:
	$(LLVM_R) -f test6.R