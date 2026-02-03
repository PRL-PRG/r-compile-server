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
rm -f "$OUTPUT_LOG"

cd "$PROJECT_ROOT"

LD_LIBRARY_PATH="$R_LIB" R_HOME="$R_HOME" timeout 60s gdb -q -batch \
  -x "$DIR/test.gdb" \
  --args "$R_BIN" -f "$DIR/test.R" >"$OUTPUT_LOG" 2>&1

echo "Verifying output..."

# Grep for lines that start with a number (GDB stop location)
# and contain our keywords. Extract only the keyword.
EXPECTED="_RCP_INIT GETVAR_OP_ LDCONST_OP_DBL ADD_OP_ RETURN_OP_"
ACTUAL=$(grep -E "^[0-9]+[[:space:]]+(_RCP_INIT|[A-Z]+_OP)" "$OUTPUT_LOG" | awk '{print $2}' | uniq | xargs)

if [ "$ACTUAL" == "$EXPECTED" ]; then
  echo "[PASS] Instruction sequence matches."
else
  echo "[FAIL] Instruction sequence mismatch."
  echo "Expected: $EXPECTED"
  echo "Actual:   $ACTUAL"
  echo "Output: $OUTPUT_LOG"
  exit 1
fi

echo "Test passed successfully!"
