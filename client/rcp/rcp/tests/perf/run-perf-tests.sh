#!/bin/bash
#
# Perf JIT profiling tests for RCP.
#
# Verifies that:
#   1. perf record + inject --jit produces symbolized output
#   2. JIT-compiled function names (e.g., "fac") appear in call stacks
#   3. The call chain shows rcpEval -> fac -> rcpEval -> fac (recursion)
#   4. The proportion of [unknown] symbols is low (< 10% of JIT-related frames)
#
set -euo pipefail

R="${R_HOME}/bin/R"
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
WORKDIR=$(mktemp -d)
trap 'rm -rf "$WORKDIR"' EXIT

PASS=0
FAIL=0

pass() { echo "  PASS: $1"; PASS=$((PASS + 1)); }
fail() { echo "  FAIL: $1"; FAIL=$((FAIL + 1)); }

# ---------------------------------------------------------------------------
# Check prerequisites
# ---------------------------------------------------------------------------
if ! command -v perf &>/dev/null; then
    echo "perf not found, skipping perf tests"
    exit 0
fi

# Check that rcp was built with PERF_SUPPORT
if ! "$R" --vanilla --slave -e 'library(rcp); stopifnot(.Call("rcp_perf_support", PACKAGE="rcp"))' 2>/dev/null; then
    echo "Skipping perf tests (PERF_SUPPORT disabled)"
    exit 0
fi

echo "Running perf profiling tests..."
echo

# ---------------------------------------------------------------------------
# Test 1: Basic perf record + inject + script works
# ---------------------------------------------------------------------------
echo "Test 1: perf record + inject + script pipeline"

cat > "$WORKDIR/test_fac.R" <<'EOF'
library(rcp)
fac <- function(n) if (n <= 1) 1L else n * fac(n - 1L)
fac <- rcp::rcp_cmpfun(fac, list(name = "fac"))
for (i in 1:500000) fac(10)
EOF

if ! perf record -k 1 -g --call-graph fp -o "$WORKDIR/perf.data" \
     -- "$R" --vanilla -q -f "$WORKDIR/test_fac.R" &>/dev/null; then
    fail "perf record failed"
else
    pass "perf record succeeded"
fi

if ! perf inject --jit -i "$WORKDIR/perf.data" -o "$WORKDIR/perf.jit.data" 2>/dev/null; then
    fail "perf inject --jit failed"
else
    pass "perf inject --jit succeeded"
fi

PERF_OUTPUT="$WORKDIR/perf_script.txt"
perf script -i "$WORKDIR/perf.jit.data" > "$PERF_OUTPUT" 2>/dev/null

if [ ! -s "$PERF_OUTPUT" ]; then
    fail "perf script produced no output"
else
    pass "perf script produced output"
fi

# ---------------------------------------------------------------------------
# Test 2: JIT symbol "fac" is resolved in the output
# ---------------------------------------------------------------------------
echo
echo "Test 2: JIT symbol resolution"

FAC_COUNT=$(grep -c 'fac+' "$PERF_OUTPUT" || true)
if [ "$FAC_COUNT" -gt 0 ]; then
    pass "found 'fac' symbol in perf output ($FAC_COUNT occurrences)"
else
    fail "JIT symbol 'fac' not found in perf output"
fi

HELPERS_COUNT=$(grep -cE 'Rsh_Call|Rsh_StartLoopCntxt|RCP_STEPFOR_Fallback' "$PERF_OUTPUT" || true)
if [ "$HELPERS_COUNT" -gt 0 ]; then
    pass "found individual helper symbols in perf output ($HELPERS_COUNT occurrences)"
else
    fail "individual helper symbols (Rsh_Call, Rsh_StartLoopCntxt, RCP_STEPFOR_Fallback) not found in perf output"
fi

# ---------------------------------------------------------------------------
# Test 3: Call chain shows rcpEval -> fac recursion
# ---------------------------------------------------------------------------
echo
echo "Test 3: Recursive call chain (rcpEval -> fac -> rcpEval -> fac)"

# Look for stacks that contain at least 2 occurrences of the rcpEval -> fac pattern.
# In perf script output, the stack is bottom-up (caller first, then callee).
# A recursive fac(10) should show multiple fac -> rcpEval pairs.
RECURSIVE_STACKS=$(awk '
    /cycles:/ { in_stack=1; stack=""; next }
    in_stack && /^$/ {
        # Count fac occurrences in this stack
        n = gsub(/fac\+/, "&", stack)
        if (n >= 2) count++
        in_stack=0
    }
    in_stack { stack = stack " " $0 }
    END { print count+0 }
' "$PERF_OUTPUT")

if [ "$RECURSIVE_STACKS" -gt 0 ]; then
    pass "found $RECURSIVE_STACKS stacks with recursive fac calls"
else
    fail "no stacks with recursive fac calls found"
fi

# Check that rcpEval appears between fac calls (fac -> rcpEval -> fac)
RCPEVAL_BETWEEN=$(awk '
    /cycles:/ { in_stack=1; stack=""; next }
    in_stack && /^$/ {
        if (match(stack, /fac\+.*rcpEval.*fac\+/)) count++
        in_stack=0
    }
    in_stack { stack = stack " " $0 }
    END { print count+0 }
' "$PERF_OUTPUT")

if [ "$RCPEVAL_BETWEEN" -gt 0 ]; then
    pass "found rcpEval between recursive fac calls ($RCPEVAL_BETWEEN stacks)"
else
    fail "rcpEval not found between recursive fac calls"
fi

# ---------------------------------------------------------------------------
# Test 4: Low proportion of [unknown] symbols in JIT-related stacks
# ---------------------------------------------------------------------------
echo
echo "Test 4: Symbol resolution quality"

# Count frames in stacks that contain "fac"
TOTAL_JIT_FRAMES=$(awk '
    /cycles:/ { in_stack=1; stack=""; lines=0; next }
    in_stack && /^$/ {
        if (stack ~ /fac\+/) total += lines
        in_stack=0
    }
    in_stack { stack = stack " " $0; lines++ }
    END { print total+0 }
' "$PERF_OUTPUT")

UNKNOWN_JIT_FRAMES=$(awk '
    /cycles:/ { in_stack=1; has_fac=0; unknown=0; buf=""; next }
    in_stack && /^$/ {
        if (has_fac) total += unknown
        in_stack=0
    }
    in_stack {
        buf = buf " " $0
        if ($0 ~ /fac\+/) has_fac=1
        if ($0 ~ /\[unknown\]/) unknown++
    }
    END { print total+0 }
' "$PERF_OUTPUT")

if [ "$TOTAL_JIT_FRAMES" -gt 0 ]; then
    UNKNOWN_PCT=$((UNKNOWN_JIT_FRAMES * 100 / TOTAL_JIT_FRAMES))
    if [ "$UNKNOWN_PCT" -lt 10 ]; then
        pass "[unknown] frames: $UNKNOWN_JIT_FRAMES/$TOTAL_JIT_FRAMES ($UNKNOWN_PCT%) - below 10% threshold"
    else
        fail "[unknown] frames: $UNKNOWN_JIT_FRAMES/$TOTAL_JIT_FRAMES ($UNKNOWN_PCT%) - exceeds 10% threshold"
    fi
else
    fail "no JIT-related frames found to measure symbol quality"
fi

# ---------------------------------------------------------------------------
# Summary
# ---------------------------------------------------------------------------
echo
TOTAL=$((PASS + FAIL))
echo "============================================================"
echo "Perf tests: $TOTAL total, $PASS passed, $FAIL failed"
echo "============================================================"

if [ "$FAIL" -gt 0 ]; then
    exit 1
fi
exit 0
