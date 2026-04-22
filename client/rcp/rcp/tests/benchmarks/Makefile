include ../../common.mk

.PHONY: all test clean

all: test

test:
	@$(call ensure_microbenchmark_installed)
	@RSH_HOME=$(RSH_HOME) R_HOME=$(R_HOME) ../../inst/benchmarks/run-benchmarks.sh
	@$(RSCRIPT) --vanilla ../../inst/benchmarks/benchmark-compiler.R $(RSH_HOME)/inst/benchmarks

clean:
	@true
