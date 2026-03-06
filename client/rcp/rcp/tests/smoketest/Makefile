include ../../common.mk

TESTS = basic.R pkgcmp.R cmppkg-dot-functions.R dotcall-issue-12.R ggplot2-unwinding.R

.PHONY: all test clean

all: test

test:
	@for test in $(TESTS); do \
		echo "Running $$test..."; \
		$(R) --vanilla --quiet < $$test || exit 1; \
	done

clean:
	@rm -f *.Rout .RData
