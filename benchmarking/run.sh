#!/usr/bin/env bash
set -e

SCRIPT_PATH=`cd $(dirname "$0") && pwd`
if [ ! -d $SCRIPT_PATH ]; then
  echo "Could not determine absolute dir of $0"
  echo "Maybe accessed with symlink"
fi

BUILD_SCRIPTS=$SCRIPT_PATH/tools
source $BUILD_SCRIPTS/basicFunctions.inc

# Find abs path in MacOS
realpath() {
    if [ "$(uname -s)" = 'Linux' ]; then
      echo $(readlink -f $1)
    else
      [[ $1 = /* ]] && echo "$1" || echo "$PWD/${1#./}"
    fi
}

if [[ -f "$1" ]]; then
  REBENCH=$(realpath $1)
  shift
else
  echo "First parameter must specify a rebench configuration file"
  exit 1
fi

if [[ -d "$1" ]]; then
  BENCHS_PATH=$(realpath $1)
  shift
else
  echo "Benchmarks path does not exist"
  exit 1
fi

echo $1

if [[ -d "$1" && $# -gt 1 ]]; then
  RSH_VM=$(realpath $1)
  shift
else
  WARN "Rsh VM client dir does not exist: beware that if you want to run benchmarks for Rsh compile server it will fail"
fi

if [[ -d "$1" && $# -gt 1 ]]; then
  RSH_SERVER=$(realpath $1)
  shift
else
  WARN "Rsh VM server dir does not exist: beware that if you want to run benchmarks for Rsh compile server it will fail"
fi

if [[ -d "$1" ]]; then
  GNU_VM=$(realpath $1)
  shift
else
  WARN "GNU VM dir does not exist: beware that if you want to run benchmarks for GNU-R it will fail"
fi

if [[ $# -gt 1 ]]; then
  echo expected 1 argument but got "$@", did you forget to quote rebench args?
fi
if [[ $# -eq 0 ]]; then
  echo missing rebench args
fi
if [[ $# -ne 1 ]]; then
  exit 1
fi



TMPDIR=$(mktemp -d /tmp/rbench.XXXXXX)
pushd $TMPDIR

cp "$REBENCH" .
if [[ ! -z $RSH_VM ]]; then
  sed -i.bak "s+%%RSH_VM%%+$RSH_VM+" rebench.conf
fi 
if [[ ! -z $GNU_VM ]]; then
  sed -i.bak "s+%%GNU_VM%%+$GNU_VM+" rebench.conf
fi

sed -i.bak "s+%%BENCHMARKS_PATH%%+$BENCHS_PATH+" rebench.conf

# start the compile server
# if [[ ! -z $RSH_SERVER ]]; then
#   mvn -f $RSH_SERVER exec:java > "rsh-server-$(date -d "today" +"%Y%m%d%H%M").log" 2>&1 &
#   RSH_PID=$!
#   echo "Rsh compile server started in background"
#   sleep 5
# fi

echo "Running benchmarks with rebench"

rebench rebench.conf -v $1
RES=$?

popd
rm -rf $TMPDIR
kill $RSH_PID 2>/dev/null || true
echo "Rsh compile server stopped"
exit $RES