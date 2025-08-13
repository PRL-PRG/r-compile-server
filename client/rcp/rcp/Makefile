CC = gcc-14

# Default target
default: install

# Object files and executables
ROOT_DIR := $(realpath .)
BUILD_DIR := $(ROOT_DIR)/build
STENCILS_OBJ = $(BUILD_DIR)/stencils.o
EXTRACTOR_BIN = $(BUILD_DIR)/extract_stencils
EXTRACTED_DIR = $(BUILD_DIR)/extracted
R_PACKAGE = $(BUILD_DIR)/rcp_1.0.0.0000.tar.gz
R_PACKAGE_SOURCE = $(shell find $(ROOT_DIR)/r-pkg/*)
RSH_HOME = $(ROOT_DIR)/../external/rsh/client/rsh
R_HOME ?= $(ROOT_DIR)/../external/rsh/external/R
R_LIB = $(R_HOME)/library/rcp/libs/rcp.so

MCMODEL ?= medium
C_FLAGS_ADDITIONAL ?=

SPECIALIZE_STEPFOR ?= 1
SPECIALIZE_MATH1 ?= 0

DEFINE_FLAGS ?= 
ifneq ($(SPECIALIZE_STEPFOR),0)
  DEFINE_FLAGS += -DSTEPFOR_SPECIALIZE
endif
ifneq ($(SPECIALIZE_MATH1),0)
  DEFINE_FLAGS += -DMATH1_SPECIALIZE
endif

$(STENCILS_OBJ): stencils/stencils.c
	@echo "Building stencils..."
	mkdir -p build
	$(CC) stencils/stencils.c -o $(STENCILS_OBJ) $(C_FLAGS_ADDITIONAL) -c -ffunction-sections -fno-stack-protector -fcf-protection=none -fno-asynchronous-unwind-tables -Os -march=native -fno-pic -mcmodel=$(MCMODEL) -fno-merge-constants -fno-jump-tables -I$(R_HOME)/include -I$(RSH_HOME)/src/bc2c $(DEFINE_FLAGS)
# -fno-align-functions -fno-align-jumps -fno-align-labels -fno-align-loops

$(EXTRACTOR_BIN): extractor/extract_stencils.c
	@echo "Building extractor..."
	mkdir -p $(BUILD_DIR)
	$(CC) extractor/extract_stencils.c -o $(EXTRACTOR_BIN) -lbfd -O3 -march=native -flto $(DEFINE_FLAGS)

$(R_PACKAGE): $(STENCILS_OBJ) $(EXTRACTOR_BIN)# $(R_PACKAGE_SOURCE)
	@echo "Extracting stencils..."
	cd $(BUILD_DIR) && mkdir -p extracted && cd extracted && ../extract_stencils ../stencils.o
	@echo "Creating package..."
	rm -f $(ROOT_DIR)/r-pkg/src/stencils
	ln -sfn $(EXTRACTED_DIR) $(ROOT_DIR)/r-pkg/src/stencils
	ln -s $(RSH_HOME)/src/bc2c/runtime_internals.h $(ROOT_DIR)/r-pkg/src/runtime_internals.h
	ln -s $(ROOT_DIR)/rcp_common.h $(ROOT_DIR)/r-pkg/src/rcp_common.h
	cd $(BUILD_DIR) && $(R_HOME)/bin/R CMD build ../r-pkg
	rm -f $(ROOT_DIR)/r-pkg/src/rcp_common.h
	rm -f $(ROOT_DIR)/r-pkg/src/runtime_internals.h
	rm -f $(ROOT_DIR)/r-pkg/src/stencils

$(R_LIB): $(R_PACKAGE)
	@echo "Installing package..."
	cd build && MCMODEL=$(MCMODEL) SPECIALIZE_STEPFOR=$(SPECIALIZE_STEPFOR) SPECIALIZE_MATH1=$(SPECIALIZE_MATH1) $(R_HOME)/bin/R CMD INSTALL rcp_1.0.0.0000.tar.gz

.PHONY: install
install: $(R_LIB)


BENCH_ITER ?= 15
BENCH_NAME ?= $(shell echo "rcp-$$(date +'%Y%m%d-%H%M%S')-$$(git rev-parse --short HEAD)")
BENCH_OUT_DIR := $(shell echo "$$(pwd)/benchmark-results")/$(BENCH_NAME)
OPTS ?= --rsh

TXT_BOLD = \033[1m
TXT_NORM = \033[0m
TXT_GREEN = \033[0;32m
TXT_RED = \033[0;31m

R := $(R_HOME)/bin/R --slave --no-restore
LLVM_R := $(R) #LD_PRELOAD=$(LLVM_LIB) $(R)
BENCH_DIR = $(RSH_HOME)/inst/benchmarks
HARNESS_BIN = harness.R
BENCH_R = $(LLVM_R) -f
FILTER ?=

.PHONY: run
run: install
	@$(R_HOME)/bin/R

.PHONY: benchmark
benchmark: install
	mkdir -p $(BENCH_OUT_DIR)
	@for file in $$(find $(BENCH_DIR) -mindepth 2 -name "*$(FILTER)*.R"); do \
		test=$$(basename $$file); \
		test=$${test%.*}; \
		echo "$(TXT_BOLD)┌──── $$test ...$(TXT_NORM)"; \
		cmd="$(BENCH_R) $(HARNESS_BIN) --args --output-dir $(BENCH_OUT_DIR) $(OPTS) --runs $(BENCH_ITER) $${file%.*}"; \
		echo $$cmd; \
		eval "/usr/bin/time -v -o \"$(BENCH_OUT_DIR)/$$test.time\" $$cmd"; \
		exit=$$?; \
		echo -n "$(TXT_BOLD)└──── $$test: "; \
	  if [ $$exit -eq 0 ]; then \
			echo "$(TXT_GREEN)OK$(TXT_NORM) (output in $(BENCH_OUT_DIR)/$$test.csv)"; \
		else \
		echo "$(TXT_RED)FAIL$(NO_NORM) $$exit$(TXT_NORM)"; \
		fi; \
	done
	$(R) -f $(BENCH_DIR)/benchmark.R --args save $(BENCH_OUT_DIR)/benchmarks.csv $(BENCH_OUT_DIR)


test: install


.PHONY: clean
clean:
	@echo "Cleaning up..."
	@rm -f $(ROOT_DIR)/r-pkg/src/rcp_common.h
	@rm -f $(ROOT_DIR)/r-pkg/src/runtime_internals.h
	@rm -f $(ROOT_DIR)/r-pkg/src/stencils
	@rm -fr $(BUILD_DIR)
