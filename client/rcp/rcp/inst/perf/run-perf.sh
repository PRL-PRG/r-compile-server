#!/usr/bin/env bash
#
# Run areWeFast benchmarks under different profiling modes.
#
# Usage: run-perf.sh [options] [benchmark ...]
#   --iterations N     Number of runs per benchmark (default: 15)
#   --stack-size N     DWARF stack size for perf (default: 16384)
#   --frequency N      Sampling frequency in Hz for both perf and Rprof (default: 99)
#   --output DIR       Output directory (default: results/)
#   --mode MODE,...     Comma-separated modes to run (default: all)
#                       Available: vanilla, vanilla-rprof, rcp, rcp-perf
#   --vanilla-r PATH   Path to vanilla R bin/ dir (default: /mnt/data-1/krikava/R-4.3.2/bin)
#   --project-r PATH   Path to project R bin/ dir (default: auto-detect from common.mk)
#   If no benchmarks specified, runs all areWeFast benchmarks.

set -euo pipefail

# ---------------------------------------------------------------------------
# Defaults
# ---------------------------------------------------------------------------
ITERATIONS=15
STACK_SIZE=16384
FREQUENCY=999
OUTPUT_DIR="results"
VANILLA_R_DIR="/mnt/data-1/krikava/R-4.3.2/bin"
PROJECT_R_DIR=""
USER_MODES=""

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
ROOT_DIR="$(cd "$SCRIPT_DIR/../.." && pwd)"
HELPER="$SCRIPT_DIR/harness.R"
BENCH_DIR="$(cd "$ROOT_DIR/../external/rsh/client/rsh/inst/benchmarks/areWeFast" && pwd)"

ALL_BENCHMARKS=(bounce bounce_nonames bounce_nonames_simple mandelbrot storage towers queens sieve)

# ---------------------------------------------------------------------------
# Parse arguments
# ---------------------------------------------------------------------------
BENCHMARKS=()

while [[ $# -gt 0 ]]; do
  case "$1" in
  --iterations)
    ITERATIONS="$2"
    shift 2
    ;;
  --stack-size)
    STACK_SIZE="$2"
    shift 2
    ;;
  --frequency)
    FREQUENCY="$2"
    shift 2
    ;;
  --output)
    OUTPUT_DIR="$2"
    shift 2
    ;;
  --mode)
    USER_MODES="$2"
    shift 2
    ;;
  --vanilla-r)
    VANILLA_R_DIR="$2"
    shift 2
    ;;
  --project-r)
    PROJECT_R_DIR="$2"
    shift 2
    ;;
  --help | -h)
    sed -n '3,12p' "$0" | sed 's/^# *//'
    exit 0
    ;;
  *)
    BENCHMARKS+=("$1")
    shift
    ;;
  esac
done

if [[ ${#BENCHMARKS[@]} -eq 0 ]]; then
  BENCHMARKS=("${ALL_BENCHMARKS[@]}")
fi

# ---------------------------------------------------------------------------
# Resolve modes
# ---------------------------------------------------------------------------
ALL_MODES=(vanilla vanilla-rprof rcp rcp-perf)

if [[ -n "$USER_MODES" ]]; then
  IFS=',' read -ra MODES <<<"$USER_MODES"
  for m in "${MODES[@]}"; do
    valid=0
    for a in "${ALL_MODES[@]}"; do [[ "$m" == "$a" ]] && valid=1; done
    if [[ $valid -eq 0 ]]; then
      echo "Error: unknown mode '$m'. Available: ${ALL_MODES[*]}" >&2
      exit 1
    fi
  done
else
  MODES=("${ALL_MODES[@]}")
fi

# ---------------------------------------------------------------------------
# Resolve R binaries
# ---------------------------------------------------------------------------
needs_vanilla=0
needs_project=0
for m in "${MODES[@]}"; do
  case "$m" in vanilla | vanilla-rprof) needs_vanilla=1 ;; rcp | rcp-perf) needs_project=1 ;; esac
done

VANILLA_R="$VANILLA_R_DIR/R"
if [[ $needs_vanilla -eq 1 ]] && [[ ! -x "$VANILLA_R" ]]; then
  echo "Error: vanilla R not found at $VANILLA_R" >&2
  exit 1
fi

if [[ -z "$PROJECT_R_DIR" ]]; then
  R_HOME="$(cd "$ROOT_DIR/../external/rsh/external/R" && pwd)"
  PROJECT_R_DIR="$R_HOME/bin"
fi
PROJECT_R="$PROJECT_R_DIR/R"
if [[ $needs_project -eq 1 ]] && [[ ! -x "$PROJECT_R" ]]; then
  echo "Error: project R not found at $PROJECT_R" >&2
  exit 1
fi

echo "Configuration:"
echo "  Vanilla R:   $VANILLA_R"
echo "  Project R:   $PROJECT_R"
echo "  Iterations:  $ITERATIONS"
echo "  Stack size:  $STACK_SIZE"
echo "  Frequency:   ${FREQUENCY} Hz"
echo "  Output:      $OUTPUT_DIR"
echo "  Modes:       ${MODES[*]}"
echo "  Benchmarks:  ${BENCHMARKS[*]}"
echo ""

# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------

# Collect all results for summary table: arrays of "bench mode median"
declare -a SUMMARY_ROWS=()

median_from_csv() {
  local csv="$1"
  "$VANILLA_R" --slave -e "
    d <- read.csv('$csv')
    cat(median(d\$time))
  "
}

run_mode() {
  local bench="$1" mode="$2"
  local bench_file="$BENCH_DIR/${bench}.R"
  local out="$OUTPUT_DIR/$bench"

  echo "  [$mode]"

  case "$mode" in
  # -------------------------------------------------------------------
  vanilla)
    "$VANILLA_R" --slave --no-restore -e "
        source('$HELPER')
        harness\$load_benchmark('$bench_file')
        param <- harness\$get_default_param()
        times <- harness\$run_benchmark(param, ${ITERATIONS})
        harness\$write_times(times, '$out/vanilla.csv')
      "
    ;;

  # -------------------------------------------------------------------
  vanilla-rprof)
    mkdir -p "$out/vanilla-rprof"
    "$VANILLA_R" --slave --no-restore -e "
        source('$HELPER')
        harness\$load_benchmark('$bench_file')
        param <- harness\$get_default_param()
        Rprof('$out/vanilla-rprof/Rprof.out', interval=1/${FREQUENCY}, memory.profiling=T, gc.profiling=T)
        times <- harness\$run_benchmark(param, ${ITERATIONS})
        Rprof(NULL)
        harness\$write_times(times, '$out/vanilla-rprof.csv')
      "
    ;;

  # -------------------------------------------------------------------
  rcp)
    "$PROJECT_R" --slave --no-restore -e "
        library(rcp)
        rcp_cmppkg('base')
        source('$HELPER')
        harness\$load_benchmark('$bench_file')
        param <- harness\$get_default_param()
        print(harness\$compile_global_funs())
        times <- harness\$run_benchmark(param, ${ITERATIONS})
        harness\$write_times(times, '$out/rcp.csv')
      "
    ;;

  # -------------------------------------------------------------------
  rcp-perf)
    mkdir -p "$out/rcp-perf"

    RCP_PERF_JIT=1 \
      perf record -F "$FREQUENCY" -g --call-graph "dwarf,$STACK_SIZE" -k1 -e cpu-cycles:u \
      -o "$out/rcp-perf/perf.data" \
      -- "$PROJECT_R" --slave --no-restore -e "
          library(rcp)
          rcp_cmppkg('base')
          source('$HELPER')
          harness\$load_benchmark('$bench_file')
          param <- harness\$get_default_param()
          print(harness\$compile_global_funs())
          times <- harness\$run_benchmark(param, ${ITERATIONS})
          harness\$write_times(times, '$out/rcp-perf.csv')
        "

    echo "    Injecting JIT symbols..."
    perf inject --jit \
      -i "$out/rcp-perf/perf.data" \
      -o "$out/rcp-perf/perf.jit.data"
    ;;
  esac
}

# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------
for bench in "${BENCHMARKS[@]}"; do
  bench_file="$BENCH_DIR/${bench}.R"
  if [[ ! -f "$bench_file" ]]; then
    echo "Warning: benchmark $bench_file not found, skipping" >&2
    continue
  fi

  echo "=== $bench ==="
  mkdir -p "$OUTPUT_DIR/$bench"

  for mode in "${MODES[@]}"; do
    run_mode "$bench" "$mode"

    # Record result for summary
    csv="$OUTPUT_DIR/$bench/${mode}.csv"
    if [[ "$mode" == "vanilla-rprof" ]]; then
      csv="$OUTPUT_DIR/$bench/vanilla-rprof.csv"
    fi
    if [[ -f "$csv" ]]; then
      med=$(median_from_csv "$csv")
      SUMMARY_ROWS+=("$bench $mode $med")
    fi
  done
  echo ""
done

# ---------------------------------------------------------------------------
# Summary
# ---------------------------------------------------------------------------
echo "========================================"
echo " Summary (median elapsed time, seconds)"
echo "========================================"
printf "%-30s %-16s %s\n" "Benchmark" "Mode" "Median(s)"
printf "%-30s %-16s %s\n" "------------------------------" "----------------" "--------"
for row in "${SUMMARY_ROWS[@]}"; do
  read -r bench mode med <<<"$row"
  printf "%-30s %-16s %s\n" "$bench" "$mode" "$med"
done
echo ""
echo "Done."
