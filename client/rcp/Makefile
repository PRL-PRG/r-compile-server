DOCKER_IMAGE_ORG ?= ghcr.io/prl-prg
DOCKER_BUILD_CMD ?= docker build

RCP_BASE_IMAGE ?= $(DOCKER_IMAGE_ORG)/rcp-base
RCP_RSH_IMAGE ?= $(DOCKER_IMAGE_ORG)/rcp-rsh
RCP_IMAGE ?= $(DOCKER_IMAGE_ORG)/rcp

RSH_COMMIT ?= $(shell git -C external/rsh rev-parse HEAD)
RCP_COMMIT ?= $(shell git rev-parse HEAD)

.PHONY: docker-rcp-base
docker-rcp-base:
	$(DOCKER_BUILD_CMD) \
		-t $(RCP_BASE_IMAGE):latest -f Dockerfile.rcp-base .

.PHONY: docker-rcp-rsh
docker-rcp-rsh: docker-rcp-base
	$(DOCKER_BUILD_CMD) \
		--build-arg RCP_BASE_IMAGE=$(RCP_BASE_IMAGE):latest \
		--build-arg RSH_COMMIT=$(RSH_COMMIT) \
		-t $(RCP_RSH_IMAGE):$(RSH_COMMIT) -f Dockerfile.rcp-rsh .

.PHONY: docker-rcp
docker-rcp: docker-rcp-rsh
	$(DOCKER_BUILD_CMD) \
		--build-arg RCP_RSH_IMAGE=$(RCP_RSH_IMAGE) \
		--build-arg RSH_COMMIT=$(RSH_COMMIT) \
		--build-arg RCP_COMMIT=$(RCP_COMMIT) \
		-t $(RCP_IMAGE):$(RCP_COMMIT) -f Dockerfile.rcp .

setup:
	external/rsh/tools/build-gnur.sh external/rsh/external/R
	$(MAKE) -C rcp setup

test:
	$(MAKE) -C rcp test

benchmark:
	$(MAKE) -C rcp benchmark
