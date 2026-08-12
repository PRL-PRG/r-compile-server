include ../../common.mk

# helpers.R is sourced by the tests, it is not a test itself.
TESTS = $(filter-out helpers.R,$(sort $(wildcard *.R)))

.PHONY: all test clean gnur

all: test

test:
	@for test in $(TESTS); do \
		echo "Running $$test..."; \
		$(RSCRIPT) --vanilla $$test || exit 1; \
	done

# Run the suite under whatever R is on PATH, with the rcp engine disabled.
# Only checks that the expected values in these tests are what GNU R produces
# -- useful when adding a case, useless as a regression test for rcp.
gnur:
	@for test in $(TESTS); do \
		echo "Running $$test (GNU R only)..."; \
		STEPFOR_NO_RCP=1 Rscript --vanilla $$test || exit 1; \
	done

clean:
	@rm -f *.Rout .RData
