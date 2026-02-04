include ../../common.mk

SUBDIRS = gdb-basic gdb-next gdb-recursion

.PHONY: all test clean re-record

all: test

test:
	@R_HOME=$(R_HOME) python3 ./run-gdb-tests.py $(SUBDIRS)

re-record:
	@R_HOME=$(R_HOME) python3 ./run-gdb-tests.py --update $(SUBDIRS)

clean:
	for dir in $(SUBDIRS); do \
		rm -f $$dir/actual.log; \
	done

