include ../../common.mk

.PHONY: all test clean

all: test

test:
	@echo "Running exception unwinding test..."
	@$(R) --vanilla --quiet < test.R || exit 1

clean:
	@rm -f *.Rout .RData
