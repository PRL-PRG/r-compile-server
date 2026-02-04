include ../../common.mk

SUBDIRS = gdb-basic gdb-next gdb-recursion

.PHONY: all test clean

all: test

test:
	@echo "Checking for GDB JIT support..."
	@if $(R_HOME)/bin/Rscript -e "library(rcp); if(!.Call('rcp_gdb_jit_support', PACKAGE='rcp')) quit(status=1)"; then \
		echo "GDB JIT support enabled. Running tests."; \
		failures=0; \
		total=0; \
		for dir in $(SUBDIRS); do \
			total=$$((total + 1)); \
			if ! $(MAKE) -C $$dir test; then \
				failures=$$((failures + 1)); \
			fi; \
		done; \
		echo "Ran $$total tests. $$failures failed."; \
		if [ $$failures -ne 0 ]; then exit 1; fi; \
	else \
		echo "Skipping debugging tests (GDB_JIT_SUPPORT disabled)"; \
	fi

re-record:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir re-record || exit 1; \
	done

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
