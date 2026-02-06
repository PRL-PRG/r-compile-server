include ../../common.mk

.PHONY: all test clean

all: test

test:
	@RSH_HOME=$(RSH_HOME) R_HOME=$(R_HOME) ../../inst/benchmarks/run-benchmarks.sh
	@$(R) --slave --no-restore -f ../../inst/benchmarks/benchmark-compiler.R --args $(RSH_HOME)/inst/benchmarks

clean:
	@true
