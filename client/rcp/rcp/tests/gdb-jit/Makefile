include ../../common.mk

SUBDIRS = gdb-next gdb-recursion

.PHONY: all test clean re-record

all: test

test:
	@RCP_GDB_JIT=1 R_HOME=$(R_HOME) python3 ./run-gdb-tests.py $(SUBDIRS)

re-record:
	@RCP_GDB_JIT=1 R_HOME=$(R_HOME) python3 ./run-gdb-tests.py --update $(SUBDIRS)

clean:
	for dir in $(SUBDIRS); do \
		rm -f $$dir/actual.log; \
	done

