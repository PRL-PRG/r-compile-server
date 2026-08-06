# Saner makefile
MAKEFLAGS += --no-builtin-rules

SERVER_DIR := $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST)))))
BASE_DIR = $(realpath $(SERVER_DIR)/..)
R_HOME ?= $(BASE_DIR)/R
R := $(R_HOME)/bin/R
# The wrapper downloads and runs the Maven version pinned in
# `.mvn/wrapper/maven-wrapper.properties`, which is the one CI uses. Set
# `MVN=mvn` to build with the Maven on your `PATH` instead.
MVN ?= $(SERVER_DIR)/mvnw

build:
	$(MVN) $(MVN_ARGS) package

format:
	$(MVN) $(MVN_ARGS) spotless:apply

# `test` only runs unit tests
test:
	R_BIN=$(R) $(MVN) $(MVN_ARGS) test

.PHONY: test-bc2c-adhoc
test-bc2c-adhoc:
	$(MVN) -Dtest='BC2CCompilerTest#testAdhoc' test

# `verify` runs both tests and static analyses
verify:
	R_BIN=$(R) $(MVN) $(MVN_ARGS) verify

clean:
	$(MVN) $(MVN_ARGS) clean

.PHONY: run
run:
	R_HOME="$(R_HOME)" $(MVN) compile exec:java
