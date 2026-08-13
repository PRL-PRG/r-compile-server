include ../../common.mk

# helpers.R is sourced by the tests, it is not a test itself.
TESTS = $(filter-out helpers.R,$(sort $(wildcard *.R)))

.PHONY: all test clean

all: test

# RCP_COUNTS_SLOW=1 additionally runs the counter-overflow check in
# 05-invariants.R, which spins for a couple of minutes.
test:
	@for test in $(TESTS); do \
		echo "Running $$test..."; \
		$(RSCRIPT) --vanilla $$test || exit 1; \
	done

clean:
	@rm -f *.Rout .RData
