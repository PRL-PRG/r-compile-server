#!/bin/bash
set -e

DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" &>/dev/null && pwd)"
PROJECT_ROOT="$DIR/../../.."

# Paths to R and R_HOME
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

echo "Running test in $DIR..."

OUTPUT_LOG="$DIR/gdb_output.log"

cd "$PROJECT_ROOT"

LD_LIBRARY_PATH="$R_LIB" R_HOME="$R_HOME" timeout 60s gdb -q -batch \
  -x "$DIR/test.gdb" \
  --args "$R_BIN" -f "$DIR/test.R" >"$OUTPUT_LOG" 2>&1

# Verification logic
echo "Verifying output..."

# We expect to see "test_add" multiple times in the backtrace for the 2nd/3rd call.
# E.g.
# #0 test_add ...
# #1 rcpEval ...
# #2 test_add ...

# Check the 2nd call backtrace
if grep -A 10 "Hit test_add (2nd call" "$OUTPUT_LOG" | grep -q "#3.*test_add"; then
  echo "[PASS] Recursion backtrace correct (test_add found at frame #3)."
else
  echo "[FAIL] Recursion backtrace broken."
  echo "Full log:"
  cat "$OUTPUT_LOG"
  exit 1
fi

echo "Test passed successfully!"
