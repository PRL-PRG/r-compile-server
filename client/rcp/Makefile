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

RSH_BUILD_ARGS = \
	--build-arg RCP_BASE_IMAGE=$(RCP_BASE_IMAGE):latest \
	--build-arg RSH_COMMIT=$(RSH_COMMIT)

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

.PHONY: setup test benchmark clean install
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

clean install:
	$(MAKE) -C rcp $@ CC="$(CC)" CXX="$(CXX)"
