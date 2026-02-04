#!/bin/bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" &>/dev/null && pwd)"

# Paths to R and R_HOME
# We need that because we are not going to use the $R_HOME/bin/R wrapper but the binary instead
if [ -z "$R_HOME" ]; then
  echo "Error: R_HOME environment variable is not set."
  exit 1
fi

R_BIN="$R_HOME/bin/exec/R"
R_LIB="$R_HOME/lib"

if [ ! -f "$R_BIN" ]; then
  echo "Error: R binary not found at $R_BIN"
  exit 1
fi

echo "Running test in $(pwd)..."

OUTPUT_LOG="actual.log"
EXPECTED_LOG="expected.out"
rm -f "$OUTPUT_LOG"

if ! LD_LIBRARY_PATH="$R_LIB" R_HOME="$R_HOME" \
  timeout 60s \
  gdb -q -batch -x test.gdb --args \
  "$R_BIN" -q -f test.R >"$OUTPUT_LOG" 2>&1; then

  echo "GDB command failed (or timed out)."
  exit 1
fi

python3 "$SCRIPT_DIR/check-gdb-log.py" "$OUTPUT_LOG" "$EXPECTED_LOG" "$@"
