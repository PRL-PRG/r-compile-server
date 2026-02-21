include ../../common.mk

.PHONY: all test clean

all: test

test:
	R_HOME=$(R_HOME) ./run-perf-tests.sh

clean:
	@rm -f *.Rout .RData perf.data perf.jit.data jitted-*.so /tmp/jit-*.dump
