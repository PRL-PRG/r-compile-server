include ../../common.mk

.PHONY: all test clean

all: test

test:
	@echo "Running exception unwinding test..."
	@$(RSCRIPT) --vanilla test.R || exit 1

clean:
	@rm -f *.Rout .RData
