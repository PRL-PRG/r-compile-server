include common.mk

.PHONY: all
all: install

.PHONY: install
install:
	$(R) CMD INSTALL .

.PHONY: clean
clean:
	$(MAKE) -C src -f Makevars clean

.PHONY: test
test: install
	$(MAKE) -C tests test

.PHONY: run
run: install
	$(R)

.PHONY: debug
debug: install
	$(R) -d gdb

.PHONY: format
format:
	find src -type f \( -name "*.c" -o -name "*.h" -o -name "*.cpp" \) -exec clang-format -i {} +

compile_commands.json:
	bear -- $(MAKE) clean install
