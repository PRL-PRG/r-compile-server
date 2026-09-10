## ------------------------------------------------------------------------
## COMPILER SELECTION
## ------------------------------------------------------------------------
##
## RCP needs GCC 14 or newer: the stencil compiler relies on
## no_callee_saved_registers (GCC 14) and the extractor on C++20. Anything
## newer works just as well, so rather than pinning one version we take the
## unversioned driver when it is new enough and otherwise fall back to the
## newest gcc-<major> on PATH. Both users of this file (the top-level Makefile
## and rcp/common.mk) only apply that when CC/CXX were not set by the user.
##
## The Docker images do pin an exact GCC on purpose (see Dockerfile.rcp-base):
## there the compiler version is part of the measured configuration rather
## than just a build requirement.

GCC_MIN_VERSION ?= 14

# $(call find_gcc,<driver>) -- <driver> if it is at least GCC_MIN_VERSION,
# else the newest <driver>-<major> on PATH that is; empty if there is none.
# The version suffix is sorted numerically so gcc-9 never wins over gcc-14.
find_gcc = $(firstword $(shell \
	for dir in $$(echo "$$PATH" | tr : ' '); do \
		ls "$$dir"/$(1)-[0-9]* 2>/dev/null; \
	done | sed 's:.*/::' | sort -u -t '-' -k2 -nr | { echo $(1); cat; } \
	| while read -r cc; do \
		command -v "$$cc" >/dev/null 2>&1 || continue; \
		major=$$("$$cc" -dumpfullversion -dumpversion 2>/dev/null | cut -d. -f1); \
		case "$$major" in (''|*[!0-9]*) continue ;; esac; \
		if [ "$$major" -ge $(GCC_MIN_VERSION) ]; then echo "$$cc"; break; fi; \
	done))

# $(call check_gcc,<driver>,<variable>,<unversioned name>) -- one recipe line
# (use it under a tab) that fails unless <driver> is a usable GCC of at least
# GCC_MIN_VERSION. <unversioned name> only feeds the hint in the message.
define check_gcc
@command -v $(1) >/dev/null 2>&1 || { \
    echo "Error: compiler '$(1)' not found. RCP needs GCC >= $(GCC_MIN_VERSION); set $(2)= to one (e.g. 'make ... $(2)=$(3)-$(GCC_MIN_VERSION)')."; \
    exit 1; \
}; \
major=$$($(1) -dumpfullversion -dumpversion 2>/dev/null | cut -d. -f1); \
case "$$major" in (''|*[!0-9]*) \
    echo "Error: cannot determine the version of '$(1)'. RCP needs GCC >= $(GCC_MIN_VERSION); set $(2)= to one."; \
    exit 1 ;; \
esac; \
if [ "$$major" -lt $(GCC_MIN_VERSION) ]; then \
    echo "Error: '$(1)' is GCC $$major. RCP needs GCC >= $(GCC_MIN_VERSION); set $(2)= to a newer one (e.g. 'make ... $(2)=$(3)-$(GCC_MIN_VERSION)')."; \
    exit 1; \
fi
endef
