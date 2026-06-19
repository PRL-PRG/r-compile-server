#!/usr/bin/env bash
#
# Portable benchmark runner. Discovers every benchmark under inst/benchmarks
# (each <group>/<name>.R defining `execute`) and runs it through harness.R,
# writing one <label>.csv per benchmark into the output dir. Used by downstream
# projects (e.g. rcp) that drive the benchmarks with their own R; rsh's own
# `make benchmark` shares the same harness and benchmark.R.
#
# Add a benchmark by dropping a file into a group folder -- no other change.
# The CRAN package benchmarks live under the generated cran/ group; the
# cran-harvest/ tooling folder is skipped.

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

RSH_HOME="${RSH_HOME:-}"
R_HOME="${R_HOME:-}"

if [ -z "$RSH_HOME" ]; then
  echo "Error: RSH_HOME is not set"
  exit 1
fi
if [ -z "$R_HOME" ]; then
  echo "Error: R_HOME is not set"
  exit 1
fi

BENCH_DIR="${BENCH_DIR:-$SCRIPT_DIR}"
HARNESS_BIN="${HARNESS_BIN:-$SCRIPT_DIR/harness.R}"
BENCH_OPTS="${BENCH_OPTS:---rcp}"
FILTER="${FILTER:-}"
R="${R:-$R_HOME/bin/R}"
RSCRIPT="$R_HOME/bin/Rscript"
# NOTE: keep R_HOME exported. The RCP R is relocated -- its binary computes the
# wrong R_HOME from its own path, so the env value is what lets it find its
# library (and thus `library(rcp)`). It prints a harmless
# "WARNING: ignoring environment value of R_HOME" to stdout; we filter that out
# of the version probe below rather than dropping R_HOME.

PARALLEL=$(nproc)
RUNS=1
OUTPUT=""

while [ $# -gt 0 ]; do
  case "$1" in
  --parallel)
    PARALLEL="$2"
    shift 2
    ;;
  --runs)
    RUNS="$2"
    shift 2
    ;;
  --output)
    OUTPUT="$2"
    shift 2
    ;;
  *)
    echo "Usage: $0 [--parallel N] [--runs N] [--output DIR]"
    exit 1
    ;;
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
  echo "Installing R package 'microbenchmark' (required for benchmarking) into $R_HOME..." >&2
  "$RSCRIPT" -e 'install.packages("microbenchmark", repos="https://cloud.r-project.org")' || true
  if ! "$RSCRIPT" -e 'if (!requireNamespace("microbenchmark", quietly=TRUE)) quit(status=1)' 2>/dev/null; then
    echo "Error: failed to install 'microbenchmark' into $R_HOME. Ensure R_HOME points to a writable R." >&2
    exit 1
  fi
fi

# Preserve rsh's benchmark Rprofile (error -> traceback) if present.
if [ -f "$SCRIPT_DIR/Rprofile.site" ]; then
  export R_PROFILE_USER="$SCRIPT_DIR/Rprofile.site"
fi

# Package-based benchmarks (cran/) need their CRAN packages on the library path.
# They are installed (by `make cran-harvest`) into a per-R-version library so the
# same tree serves both the RCP R and the vanilla bc R. Add it if present.
# major.minor key, e.g. "4.5" (grep guards against any stray startup output).
#
# Use R_LIBS, not R_LIBS_USER: R_LIBS *prepends* to the existing library path,
# whereas R_LIBS_USER *replaces* R's default user-library slot -- which would
# drop whatever lives there (e.g. the rcp package) off .libPaths(), breaking
# library(rcp).
RVER="$("$RSCRIPT" -e 'cat(paste(R.version$major, sub("\\..*$", "", R.version$minor), sep="."))' 2>/dev/null | grep -oE '[0-9]+\.[0-9]+' | head -1 || true)"
CRAN_LIB="$SCRIPT_DIR/cran-harvest/lib/$RVER"
SKIP_CRAN=0
if [ -n "$RVER" ] && [ -d "$CRAN_LIB" ]; then
  export R_LIBS="$CRAN_LIB${R_LIBS:+:$R_LIBS}"
elif [ -d "$SCRIPT_DIR/cran" ]; then
  # CRAN benchmarks exist but their packages are not installed for this R, so
  # they would all fail at library(). Skip them instead of evaluating them.
  SKIP_CRAN=1
  echo "NOTE: CRAN packages not installed for R $RVER ($CRAN_LIB missing);" >&2
  echo "      skipping cran/ benchmarks. Run 'make cran-harvest' with this R to enable them." >&2
fi

if [ -z "$OUTPUT" ]; then
  OUTPUT=$(mktemp -d)
  CLEANUP=1
else
  mkdir -p "$OUTPUT"
  CLEANUP=0
fi

# Collect benchmarks as "<label>\t<path-without-ext>" lines. The label is the
# path relative to the benchmark root (e.g. areWeFast/mandelbrot), so benchmarks
# with the same file name in different groups (areWeFast/mandelbrot vs
# shootout/...) get distinct result rows and CSVs. Output files mirror that
# structure in subdirectories. The cran-harvest/ tooling folder is excluded.
find_excludes=(-not -path "*/cran-harvest/*")
[ "$SKIP_CRAN" = 1 ] && find_excludes+=(-not -path "*/cran/*")

entries=()
while IFS= read -r file; do
  rel="${file#"$BENCH_DIR"/}"
  label="${rel%.R}"
  entries+=("$label"$'\t'"${file%.R}")
done < <(find "$BENCH_DIR" -mindepth 2 -name "*${FILTER}*.R" "${find_excludes[@]}" | sort)

if [ ${#entries[@]} -eq 0 ]; then
  echo "No benchmarks found matching filter '${FILTER}' in: $BENCH_DIR"
  exit 1
fi

TOTAL=${#entries[@]}
echo "Benchmarks: $TOTAL  Runs: $RUNS  Parallel: $PARALLEL  Output: $OUTPUT"
echo "Root: $BENCH_DIR"

LOCKFILE="$OUTPUT/.progress.lock"
COUNTERFILE="$OUTPUT/.progress.count"
echo 0 >"$COUNTERFILE"

# shellcheck disable=SC2317 # invoked indirectly via export -f and xargs
run_one() {
  local entry=$1
  local name="${entry%%$'\t'*}"
  local file="${entry#*$'\t'}"

  # `name` may contain '/' (group/topic) -> ensure its subdirectory exists.
  mkdir -p "$OUTPUT/$(dirname "$name")"

  local exit_status
  if /usr/bin/time -v -o "$OUTPUT/$name.time" \
    "$R" --slave --no-restore -f "$HARNESS_BIN" --args \
    --output-dir "$OUTPUT" --name "$name" "$BENCH_OPTS" --runs "$RUNS" "$file" \
    >"$OUTPUT/$name.log" 2>&1; then
    exit_status=0
  else
    exit_status=$?
  fi

  (
    flock 9
    local count
    count=$(cat "$COUNTERFILE")
    count=$((count + 1))
    echo "$count" >"$COUNTERFILE"
    if [ $exit_status -eq 0 ]; then
      echo "  [$count/$TOTAL] $name ... OK"
    else
      echo "  [$count/$TOTAL] $name ... FAIL"
      echo "--- $name output ---"
      cat "$OUTPUT/$name.log"
      echo "--- end $name output ---"
    fi
  ) 9>"$LOCKFILE"

  return $exit_status
}
export -f run_one
export R HARNESS_BIN OUTPUT BENCH_OPTS RUNS LOCKFILE COUNTERFILE TOTAL

printf '%s\n' "${entries[@]}" | xargs -P "$PARALLEL" -I{} bash -c 'run_one "$@"' _ {} &&
  exit_code=0 || exit_code=$?

# count actual failures from missing result CSVs
failures=0
failed_names=()
for entry in "${entries[@]}"; do
  name="${entry%%$'\t'*}"
  if [ ! -f "$OUTPUT/$name.csv" ]; then
    failures=$((failures + 1))
    failed_names+=("$name")
  fi
done

echo
if [ $failures -eq 0 ] && [ $exit_code -eq 0 ]; then
  color "0;32" "All ${#entries[@]} benchmarks passed"
else
  color "0;31" "$failures/${#entries[@]} benchmarks failed"
  echo
  for name in "${failed_names[@]}"; do
    local_time=$(grep -oP '(?<=Elapsed \(wall clock\) time \(h:mm:ss or m:ss\): )\S+' "$OUTPUT/$name.time" 2>/dev/null || echo '?')
    echo "  - $name ($local_time)"
  done
  echo
  echo "Logs in: $OUTPUT"
fi
echo

rm -f "$LOCKFILE" "$COUNTERFILE"

if [ $CLEANUP -eq 1 ] && [ $exit_code -eq 0 ]; then
  rm -rf "$OUTPUT"
fi

exit $exit_code
