# Saner makefile
BASE_DIR := $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST)))))
TOOLS_DIR := $(BASE_DIR)/tools

.PHONY: setup
setup:
	$(TOOLS_DIR)/build-gnur.sh $(BASE_DIR)/external/R

.PHONY: setup-git
setup-git:
	cp -f .githooks/pre-commit.sh .git/hooks/pre-commit
