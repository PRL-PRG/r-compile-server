include ../../common.mk

.PHONY: all test clean

all: test

test:
	@RSH_HOME=$(RSH_HOME) R_HOME=$(R_HOME) ../../inst/benchmarks/run-benchmarks.sh

clean:
	@true
