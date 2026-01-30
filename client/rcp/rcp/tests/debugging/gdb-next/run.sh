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

echo "Running GDB JIT 'next' minimal test..."

OUTPUT_LOG="$DIR/gdb_output.log"

cd "$PROJECT_ROOT"

LD_LIBRARY_PATH="$R_LIB" R_HOME="$R_HOME_PATH" timeout 60s gdb -q -batch \
    -x "$DIR/test.gdb" \
    --args "$R_BIN" -f "$DIR/test.R" > "$OUTPUT_LOG" 2>&1

# Verification logic
echo "Verifying output..."

if grep -q "Hit f_jit" "$OUTPUT_LOG"; then
    echo "[PASS] Hit function breakpoint."
else
    echo "[FAIL] Did not hit function breakpoint. Log:"
    cat "$OUTPUT_LOG"
    exit 1
fi

# Check for specific opcodes in the order we expect (or just presence)
# Note: output order depends on GDB display, but we can check existence.

if grep -q "GETVAR_OP" "$OUTPUT_LOG"; then
    echo "[PASS] Stepped over GETVAR_OP."
else
    echo "[FAIL] Missing GETVAR_OP."
    exit 1
fi

if grep -q "LDCONST_OP" "$OUTPUT_LOG"; then
    echo "[PASS] Stepped over LDCONST_OP."
else
    echo "[FAIL] Missing LDCONST_OP."
    exit 1
fi

if grep -q "ADD_OP" "$OUTPUT_LOG"; then
    echo "[PASS] Stepped over ADD_OP."
else
    echo "[FAIL] Missing ADD_OP."
    exit 1
fi

if grep -q "RETURN_OP" "$OUTPUT_LOG"; then
    echo "[PASS] Stepped over RETURN_OP."
else
    echo "[FAIL] Missing RETURN_OP."
    exit 1
fi

echo "Test passed successfully!"
rm "$OUTPUT_LOG"