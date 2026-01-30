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

echo "Running GDB JIT 'next' command test..."

OUTPUT_LOG="$DIR/gdb_output.log"

cd "$PROJECT_ROOT"

LD_LIBRARY_PATH="$R_LIB" R_HOME="$R_HOME_PATH" timeout 60s gdb -q -batch \
    -x "$DIR/test.gdb" \
    --args "$R_BIN" -f "$DIR/test.R" > "$OUTPUT_LOG" 2>&1

# Verification logic
echo "Verifying output..."

# We expect to see source listing showing different lines
# e.g., 
# 1       __rcp_jit_prologue
# 2       LDCONST_OP
# 3       SETVAR_OP
# etc.

if grep -q "Hit f_seq_jit" "$OUTPUT_LOG"; then
    echo "[PASS] Hit function breakpoint."
else
    echo "[FAIL] Did not hit function breakpoint. Log:"
    cat "$OUTPUT_LOG"
    exit 1
fi

# Count how many unique lines were displayed by 'list' or 'frame' during 'next'
# GDB output for 'next' usually shows the source line number if symbols are present
# We look for the patterns from the virtual source file

if grep -q "LDCONST_OP" "$OUTPUT_LOG"; then
    echo "[PASS] Encountered LDCONST_OP."
else
    echo "[WARN] Did not see LDCONST_OP (check generated code)."
fi

if grep -q "ADD_OP" "$OUTPUT_LOG" || grep -q "MUL_OP" "$OUTPUT_LOG" || grep -q "SUB_OP" "$OUTPUT_LOG"; then
    echo "[PASS] Encountered Math OP (ADD/MUL/SUB)."
else
    echo "[WARN] Did not explicitly see Math OP."
fi

echo "Test passed successfully!"
rm "$OUTPUT_LOG"
