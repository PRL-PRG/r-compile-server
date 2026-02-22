include ../../common.mk

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

CFLAGS += -ffixed-rbp

ifneq ($(PERF_SUPPORT),0)
  # additional perf flags if needed
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

# When GDB JIT or perf support is enabled, keep .eh_frame for CFI extraction.
# Otherwise suppress unwind tables to reduce stencil size.
ifeq ($(GDB_JIT_SUPPORT)$(PERF_SUPPORT),00)
  CFLAGS += -fno-asynchronous-unwind-tables
endif

OBJ = $(notdir $(STENCILS_OBJ))

# Track flags that affect the .eh_frame content of the stencil object.
# If these flags change, force a rebuild even if source hasn't changed.
STENCILS_FLAG_STAMP = .stencils_flags
CURRENT_FLAGS := GDB_JIT=$(GDB_JIT_SUPPORT) PERF=$(PERF_SUPPORT)

.PHONY: all
all: $(OBJ)

$(OBJ): $(OBJ:.o=.c) $(STENCILS_FLAG_STAMP)
	$(CC) $(CFLAGS) -c $< -o $@

$(STENCILS_FLAG_STAMP): .FORCE
	@if [ ! -f $@ ] || [ "$$(cat $@)" != "$(CURRENT_FLAGS)" ]; then \
		echo "$(CURRENT_FLAGS)" > $@; \
	fi

.PHONY: .FORCE
.FORCE:

.PHONY: clean
clean:
	rm -f $(OBJ) $(STENCILS_FLAG_STAMP)
