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

.PHONY: all
all: $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Header dependencies, from the -MMD -MP in common.mk. These replace a hand-maintained list of
# header globs: the stencils reach into the rsh runtime headers (bc2c, common2c) and R's
# Rinternals.h as well as this directory, and the compiler tracks all of them exactly.
-include $(OBJS:.o=.d)

# Relocatable link merges all per-TU objects into one stencils.o, preserving the
# per-function sections and relocations the extractor reads. -nostdlib avoids
# pulling in any startup/runtime objects.
$(OBJ): $(OBJS)
	$(CC) -nostdlib -r $(OBJS) -o $@

.PHONY: clean
clean:
	rm -f $(OBJ) $(OBJS) $(OBJS:.o=.d)
