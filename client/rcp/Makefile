# --------------------------------------------------------------------------- #
# Configuration
# --------------------------------------------------------------------------- #

DOCKER_BUILD_CMD ?= docker build
DOCKER_IMAGE_ORG ?= ghcr.io/prl-prg

RCP_BASE_IMAGE ?= $(DOCKER_IMAGE_ORG)/rcp-base
RCP_RSH_IMAGE ?= $(DOCKER_IMAGE_ORG)/rcp-rsh
RCP_IMAGE ?= $(DOCKER_IMAGE_ORG)/rcp

ifeq ($(origin CC), default)
CC := gcc-14
endif
ifeq ($(origin CXX), default)
CXX := g++-14
endif
CFLAGS ?= -std=gnu17
CXXFLAGS ?= -std=gnu++20

# The bundled GNU-R sources that `make setup` builds.
GNUR_DIR := external/rsh/external/R

RSH_COMMIT ?= $(shell git -C external/rsh rev-parse HEAD)
RCP_COMMIT ?= $(shell git rev-parse HEAD)

RCP_MAKE := $(MAKE) -C rcp

# --------------------------------------------------------------------------- #
# Derived command fragments
# --------------------------------------------------------------------------- #

# R_VERSION pins the vanilla R that the bc benchmarks baseline against; unset it
# to take the default in Dockerfile.rcp-base. rcp-rsh then asserts that pin
# matches the R that rsh vendors, and ALLOW_R_VERSION_MISMATCH=1 downgrades that
# assertion to a warning (needed when the vendored R is a development snapshot).
BASE_BUILD_ARGS = \
	$(if $(R_VERSION),--build-arg R_VERSION=$(R_VERSION))

RSH_BUILD_ARGS = \
	--build-arg RCP_BASE_IMAGE=$(RCP_BASE_IMAGE):latest \
	--build-arg RSH_COMMIT=$(RSH_COMMIT) \
	$(if $(ALLOW_R_VERSION_MISMATCH),--build-arg ALLOW_R_VERSION_MISMATCH=$(ALLOW_R_VERSION_MISMATCH))

RCP_BUILD_ARGS = \
	--build-arg RCP_RSH_IMAGE=$(RCP_RSH_IMAGE) \
	--build-arg RSH_COMMIT=$(RSH_COMMIT) \
	--build-arg RCP_COMMIT=$(RCP_COMMIT)

# --------------------------------------------------------------------------- #
# Docker targets
# --------------------------------------------------------------------------- #

.PHONY: docker-rcp-base docker-rcp-rsh docker-rcp docker-rcp

all: docker-rcp

docker-rcp-base:
	$(DOCKER_BUILD_CMD) \
		$(BASE_BUILD_ARGS) \
		-t $(RCP_BASE_IMAGE):latest \
		-f Dockerfile.rcp-base .

docker-rcp-rsh: docker-rcp-base
	$(DOCKER_BUILD_CMD) \
		$(RSH_BUILD_ARGS) \
		-t $(RCP_RSH_IMAGE):$(RSH_COMMIT) \
		-f Dockerfile.rcp-rsh .

docker-rcp: docker-rcp-rsh
	$(DOCKER_BUILD_CMD) \
		$(RCP_BUILD_ARGS) \
		-t $(RCP_IMAGE):$(RCP_COMMIT) \
		-f Dockerfile.rcp .

# --------------------------------------------------------------------------- #
# Local development targets
# --------------------------------------------------------------------------- #

.PHONY: setup test benchmark profile clean install
.PHONY: check-toolchain
check-toolchain:
	@command -v $(CC) >/dev/null 2>&1 || { echo "Error: C compiler '$(CC)' not found. Set CC= (RCP needs GCC >= 14, e.g. 'make ... CC=gcc-14' or CC=gcc)."; exit 1; }
	@command -v $(CXX) >/dev/null 2>&1 || { echo "Error: C++ compiler '$(CXX)' not found. Set CXX= (e.g. CXX=g++-14 or CXX=g++)."; exit 1; }

# `setup` builds the bundled GNU-R with the copy-and-patch (RCP) variant enabled
# and then installs the rcp package against it. RCP=1 tells build-gnur.sh to add
# -DRCP to CPPFLAGS itself; passing CPPFLAGS directly would be clobbered because
# build-gnur.sh resets CFLAGS/CPPFLAGS internally. R keeps its own -O2.
#
# build-gnur.sh only runs ./configure when there is no Makefile, and R bakes the
# flag into etc/Makeconf at configure time. So if R was previously configured
# WITHOUT -DRCP, force a reconfigure first; otherwise it would be ignored.
setup: check-toolchain
	@if [ -f $(GNUR_DIR)/etc/Makeconf ] && ! grep -q -- '-DRCP' $(GNUR_DIR)/etc/Makeconf; then \
		echo ">> $(GNUR_DIR) is configured without -DRCP; running 'make distclean' to force a clean RCP reconfigure"; \
		$(MAKE) -C $(GNUR_DIR) distclean >/dev/null 2>&1 || true; \
	fi
	CC="$(CC)" CXX="$(CXX)" RCP=1 external/rsh/tools/build-gnur.sh $(GNUR_DIR)
	$(MAKE) -C rcp CC="$(CC)" CXX="$(CXX)"

test: check-toolchain
	$(MAKE) -C rcp test CC="$(CC)" CXX="$(CXX)"

benchmark: check-toolchain
	$(MAKE) -C rcp benchmark CC="$(CC)" CXX="$(CXX)"

# Build RCP with PROFILE_STENCILS and export per-stencil execution counts and
# cycle totals for the whole benchmark suite as CSV (profile-results/ by
# default). See rcp/Makefile for RUNS / FILTER / PROFILE_OUT_DIR.
profile: check-toolchain
	$(MAKE) -C rcp profile CC="$(CC)" CXX="$(CXX)"

clean install:
	$(MAKE) -C rcp $@ CC="$(CC)" CXX="$(CXX)"
