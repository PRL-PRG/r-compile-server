include ../../common.mk

# Marks this translation unit as the copy-and-patch stencil compilation.
# Only stencils.c is built with this; the rest of the project (and R) never
# sees it. Use it to guard stencil-only code paths in shared headers.
CFLAGS += -DCOMPILING_STENCILS

ifeq ($(RELOC_MODEL),1)
  CFLAGS += -fno-plt
endif

# CFLAGS += -DALIGNMENT_LABELS=$(ALIGNMENT_LABELS)
# CFLAGS += -DALIGNMENT_JUMPS=$(ALIGNMENT_JUMPS)
# CFLAGS += -DALIGNMENT_LOOPS=$(ALIGNMENT_LOOPS)

ifneq ($(SPECIALIZE_STEPFOR),0)
  CFLAGS += -DSTEPFOR_SPECIALIZE
endif

ifneq ($(SPECIALIZE_SWITCH),0)
  CFLAGS += -DSWITCH_SPECIALIZE
endif

ifneq ($(SPECIALIZE_MAKEPROM),0)
  CFLAGS += -DMAKEPROM_SPECIALIZE
endif

ifneq ($(RCP_COMPILE_PROMISES),0)
  CFLAGS += -DRCP_COMPILE_PROMISES
endif

CFLAGS += -Wall \
					-Os \
					-I$(R_HOME)/include \
					-I$(RSH_HOME)/src/bc2c \
					-fcf-protection=none \
					-ffunction-sections \
					-fno-align-functions \
					-fno-align-jumps \
					-fno-align-labels \
					-fno-ipa-cp \
					-fno-jump-tables \
					-fno-math-errno \
					-fno-merge-constants \
					-fno-pic \
					-fno-stack-protector \
					-fno-trapping-math \
					-mcmodel=$(MCMODEL) \
					-Wno-unused-function


OBJ = $(notdir $(STENCILS_OBJ))

.PHONY: all
all: $(OBJ)

RUNTIME_H := $(RSH_HOME)/src/bc2c/runtime.h
RUNTIME_INTERNALS_H := $(RSH_HOME)/src/bc2c/runtime_internals.h
RINTERNALS_H := $(R_HOME)/include/Rinternals.h

$(OBJ): $(OBJ:.o=.c) $(RUNTIME_H) $(RUNTIME_INTERNALS_H) $(RINTERNALS_H) ../rcp_bc_info.h ../rcp_hooks.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJ)
