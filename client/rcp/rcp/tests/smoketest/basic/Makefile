include ../../../common.mk

.PHONY: all test clean

all: test

test:
	@$(R) --no-save --quiet < test.R

clean:
	@rm -f .RData
