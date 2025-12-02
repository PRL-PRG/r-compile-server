CC = gcc-14
CXX = g++

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

# 0 = relative addressing, 1 = relative addressing with GOT where needed, 2 = absolute addressing
RELOC_MODEL ?= 1
C_FLAGS_ADDITIONAL ?=
#C_FLAGS_ADDITIONAL += -march=native
ALIGN_INSTRUCTIONS ?= 1

ifeq ($(RELOC_MODEL),2)
  MCMODEL := large
else ifeq ($(RELOC_MODEL),1)
  MCMODEL := medium
  C_FLAGS_ADDITIONAL += -fno-plt
else ifeq ($(RELOC_MODEL),0)
  MCMODEL := medium
else
  $(error Unsupported RELOC_MODEL: $(RELOC_MODEL))
endif

ifeq ($(ALIGN_INSTRUCTIONS),1)
  ALIGNMENT_LABELS := 16
  ALIGNMENT_JUMPS := 16
  ALIGNMENT_LOOPS := 16
else
  ALIGNMENT_LABELS := 1
  ALIGNMENT_JUMPS := 1
  ALIGNMENT_LOOPS := 1
endif

SPECIALIZE_STEPFOR ?= 1
SPECIALIZE_SWITCH ?= 1

DEFINE_FLAGS ?= -DNDEBUG
ifneq ($(SPECIALIZE_STEPFOR),0)
  DEFINE_FLAGS += -DSTEPFOR_SPECIALIZE
endif
ifneq ($(SPECIALIZE_SWITCH),0)
  DEFINE_FLAGS += -DSWITCH_SPECIALIZE
endif

$(STENCILS_OBJ): stencils/stencils.c
	@echo "Building stencils..."
	mkdir -p build
	$(CC) stencils/stencils.c -Wall -o $(STENCILS_OBJ) -c -ffunction-sections -fno-stack-protector -fcf-protection=none -fno-asynchronous-unwind-tables -Os -fno-pic -mcmodel=$(MCMODEL) -fno-math-errno -fno-trapping-math -fno-merge-constants -fno-jump-tables -fno-ipa-cp -fno-align-functions -fno-align-jumps -fno-align-labels -Wno-unused-function -I$(R_HOME)/include -I$(RSH_HOME)/src/bc2c $(DEFINE_FLAGS) $(C_FLAGS_ADDITIONAL)
# -fno-align-loops

$(EXTRACTOR_BIN): extractor/extract_stencils.cpp
	@echo "Building extractor..."
	mkdir -p $(BUILD_DIR)
	$(CXX) extractor/extract_stencils.cpp -o $(EXTRACTOR_BIN) -lbfd -O1 -march=native -std=c++20 -flto=auto $(DEFINE_FLAGS)

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
	cd build && MCMODEL=$(MCMODEL) SPECIALIZE_STEPFOR=$(SPECIALIZE_STEPFOR) SPECIALIZE_SWITCH=$(SPECIALIZE_SWITCH) ALIGNMENT_LABELS=$(ALIGNMENT_LABELS) ALIGNMENT_JUMPS=$(ALIGNMENT_JUMPS) ALIGNMENT_LOOPS=$(ALIGNMENT_LOOPS) $(R_HOME)/bin/R CMD INSTALL rcp_1.0.0.0000.tar.gz

.PHONY: install
install: $(R_LIB)


BENCH_ITER ?= 15
BENCH_NAME ?= $(shell echo "rcp-$$(date +'%Y%m%d-%H%M%S')-$$(git rev-parse --short HEAD)")
BENCH_OUT_DIR ?= $(shell echo "$$(pwd)/benchmark-results")/$(BENCH_NAME)
BENCH_OPTS ?= --rcp

TXT_BOLD = \033[1m
TXT_NORM = \033[0m
TXT_GREEN = \033[0;32m
TXT_RED = \033[0;31m

R ?= $(R_HOME)/bin/R
BENCH_DIR = $(RSH_HOME)/inst/benchmarks
HARNESS_BIN = $(RSH_HOME)/inst/benchmarks/harness.R
FILTER ?=

.PHONY: run
run: install
	@$(R_HOME)/bin/R

.PHONY: benchmark
benchmark: 
	mkdir -p $(BENCH_OUT_DIR)
	@failures=0; \
	for file in $$(find $(BENCH_DIR) -mindepth 2 -name "*$(FILTER)*.R"); do \
		test=$$(basename $$file); \
		test=$${test%.*}; \
		echo "$(TXT_BOLD)┌──── $$test ...$(TXT_NORM)"; \
		cmd="$(R) --slave --no-restore -f $(HARNESS_BIN) --args --output-dir $(BENCH_OUT_DIR) $(BENCH_OPTS) --runs $(BENCH_ITER) $${file%.*}"; \
		echo $$cmd; \
		eval "/usr/bin/time -v -o \"$(BENCH_OUT_DIR)/$$test.time\" $$cmd"; \
		exit=$$?; \
		echo -n "$(TXT_BOLD)└──── $$test: "; \
		if [ $$exit -eq 0 ]; then \
			echo "$(TXT_GREEN)OK$(TXT_NORM) (output in $(BENCH_OUT_DIR)/$$test.csv)"; \
		else \
			echo "$(TXT_RED)FAIL$(NO_NORM) $$exit$(TXT_NORM)"; \
			failures=$$((failures + 1)); \
		fi; \
	done; \
	echo "$(TXT_BOLD)Total failures: $$failures$(TXT_NORM)"; \
	if [ $$failures -ne 0 ]; then \
		exit 1; \
	fi

.PHONY: testb-seq
testb-seq:
	@BENCH_ITER=1 $(MAKE) benchmark

.PHONY: testb
testb:
	@failures=0; \
	find $(BENCH_DIR) -mindepth 2 -name "*$(FILTER)*.R" | \
	parallel -j $(shell nproc) --line-buffer --bar --joblog /tmp/testb-$$$$.log \
		"test=\$$(basename {} .R); \
		output=\$$(nice -n 10 $(R) --slave --no-restore -f $(HARNESS_BIN) --args \
			$(BENCH_OPTS) --runs 1 {.} 2>&1); \
		if [ \$$? -ne 0 ]; then \
			echo \"$(TXT_RED)FAILED: \$$test$(TXT_NORM)\" >&2; \
			echo \"\$$output\" >&2; \
			exit 1; \
		fi"; \
	failures=$$(awk '$$7 != "0" && NR > 1 { count++ } END { print count+0 }' /tmp/testb-$$$$.log); \
	rm -f /tmp/testb-$$$$.log; \
	echo "$(TXT_BOLD)Total failures: $$failures$(TXT_NORM)"; \
	if [ $$failures -ne 0 ]; then \
		exit 1; \
	fi

.PHONY: clean
clean:
	@echo "Cleaning up..."
	@rm -f $(ROOT_DIR)/r-pkg/src/rcp_common.h
	@rm -f $(ROOT_DIR)/r-pkg/src/runtime_internals.h
	@rm -f $(ROOT_DIR)/r-pkg/src/stencils
	@rm -fr $(BUILD_DIR)
