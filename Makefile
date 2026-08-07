# Saner makefile
BASE_DIR := $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST)))))
TOOLS_DIR := $(BASE_DIR)/tools

.PHONY: setup
setup: setup-gnur
	$(MAKE) -C client setup

# Build GNU-R in `R` and populate its library with what the server's tests
# expect to find there. Split out of `setup` so CI can provision R on its own,
# without also building the client.
#
# `GNURSessionTest` loads `yaml` out of the vendored R's own library, so a copy
# has to be installed there; nothing else in the repository uses it. The version
# is deliberately not pinned -- the test reads whichever one this installs.
.PHONY: setup-gnur
setup-gnur:
	$(TOOLS_DIR)/build-gnur.sh R
	$(BASE_DIR)/R/bin/Rscript -e 'install.packages("yaml", repos = "https://cloud.r-project.org")'

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
