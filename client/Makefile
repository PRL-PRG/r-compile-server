.PHONY: build
setup: 
	$(MAKE) -C rsh setup

install: 
	$(MAKE) -C rsh build

.PHONY: test
test: 
	$(MAKE) -C rsh install test

.PHONY: verify
verify: 
	$(MAKE) -C rsh install test benchmark
