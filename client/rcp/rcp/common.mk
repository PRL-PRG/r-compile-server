## ------------------------------------------------------------------------
## SETTINGS
## ------------------------------------------------------------------------

# Should do a debug build
DEBUG ?= 0
# Need a compiler that has support for no_callee_saved_registers
ifneq ($(origin CC), command line)
  CC := gcc-14
endif
# Need a compiler that supports C++20
ifneq ($(origin CXX), command line)
  CXX := g++-14
endif
C_STD_FLAG ?= -std=gnu17
CXX_STD_FLAG ?= -std=gnu++20

# Get the directory of common.mk itself
COMMON_MK_PATH := $(abspath $(lastword $(MAKEFILE_LIST)))
# The root of this project
ROOT_DIR := $(patsubst %/,%,$(dir $(COMMON_MK_PATH)))
# From where the runtime.h should be resolved
RSH_HOME ?= $(ROOT_DIR)/../external/rsh/client/rsh
# Which R to use
R_HOME ?= $(ROOT_DIR)/../external/rsh/external/R
# Which R to use
R := $(R_HOME)/bin/R
RSCRIPT := $(R_HOME)/bin/Rscript

# microbenchmark is only needed for benchmarking (it is a Suggests dependency,
# not required to build or install the package), so install it on demand the
# first time a benchmark runs rather than during setup.
define ensure_microbenchmark_installed
if ! $(RSCRIPT) --vanilla -e 'if (!requireNamespace("microbenchmark", quietly=TRUE)) quit(status=1)' >/dev/null 2>&1; then \
	echo "Installing R package 'microbenchmark' (required for benchmarking) into $(R_HOME)..." >&2; \
	$(RSCRIPT) --vanilla -e 'install.packages("microbenchmark", repos="https://cloud.r-project.org")' || true; \
	if ! $(RSCRIPT) --vanilla -e 'if (!requireNamespace("microbenchmark", quietly=TRUE)) quit(status=1)' >/dev/null 2>&1; then \
		echo "Error: failed to install 'microbenchmark' into $(R_HOME). Ensure R_HOME points to a writable R." >&2; \
		exit 1; \
	fi; \
fi
endef

# 0 = relative addressing, 1 = relative addressing with GOT where needed, 2 = absolute addressing
RELOC_MODEL ?= 1
ALIGN_INSTRUCTIONS ?= 1

## ------------------------------------------------------------------------
## END OF SETTINGS
## ------------------------------------------------------------------------

ifeq ($(DEBUG), 1)
    # Debug flags
    CFLAGS += -g -DASSERTS
    CXXFLAGS += -g -DASSERTS
    RCP_COMPILE_PROMISES ?= 1
else
    # Release flags
    CFLAGS += -g -DNDEBUG
    CXXFLAGS += -g -DNDEBUG
    RCP_COMPILE_PROMISES ?= 0
endif

# Select the copy-and-patch (RCP) variant of the unified GNU-R sources. The rcp
# project only ever targets this variant (it includes the RCP-guarded R headers
# and uses the custom calling convention); the RSH / r-compile-server build
# leaves RCP undefined and gets the bytecode (BCODESXP) variant instead.
CFLAGS += -DRCP
CXXFLAGS += -DRCP

ifeq (,$(findstring -std=,$(CFLAGS)))
  CFLAGS += $(C_STD_FLAG)
endif

ifeq (,$(findstring -std=,$(CXXFLAGS)))
  CXXFLAGS += $(CXX_STD_FLAG)
endif

export CC CXX C_STD_FLAG CXX_STD_FLAG


ifeq ($(RELOC_MODEL),2)
  MCMODEL := large
else ifeq ($(RELOC_MODEL),1)
  MCMODEL := medium
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
SPECIALIZE_MAKEPROM ?= 1

# Hard-coded per-stencil cycle timing (off by default).
PROFILE_STENCILS ?= 0
ifneq ($(PROFILE_STENCILS),0)
  CFLAGS += -DPROFILE_STENCILS
  CXXFLAGS += -DPROFILE_STENCILS
endif

EXTRACTOR_BIN = extractor
EXTRACTOR_DIR = extractor
EXTRACTOR = $(EXTRACTOR_DIR)/$(EXTRACTOR_BIN)

STENCIL_DIFF_BIN = stencil_diff.a
STENCIL_DIFF_DIR = $(ROOT_DIR)/tools/stencil-diff
STENCIL_DIFF = $(STENCIL_DIFF_DIR)/$(STENCIL_DIFF_BIN)

STENCILS_DIR = stencils
STENCILS_OBJ = $(STENCILS_DIR)/stencils.o

SHARED_LIB_DIR = $(ROOT_DIR)/src/shared
SHARED_LIB = $(SHARED_LIB_DIR)/libshared.a
