# Saner makefile
MAKEFLAGS += --no-builtin-rules

LLVM_LIB := $(shell llvm-config-17 --libfiles 2> /dev/null                                         \
					|| /opt/homebrew/Cellar/llvm@17/*/bin/llvm-config --libfiles 2> /dev/null      \
					|| /usr/local/Homebrew/Cellar/llvm@17/*/bin/llvm-config --libfiles 2> /dev/null\
					|| (echo "please install LLVM 17"; exit 1))
BEAR := $(shell command -v bear 2> /dev/null)

BASE_DIR = $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST))))/..)
RSH_HOME = $(BASE_DIR)/client/rsh
R_HOME ?= $(BASE_DIR)/external/R
R := $(R_HOME)/bin/R --slave --no-restore
LLVM_R := LD_PRELOAD=$(LLVM_LIB) $(R)


.PHONY: package
package:
	$(LLVM_R) Rscript compile-package.R tidyr
