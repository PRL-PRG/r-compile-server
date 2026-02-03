include ../../common.mk

SUBDIRS = gdb-basic gdb-next recursion

.PHONY: all test clean

all: test

test:
	@echo "Checking for GDB JIT support..."
	@if $(R_HOME)/bin/Rscript -e "library(rcp); if(!.Call('rcp_gdb_jit_support', PACKAGE='rcp')) quit(status=1)"; then \
		echo "GDB JIT support enabled. Running tests."; \
		for dir in $(SUBDIRS); do \
			$(MAKE) -C $$dir test || exit 1; \
		done; \
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
