# Saner makefile
MAKEFLAGS += --no-builtin-rules

BASE_DIR = $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST))))/..)
R_HOME ?= $(BASE_DIR)/external/R
R := $(R_HOME)/bin/R

build:
	mvn $(MVN_ARGS) package

format:
	mvn $(MVN_ARGS) spotless:apply

# `test` only runs unit tests
test:
	R_BIN=$(R) mvn $(MVN_ARGS) test

# `verify` runs both tests and static analyses
verify:
	R_BIN=$(R) mvn $(MVN_ARGS) verify

clean:
	mvn $(MVN_ARGS) clean

.PHONY: run
run: 
	R_HOME="$(R_HOME)" mvn compile exec:java
