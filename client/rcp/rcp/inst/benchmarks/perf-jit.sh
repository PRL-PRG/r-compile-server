#!/usr/bin/env bash
#
# Run an R script under perf with jitdump support.
#
# Usage: perf-jit.sh <script.R> [args...]
#
# Requires PERF_SUPPORT=1 build of rcp and perf installed.
# Uses R from R_HOME if set, otherwise from PATH.

set -euo pipefail
set -x

if [ $# -lt 1 ]; then
  echo "Usage: $0 <script.R> [args...]" >&2
  exit 1
fi

SCRIPT=$(realpath "$1")
shift

if [ ! -f "$SCRIPT" ]; then
  echo "Error: $SCRIPT not found" >&2
  exit 1
fi

if [ -z "$R_HOME" ]; then
  echo "Missing R_HOME"
  exit 1
fi

R="${R:-$R_HOME/bin/R}"

echo "Recording..."
perf record -k 1 -g -o perf.data -- \
  "$R" --no-echo --vanilla -f "$SCRIPT" --args "$@"

echo "Injecting JIT symbols..."
perf inject --jit -i perf.data -o perf.jit.data

echo "Opening perf report..."
perf report -i perf.jit.data
