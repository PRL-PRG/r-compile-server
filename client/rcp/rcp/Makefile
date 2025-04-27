CC = gcc-14

# Default target
default: install

# Object files and executables
STENCILS_OBJ = build/stencils.o
EXTRACTOR_BIN = build/extract_stencils
EXTRACTED_DIR = build/extracted
R_PACKAGE = build/rcp_0.0.0.9000.tar.gz
R_PACKAGE_SOURCE = $(shell find r-pkg/*)
RSH_HOME = ../external/r-compile-server/client/rsh
R_HOME ?= ../external/R
R_LIB = $(R_HOME)/library/rcp/libs/rcp.so

$(STENCILS_OBJ): stencils/stencils.c
	@echo "Building stencils..."
	@mkdir -p build
	@$(CC) stencils/stencils.c -o $(STENCILS_OBJ) -c -ffunction-sections -fno-stack-protector -fcf-protection=none -fno-asynchronous-unwind-tables -Os -fno-pic -mcmodel=medium -fno-merge-constants -fno-jump-tables -I../external/R/include  -I../external/r-compile-server/client/rsh/src/bc2c

$(EXTRACTOR_BIN): extractor/extract_stencils.c
	@echo "Building extractor..."
	@mkdir -p build
	@$(CC) extractor/extract_stencils.c -o $(EXTRACTOR_BIN) -lbfd -Og -g -fsanitize=address -march=native

$(R_PACKAGE): $(STENCILS_OBJ) $(EXTRACTOR_BIN)# $(R_PACKAGE_SOURCE)
	@echo "Extracting stencils..."
	@cd build && mkdir -p extracted && cd extracted && ../extract_stencils ../stencils.o
	@echo "Creating package..."
	@rm -f r-pkg/src/stencils
	@ln -sfn ../../build/extracted r-pkg/src/stencils
	@cd build && ../../external/R/bin/R CMD build ../r-pkg
	@rm -f r-pkg/src/stencils

$(R_LIB): $(R_PACKAGE)
	@echo "Installing package..."
	@cd build && sudo ../../external/R/bin/R CMD INSTALL rcp_0.0.0.9000.tar.gz

.PHONY: install
install: $(R_LIB)


BENCH_ITER := 30


R := $(R_HOME)/bin/R --slave --no-restore
LLVM_R := $(R) #LD_PRELOAD=$(LLVM_LIB) $(R)
BENCH_DIR = $(RSH_HOME)/inst/benchmarks
HARNESS_BIN = harness.R
BENCH_R = R_PROFILE_USER=$(BENCH_DIR)/Rprofile.site $(LLVM_R) -f
FILTER ?=

.PHONY: run
run: install
	@$(R_HOME)/bin/R

.PHONY: benchmark
benchmark: install
	@for file in $$(find $(BENCH_DIR) -mindepth 2 -name "*$(FILTER)*.R"); do \
		test=$$(basename $$file); \
		echo "$(TXT_BOLD)┌──── $$test ...$(TXT_NORM)"; \
		cmd="$(BENCH_R) $(HARNESS_BIN) --args $${file%.*}"; \
		echo $$cmd; \
		eval "$$cmd"; \
		exit=$$?; \
		echo -n "$(TXT_BOLD)└──── $$test: "; \
	  if [ $$exit -eq 0 ]; then \
			echo "$(TXT_GREEN)OK$(TXT_NORM)"; \
		else \
		echo "$(TXT_RED)FAIL$(NO_NORM) $$exit$(TXT_NORM)"; \
		fi; \
	done

.PHONY: clean
clean:
	@echo "Cleaning up..."
	@rm -f r-pkg/src/stencils
	@rm -fr build
