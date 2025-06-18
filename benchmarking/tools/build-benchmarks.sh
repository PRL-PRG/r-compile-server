#!/bin/bash
set -e # make script fail on first error
SCRIPT_PATH="$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )"
if [ ! -d $SCRIPT_PATH ]; then
    echo "Could not determine absolute dir of $0"
    echo "Maybe accessed with symlink"
fi

source $SCRIPT_PATH/basicFunctions.inc

INFO Building Benchmarks
if [ ! -d $BENCHMARKS_PATH ]
then
  mkdir $BENCHMARKS_PATH
fi

#checkout $BENCHMARKS_PATH/AreWeFast "https://github.com/charig/are-we-fast-yet.git" "RBenchs" "benchmarks"
OK Benchmarks Build Completed.
