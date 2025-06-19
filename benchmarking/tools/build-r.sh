#!/bin/bash
set -e # make script fail on first error
SCRIPT_PATH="$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )"
if [ ! -d $SCRIPT_PATH ]; then
    echo "Could not determine absolute dir of $0"
    echo "Maybe accessed with symlink"
fi

source $SCRIPT_PATH/basicFunctions.inc

INFO Building R 
NAME="$1"
REPO_URL="$2"

if [ ! -z "$3" ]
then
  BRANCH="$3"
else
  BRANCH="master"
fi

if [ ! -d $IMPLEMENTATIONS_PATH/R ]
then
  mkdir "$IMPLEMENTATIONS_PATH/R"
fi
checkout $IMPLEMENTATIONS_PATH/R/$NAME $REPO_URL $BRANCH
pushd $IMPLEMENTATIONS_PATH/R/$NAME
INFO Compiling $NAME
cmake -DCMAKE_BUILD_TYPE=release .; make setup; make; make vanilla-gnur
OK $NAME Compilation Completed.
popd > /dev/null
