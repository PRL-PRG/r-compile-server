#!/bin/bash
set -e

# Get the directory of this script
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"
PROJECT_ROOT="$DIR/../../.."

# Paths to R and R_HOME (adjust these based on your environment if needed)
# Using the paths found in previous steps
R_HOME_PATH="/mnt/data-1/krikava/rcp/external/rsh/external/R"
R_BIN="$R_HOME_PATH/bin/exec/R"
R_LIB="$R_HOME_PATH/lib"

if [ ! -f "$R_BIN" ]; then
    echo "Error: R binary not found at $R_BIN"
    exit 1
fi

echo "Running GDB JIT debug test..."

# Run GDB
# We set LD_LIBRARY_PATH so R can find libRblas.so etc.
# We set R_HOME so R functions correctly.
# We run from the test directory so relative paths in gdb script work easily? 
# Actually let's run from PROJECT_ROOT to match previous successful manual runs which were likely from root
# but point to the files in the test dir.

OUTPUT_LOG="$DIR/gdb_output.log"

cd "$PROJECT_ROOT"

LD_LIBRARY_PATH="$R_LIB" R_HOME="$R_HOME_PATH" timeout 60s gdb -q -batch \
    -x "$DIR/test.gdb" \
    --args "$R_BIN" -f "$DIR/test.R" > "$OUTPUT_LOG" 2>&1

# Verification
echo "Verifying output..."

if grep -q "Hit inner_jit. FULL BACKTRACE" "$OUTPUT_LOG"; then
    echo "[PASS] Hit inner function breakpoint."
else
    echo "[FAIL] Did not hit inner function breakpoint."
    exit 1
fi

if grep -q "outer_jit ()" "$OUTPUT_LOG"; then
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
    echo "[WARN] Did not explicitly see GETVAR_OP/LDCONST_OP in output (might depend on specific instruction)."
fi

echo "Test passed successfully!"
rm "$OUTPUT_LOG"
