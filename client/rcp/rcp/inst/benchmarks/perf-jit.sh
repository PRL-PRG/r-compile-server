#!/usr/bin/env bash
#
# Run an R script under perf with jitdump support.
#
# Usage: perf-jit.sh <script.R> [args...]
#
# Requires PERF_SUPPORT=1 build of rcp and perf installed.
# Uses R from R_HOME if set, otherwise from PATH.

set -euo pipefail

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

export RCP_PERF_JIT=1

"$R" -e 'stopifnot(.Call(rcp:::C_rcp_perf_jit_support))' || {
  echo "Perf support not enabled"
  exit 1
}

perf record -k 1 --call-graph dwarf -o perf.data -- \
  "$R" --no-echo --vanilla -f "$SCRIPT" --args "$@"
perf inject --jit -i perf.data -o perf.jit.data
perf report -i perf.jit.data
