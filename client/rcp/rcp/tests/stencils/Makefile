include ../../common.mk

STENCILS_OBJ = ../../src/stencils/stencils.o

.PHONY: all test clean

all: test

test:
	@echo "Checking .eh_frame in stencils.o (DWARF_SUPPORT=$(DWARF_SUPPORT))..."
	@if [ "$(DWARF_SUPPORT)" = "0" ] || [ -z "$(DWARF_SUPPORT)" ]; then \
		if readelf -S $(STENCILS_OBJ) | grep -q '\.eh_frame'; then \
			echo "FAIL: .eh_frame found in stencils.o but DWARF_SUPPORT=0"; \
			exit 1; \
		else \
			echo "PASS: no .eh_frame in stencils.o (DWARF_SUPPORT=0)"; \
		fi; \
	else \
		if readelf -S $(STENCILS_OBJ) | grep -q '\.eh_frame'; then \
			echo "PASS: .eh_frame present in stencils.o (DWARF_SUPPORT=1)"; \
		else \
			echo "FAIL: .eh_frame missing from stencils.o but DWARF_SUPPORT=1"; \
			exit 1; \
		fi; \
	fi

clean:
	@true
