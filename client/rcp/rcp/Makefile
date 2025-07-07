CC = gcc-14

# Default target
default: install

# Object files and executables
ROOT_DIR := $(realpath .)
STENCILS_OBJ = $(ROOT_DIR)/build/stencils.o
EXTRACTOR_BIN = $(ROOT_DIR)/build/extract_stencils
EXTRACTED_DIR = $(ROOT_DIR)/build/extracted
R_PACKAGE = $(ROOT_DIR)/build/rcp_1.0.0.0000.tar.gz
R_PACKAGE_SOURCE = $(shell find $(ROOT_DIR)/r-pkg/*)
RSH_HOME = $(ROOT_DIR)/../external/r-compile-server/client/rsh
R_HOME ?= $(ROOT_DIR)/../external/R
R_LIB = $(R_HOME)/library/rcp/libs/rcp.so

MCMODEL ?= large
C_FLAGS_ADDITIONAL ?=

$(STENCILS_OBJ): stencils/stencils.c
	@echo "Building stencils..."
	mkdir -p build
	$(CC) stencils/stencils.c -o $(STENCILS_OBJ) $(C_FLAGS_ADDITIONAL) -c -ffunction-sections -fno-stack-protector -fcf-protection=none -fno-asynchronous-unwind-tables -Os -march=native -fno-pic -mcmodel=$(MCMODEL) -fno-merge-constants -fno-jump-tables -I../external/R/include  -I../external/r-compile-server/client/rsh/src/bc2c
# -fno-align-functions -fno-align-jumps -fno-align-labels -fno-align-loops

$(EXTRACTOR_BIN): extractor/extract_stencils.c
	@echo "Building extractor..."
	mkdir -p build
	$(CC) extractor/extract_stencils.c -o $(EXTRACTOR_BIN) -lbfd -O3 -march=native -flto

$(R_PACKAGE): $(STENCILS_OBJ) $(EXTRACTOR_BIN)# $(R_PACKAGE_SOURCE)
	@echo "Extracting stencils..."
	cd build && mkdir -p extracted && cd extracted && ../extract_stencils ../stencils.o
	@echo "Creating package..."
	rm -f r-pkg/src/stencils
	ln -sfn ../../build/extracted r-pkg/src/stencils
	cd build && ../../external/R/bin/R CMD build ../r-pkg
	rm -f r-pkg/src/stencils

$(R_LIB): $(R_PACKAGE)
	@echo "Installing package..."
	cd build && ../../external/R/bin/R CMD INSTALL rcp_1.0.0.0000.tar.gz

.PHONY: install
install: $(R_LIB)


BENCH_ITER ?= 15
BENCH_NAME ?= $(shell echo "rcp-$$(date +'%Y%m%d-%H%M%S')-$$(git rev-parse --short HEAD)")
BENCH_OUT_DIR := $(shell echo "$$(pwd)/benchmark-results")/$(BENCH_NAME)
OPTS ?= --rsh


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
benchmark:
	@for file in $$(find $(BENCH_DIR) -mindepth 2 -name "*$(FILTER)*.R"); do \
		test=$$(basename $$file); \
		echo "$(TXT_BOLD)┌──── $$test ...$(TXT_NORM)"; \
		cmd="$(BENCH_R) $(HARNESS_BIN) --args --output-dir $(BENCH_OUT_DIR) $(OPTS) $${file%.*}"; \
		echo $$cmd; \
		eval "$$cmd"; \
		exit=$$?; \
		echo -n "$(TXT_BOLD)└──── $$test: "; \
	  if [ $$exit -eq 0 ]; then \
			echo "$(TXT_GREEN)OK$(TXT_NORM) (output in $(BENCH_OUT_DIR)/$${test%.*}.csv)"; \
		else \
		echo "$(TXT_RED)FAIL$(NO_NORM) $$exit$(TXT_NORM)"; \
		fi; \
	done
	$(R) -f $(BENCH_DIR)/benchmark.R --args save $(BENCH_OUT_DIR)/benchmarks.csv $(BENCH_OUT_DIR)


test: install


.PHONY: clean
clean:
	@echo "Cleaning up..."
	@rm -f r-pkg/src/stencils
	@rm -fr build
