DOCKER_IMAGE_ORG := prl-prg
DOCKER_BUILD_CMD := docker build

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

.PHONY: docker-rcp-base
docker-rcp-base:
	$(DOCKER_BUILD_CMD) \
		-t $(DOCKER_IMAGE_ORG)/rcp-base -f Dockerfile.rcp-base .

.PHONY: docker-rcp-rsh
docker-rcp-rsh: docker-rcp-base
	$(DOCKER_BUILD_CMD) \
		--build-arg RSH_COMMIT=$(RSH_COMMIT) \
		-t $(DOCKER_IMAGE_ORG)/rcp-rsh:$(RSH_COMMIT) -f Dockerfile.rcp-rsh .
	
.PHONY: docker-rcp
docker-rcp: docker-rcp-rsh
	$(DOCKER_BUILD_CMD) \
		--build-arg RSH_COMMIT=$(RSH_COMMIT) \
		--build-arg RCP_COMMIT=$(RCP_COMMIT) \
		-t $(DOCKER_IMAGE_ORG)/rcp:$(RCP_COMMIT) -f Dockerfile.rcp .

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
