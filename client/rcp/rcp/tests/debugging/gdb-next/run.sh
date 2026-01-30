#!/bin/bash
set -e

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"
PROJECT_ROOT="$DIR/../../.."

# Paths to R and R_HOME
R_HOME_PATH="/mnt/data-1/krikava/rcp/external/rsh/external/R"
R_BIN="$R_HOME_PATH/bin/exec/R"
R_LIB="$R_HOME_PATH/lib"

if [ ! -f "$R_BIN" ]; then
    echo "Error: R binary not found at $R_BIN"
    exit 1
fi

echo "Running GDB JIT 'next' ordered test..."

OUTPUT_LOG="$DIR/gdb_output.log"

cd "$PROJECT_ROOT"

LD_LIBRARY_PATH="$R_LIB" R_HOME="$R_HOME_PATH" timeout 60s gdb -q -batch \
    -x "$DIR/test.gdb" \
    --args "$R_BIN" -f "$DIR/test.R" > "$OUTPUT_LOG" 2>&1

# Verification logic
echo "Verifying output..."

# Grep for lines that start with a number (GDB stop location) 
# and contain our keywords. Extract only the keyword.
EXPECTED="__rcp_jit_prologue GETVAR_OP LDCONST_OP ADD_OP RETURN_OP"
ACTUAL=$(grep -E "^[0-9]+[[:space:]]+(__rcp_jit_prologue|[A-Z]+_OP)" "$OUTPUT_LOG" | awk '{print $2}' | uniq | xargs)

echo "Expected: $EXPECTED"
echo "Actual:   $ACTUAL"

if [ "$ACTUAL" == "$EXPECTED" ]; then
    echo "[PASS] Instruction sequence matches."
else
    echo "[FAIL] Instruction sequence mismatch."
    exit 1
fi

echo "Test passed successfully!"
rm "$OUTPUT_LOG"
