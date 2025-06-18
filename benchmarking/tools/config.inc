#!/bin/bash

CONFIG_PATH="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null && pwd )"

if [ -z $ROOT_PATH ]
then
  ROOT_PATH="$CONFIG_PATH/../.."
fi

RIR_NAME="RIR"
RIR_BRANCH="master"
DATA_DIR_NAME="Data"
DOCKER_OUT_VOL_NAME="/output"
LAST_CONTAINER_FILENAME=".lastMeasure"
CURRENT_COMMIT_FILENAME=".currentCommit"

# Paths
IMPLEMENTATIONS_PATH="$ROOT_PATH/Implementations"
DATA_PATH="$ROOT_PATH/$DATA_DIR_NAME"
BENCHMARKS_PATH="$ROOT_PATH/Benchmarks"
DOCKER_DATA_PATH="$DOCKER_OUT_VOL_NAME/$DATA_DIR_NAME" 
DOCKER_ROOT_PATH="/opt"

# Docker Gitlab's Registry
DOCKER_PROJECT=10979413
DOCKER_REGISTRY=560812
DOCKER_TAG="master"
DOCKER_CONTAINER_URL="https://gitlab.com/api/v4/projects/${DOCKER_PROJECT}/registry/repositories/${DOCKER_REGISTRY}/tags/${DOCKER_TAG}"
