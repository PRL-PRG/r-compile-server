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

CFLAGS += -Wall \
					-Os \
					-I$(R_HOME)/include \
					-I$(RSH_HOME)/src/bc2c \
					-fcf-protection=none \
					-ffunction-sections \
					-fno-align-functions \
					-fno-align-jumps \
					-fno-align-labels \
					-fno-asynchronous-unwind-tables \
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

$(OBJ): $(OBJ:.o=.c)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJ)
