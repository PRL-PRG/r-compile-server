# Saner makefile
MAKEFLAGS += --no-builtin-rules

LLVM_LIB := $(shell llvm-config-17 --libfiles)
BEAR := $(shell command -v bear 2> /dev/null)

BASE_DIR = $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST))))/../..)
R_HOME ?= $(BASE_DIR)/external/R
R := $(R_HOME)/bin/R

.PHONY: all build check document test install setup

all: install

build:
	$(R) CMD build .

clean:
	-rm -f rsh*tar.gz
	-rm -fr rsh.Rcheck
	-rm -rf src/*.o src/*.so
	-rm -f src/Makevars

document:
	$(R) -e 'devtools::document()'

install: export LD_PRELOAD=$(LLVM_LIB)
install:
	$(R) CMD INSTALL .

setup:
	$(BEAR) -- $(MAKE) clean install
