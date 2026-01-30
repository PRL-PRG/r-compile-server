include ../../../common.mk

.PHONY: all test clean

all: test

test:
	R_HOME=$(R_HOME) ./run.sh

clean:
	rm -f gdb_output.log