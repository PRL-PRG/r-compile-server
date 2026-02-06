#!/usr/bin/env bash

set -euo pipefail

RSH_HOME="${RSH_HOME:-}"
R_HOME="${R_HOME:-}"

if [ -z "$RSH_HOME" ]; then echo "Error: RSH_HOME is not set"; exit 1; fi
if [ -z "$R_HOME" ]; then echo "Error: R_HOME is not set"; exit 1; fi

BENCH_DIR="${BENCH_DIR:-$RSH_HOME/inst/benchmarks}"
HARNESS_BIN="${HARNESS_BIN:-$RSH_HOME/inst/benchmarks/harness.R}"
BENCH_OPTS="${BENCH_OPTS:---rcp}"
FILTER="${FILTER:-}"
R="${R:-$R_HOME/bin/R}"
RSCRIPT="$R_HOME/bin/Rscript"

PARALLEL=$(nproc)
RUNS=1
OUTPUT=""

while [ $# -gt 0 ]; do
    case "$1" in
        --parallel) PARALLEL="$2"; shift 2 ;;
        --runs) RUNS="$2"; shift 2 ;;
        --output) OUTPUT="$2"; shift 2 ;;
        *) echo "Usage: $0 [--parallel N] [--runs N] [--output DIR]"; exit 1 ;;
    esac
done

if [ -t 1 ]; then USE_COLORS=1; else USE_COLORS=0; fi

color() {
    if [ "$USE_COLORS" -eq 1 ]; then
        echo -ne "\033[${1}m${2}\033[0m"
    else
        echo -n "$2"
    fi
}

if ! "$RSCRIPT" -e 'if (!requireNamespace("microbenchmark", quietly=TRUE)) quit(status=1)' 2>/dev/null; then
    echo "Error: R package 'microbenchmark' is not installed. Run 'make setup' first."
    exit 1
fi

if [ -z "$OUTPUT" ]; then
    OUTPUT=$(mktemp -d)
    CLEANUP=1
else
    mkdir -p "$OUTPUT"
    CLEANUP=0
fi

mapfile -t files < <(find "$BENCH_DIR" -mindepth 2 -name "*${FILTER}*.R" | sort)

if [ ${#files[@]} -eq 0 ]; then
    echo "No benchmarks found matching filter '${FILTER}'"
    exit 1
fi

TOTAL=${#files[@]}
echo "Benchmarks: $TOTAL  Runs: $RUNS  Parallel: $PARALLEL  Output: $OUTPUT"

LOCKFILE="$OUTPUT/.progress.lock"
COUNTERFILE="$OUTPUT/.progress.count"
echo 0 > "$COUNTERFILE"

run_one() {
    local file=$1
    local name
    name=$(basename "$file")
    name="${name%.*}"

    local status_text exit_status
    if "$R" --slave --no-restore -f "$HARNESS_BIN" --args \
        --output-dir "$OUTPUT" $BENCH_OPTS --runs "$RUNS" "${file%.*}" \
        > "$OUTPUT/$name.log" 2>&1; then
        exit_status=0
    else
        exit_status=1
    fi

    (
        flock 9
        local count
        count=$(cat "$COUNTERFILE")
        count=$((count + 1))
        echo "$count" > "$COUNTERFILE"
        if [ $exit_status -eq 0 ]; then
            echo "  [$count/$TOTAL] $name ... OK"
        else
            echo "  [$count/$TOTAL] $name ... FAIL"
        fi
    ) 9>"$LOCKFILE"

    return $exit_status
}
export -f run_one
export R HARNESS_BIN OUTPUT BENCH_OPTS RUNS LOCKFILE COUNTERFILE TOTAL

printf '%s\n' "${files[@]}" | xargs -P "$PARALLEL" -I{} bash -c 'run_one "$@"' _ {} \
    && exit_code=0 || exit_code=$?

failures=0
for file in "${files[@]}"; do
    name=$(basename "$file")
    name="${name%.*}"
    if [ -f "$OUTPUT/$name.log" ] && grep -q "^Error\|stopped$" "$OUTPUT/$name.log"; then
        failures=$((failures + 1))
    fi
done

echo
if [ $exit_code -eq 0 ]; then
    color "0;32" "All ${#files[@]} benchmarks passed"
else
    color "0;31" "$failures/${#files[@]} benchmarks failed"
    echo
    echo "Logs in: $OUTPUT"
fi
echo

rm -f "$LOCKFILE" "$COUNTERFILE"

if [ $CLEANUP -eq 1 ] && [ $exit_code -eq 0 ]; then
    rm -rf "$OUTPUT"
fi

exit $exit_code
