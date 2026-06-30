include ../../common.mk

TESTS = $(filter-out helpers.R,$(sort $(wildcard *.R)))

.PHONY: all test clean

all: test

test:
	@for test in $(TESTS); do \
		echo "Running $$test..."; \
		$(RSCRIPT) --vanilla $$test || exit 1; \
	done

clean:
	@rm -f *.Rout .RData
