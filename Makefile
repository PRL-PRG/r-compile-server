# Saner makefile
BASE_DIR := $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST)))))
TOOLS_DIR := $(BASE_DIR)/tools

.PHONY: setup
setup:
	$(MAKE) -C external
	$(MAKE) -C client setup

.PHONY: setup-git
setup-git:
	cp -f .githooks/pre-commit.sh .git/hooks/pre-commit

.PHONY: clean
clean: 
	$(MAKE) -C server clean 
	$(MAKE) -C client clean

.PHONY: build
build:
	$(MAKE) -C server build
	$(MAKE) -C client build

.PHONY: test
test:
	$(MAKE) -C server test
	$(MAKE) -C client test

.PHONY: verify
verify:
	$(MAKE) -C server verify
	$(MAKE) -C client verify
