#!/bin/bash
set -e

# Get the directory where the test is running (e.g., gdb-basic)
TEST_DIR=$(pwd)
# Get the directory where this script lives (tests/debugging)
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" &>/dev/null && pwd)"
PROJECT_ROOT="$SCRIPT_DIR/../../.."

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

echo "Running test in $TEST_DIR..."

OUTPUT_LOG="actual.log"
EXPECTED_LOG="expected.out"
rm -f "$OUTPUT_LOG"

cd "$PROJECT_ROOT"

# Run GDB
# We assume test.gdb and test.R are in TEST_DIR
# We redirect both stdout and stderr to the log
if ! LD_LIBRARY_PATH="$R_LIB" R_HOME="$R_HOME" timeout 60s gdb -q -batch \
  -x "$TEST_DIR/test.gdb" \
  --args "$R_BIN" -f "$TEST_DIR/test.R" >"$TEST_DIR/$OUTPUT_LOG" 2>&1; then
    echo "GDB command failed (or timed out)."
    # We don't exit immediately because sometimes we want to check partial output,
    # but usually a crash is a failure. However, for golden tests, maybe the crash output is expected?
    # Assuming GDB exit code 0 is expected.
    # But wait, timeout returns 124.
    if [ $? -eq 124 ]; then
        echo "Test timed out!"
        exit 1
    fi
    # If it's just a regular failure, we proceed to check output? 
    # Usually GDB batch mode exits with 0 unless there is a GDB error (not inferior error).
    # If the inferior crashes, GDB might still exit 0.
fi

# Verify
cd "$TEST_DIR"
python3 "$SCRIPT_DIR/check-gdb-log.py" "$OUTPUT_LOG" "$EXPECTED_LOG" "$@"
