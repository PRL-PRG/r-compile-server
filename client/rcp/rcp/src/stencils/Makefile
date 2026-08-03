include ../../common.mk

# Marks this translation unit as the copy-and-patch stencil compilation.
# Only stencils.c is built with this; the rest of the project (and R) never
# sees it. Use it to guard stencil-only code paths in shared headers.
CFLAGS += -DCOMPILING_STENCILS

# Inlines everything in Rinlinedfuns.h without generating symbols
CFLAGS += -DC99_INLINE_SEMANTICS=0

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
					-I$(RSH_HOME)/src/common2c \
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


# Final combined stencil object consumed by the extractor.
OBJ = $(notdir $(STENCILS_OBJ))

# All stencil translation units, each compiled separately then merged into OBJ.
# stencils.o itself has no matching .c, so it never appears in SRCS.
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

# Local headers shared by the translation units.
HEADERS = $(wildcard *.h)

.PHONY: all
all: $(OBJ)

# runtime.h and runtime_internals.h are thin shims over the headers that hold
# the actual runtime (opcodes*.h in bc2c, rsh_utils.h/gnur_symbols.h in
# common2c), so depend on both directories rather than on the two entry points.
RSH_HEADERS := $(wildcard $(RSH_HOME)/src/bc2c/*.h) \
               $(wildcard $(RSH_HOME)/src/common2c/*.h)
RINTERNALS_H := $(R_HOME)/include/Rinternals.h

DEPS = $(HEADERS) $(RSH_HEADERS) $(RINTERNALS_H) \
       ../rcp_bc_info.h ../rcp_hooks.h

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

# Relocatable link merges all per-TU objects into one stencils.o, preserving the
# per-function sections and relocations the extractor reads. -nostdlib avoids
# pulling in any startup/runtime objects.
$(OBJ): $(OBJS)
	$(CC) -nostdlib -r $(OBJS) -o $@

.PHONY: clean
clean:
	rm -f $(OBJ) $(OBJS)
