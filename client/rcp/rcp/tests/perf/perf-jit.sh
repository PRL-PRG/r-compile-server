#!/usr/bin/env bash
#
# Run an R script under perf with jitdump support and generate flamegraphs
# for multiple call graph techniques so they can be compared.
#
# Usage: perf-jit.sh <script.R> [args...]
#
# Requires PERF_SUPPORT=1 build of rcp and perf installed.
# For flamegraphs, install Brendan Gregg's FlameGraph tools and ensure these
# are in PATH:
#   stackcollapse-perf.pl
#   flamegraph.pl
# Uses R from R_HOME if set, otherwise from PATH.

set -euo pipefail
set -x

if [ $# -lt 1 ]; then
  echo "Usage: $0 <script.R> [args...]" >&2
  exit 1
fi

SCRIPT_INPUT="$1"
shift

if [ ! -f "$SCRIPT_INPUT" ]; then
  echo "Error: $SCRIPT_INPUT not found" >&2
  exit 1
fi

SCRIPT=$(realpath "$SCRIPT_INPUT")

if [ -z "${R_HOME:-}" ]; then
  echo "Missing R_HOME"
  exit 1
fi

R_BIN="${R:-$R_HOME/bin/exec/R}"
R=(env "R_HOME=$R_HOME" "LD_LIBRARY_PATH=$R_HOME/lib" "$R_BIN")
SCRIPT_ARGS=("$@")

CALLGRAPH_TECHNIQUES=(fp dwarf 'dwarf,16392' 'dwarf,32768') # lbr is not supported on dev machine

if ! command -v perf >/dev/null 2>&1; then
  echo "Missing perf in PATH"
  exit 1
fi

if ! command -v stackcollapse-perf.pl >/dev/null 2>&1; then
  echo "Missing stackcollapse-perf.pl in PATH" >&2
  echo "Install FlameGraph tools: https://github.com/brendangregg/FlameGraph" >&2
  exit 1
fi

if ! command -v flamegraph.pl >/dev/null 2>&1; then
  echo "Missing flamegraph.pl in PATH" >&2
  echo "Install FlameGraph tools: https://github.com/brendangregg/FlameGraph" >&2
  exit 1
fi

export RCP_PERF_JIT=1

"${R[@]}" --quiet --slave -e 'stopifnot(.Call(rcp:::C_rcp_perf_jit_support))' || {
  echo "Perf support not enabled"
  exit 1
}

echo "Recording..."
for CALLGRAPH in "${CALLGRAPH_TECHNIQUES[@]}"; do
  PERF_DATA="perf.${CALLGRAPH}.data"
  PERF_JIT_DATA="perf.${CALLGRAPH}.jit.data"
  FLAMEGRAPH_FILE="perf.${CALLGRAPH}.svg"
  FLAMEGRAPH_TITLE="RCP perf JIT Flamegraph (${CALLGRAPH})"

  echo "Recording with call graph: ${CALLGRAPH}..."
  perf record -e cpu-cycles:u -F 99 -k 1 -g --call-graph "$CALLGRAPH" -o "$PERF_DATA" -- \
    "${R[@]}" --no-echo --vanilla -f "$SCRIPT" --args "${SCRIPT_ARGS[@]}"

  echo "Injecting JIT symbols for ${CALLGRAPH}..."
  perf inject --jit -i "$PERF_DATA" -o "$PERF_JIT_DATA"

  echo "TXT output"
  perf script -i "$PERF_JIT_DATA" >"$PERF_JIT_DATA.txt"

  echo "Generating flamegraph: $FLAMEGRAPH_FILE"
  perf script -i "$PERF_JIT_DATA" |
    stackcollapse-perf.pl |
    flamegraph.pl --title "$FLAMEGRAPH_TITLE" >"$FLAMEGRAPH_FILE"
  if [ ! -s "$FLAMEGRAPH_FILE" ]; then
    echo "Flamegraph output is empty: $FLAMEGRAPH_FILE" >&2
    exit 1
  fi

done

echo "Generated flamegraphs:"
for CALLGRAPH in "${CALLGRAPH_TECHNIQUES[@]}"; do
  echo "  perf.flamegraph.${CALLGRAPH}.svg"
done
