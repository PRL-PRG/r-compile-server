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

<<<<<<< entry-exit-hooks
setup:
	external/rsh/tools/build-gnur.sh external/rsh/external/R
	$(RCP_MAKE) setup

test benchmark clean install:
	$(RCP_MAKE) $@
=======
.PHONY: check-toolchain
check-toolchain:
	$(MAKE) -C rcp check-toolchain CC="$(CC)" CXX="$(CXX)"

setup: check-toolchain
	CC="$(CC)" CXX="$(CXX)" CFLAGS="$(CFLAGS)" CXXFLAGS="$(CXXFLAGS)" external/rsh/tools/build-gnur.sh external/rsh/external/R
	$(MAKE) -C rcp setup CC="$(CC)" CXX="$(CXX)"

test: check-toolchain
	$(MAKE) -C rcp test CC="$(CC)" CXX="$(CXX)"

benchmark: check-toolchain
	$(MAKE) -C rcp benchmark CC="$(CC)" CXX="$(CXX)"
>>>>>>> main
