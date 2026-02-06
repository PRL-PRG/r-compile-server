DOCKER_IMAGE_ORG := prl-prg
DOCKER_BUILD_CMD := DOCKER_BUILDKIT=1 docker build --ssh default

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

setup:
	external/rsh/tools/build-gnur.sh external/rsh/external/R

test:
	$(MAKE) -C rcp test
