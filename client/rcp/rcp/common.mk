## ------------------------------------------------------------------------ 
## SETTINGS
## ------------------------------------------------------------------------ 

# Should do a debug build
DEBUG ?= 0
# Need a compiler that has support for no_callee_saved_registers
ifeq ($(origin CC), default)
  CC := gcc-14
endif
# Need a compiler that supports C++20
ifeq ($(origin CXX), default)
  CXX := g++-14
endif
C_STD_FLAG ?= -std=gnu17
CXX_STD_FLAG ?= -std=gnu++20
# Add support for debugging jitted code
GDB_JIT_SUPPORT ?= 0

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

define ensure_microbenchmark_installed
if ! $(R) --slave --no-restore -e 'if (!requireNamespace("microbenchmark", quietly=TRUE)) quit(status=1)' >/dev/null 2>&1; then \
	echo "Error: R package 'microbenchmark' is not installed. Run 'make setup' from the repository root." >&2; \
	exit 1; \
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
    CFLAGS += -g
    CXXFLAGS += -g
else
    # Release flags
    CFLAGS += -g -DNDEBUG
    CXXFLAGS += -g -DNDEBUG
endif

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

EXTRACTOR_BIN = extractor
EXTRACTOR_DIR = extractor
EXTRACTOR = $(EXTRACTOR_DIR)/$(EXTRACTOR_BIN)

STENCILS_DIR = stencils
STENCILS_OBJ = $(STENCILS_DIR)/stencils.o

SHARED_LIB_DIR = $(ROOT_DIR)/src/shared
SHARED_LIB = $(SHARED_LIB_DIR)/libshared.a
