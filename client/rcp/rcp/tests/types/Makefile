include ../../common.mk

TESTS = basic.R

.PHONY: all test clean

all: test

test:
	@for test in $(TESTS); do \
		echo "Running $$test..."; \
		$(R) --vanilla --quiet < $$test || exit 1; \
	done

clean:
	@rm -f *.Rout .RData
