include ../../../common.mk

.PHONY: all test clean

all: test

test:
	R_HOME=$(R_HOME) ../run_test.sh $(ARGS)

re-record:
	$(MAKE) test ARGS="--update"

clean:
	rm -f actual.log