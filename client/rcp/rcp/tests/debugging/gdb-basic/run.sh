#!/bin/bash
set -e

# Get the directory of this script
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
rm -f "$OUTPUT_LOG"

cd "$PROJECT_ROOT"

LD_LIBRARY_PATH="$R_LIB" R_HOME="$R_HOME" timeout 60s gdb -q -batch \
  -x "$DIR/test.gdb" \
  --args "$R_BIN" -f "$DIR/test.R" >"$OUTPUT_LOG" 2>&1

# Verification
echo "Verifying output..."

if grep -q "Hit inner_jit. FULL BACKTRACE" "$OUTPUT_LOG"; then
  echo "[PASS] Hit inner function breakpoint."
else
  echo "[FAIL] Did not hit inner function breakpoint."
  exit 1
fi

if grep -q "outer_jit (.*)" "$OUTPUT_LOG"; then
  echo "[PASS] outer_jit found in backtrace."
else
  echo "[FAIL] outer_jit NOT found in backtrace of inner_jit."
  exit 1
fi

# Check for correct bytecode mapping (prologue step over)
if grep -q "__rcp_jit_prologue" "$OUTPUT_LOG"; then
  echo "[PASS] Saw prologue symbols."
else
  echo "[FAIL] Prologue symbols missing."
  exit 1
fi

if grep -q "GETVAR_OP" "$OUTPUT_LOG" || grep -q "LDCONST_OP" "$OUTPUT_LOG"; then
  echo "[PASS] Saw bytecode instruction symbols."
else
  echo "[FAIL] Did not explicitly see GETVAR_OP/LDCONST_OP in output."
  exit 1
fi

echo "Test passed successfully!"
