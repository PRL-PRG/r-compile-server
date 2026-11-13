#!/bin/bash
# Usage: variants.sh opt|key [EXAMPLE...]
# Benchmark the tip with variants of the optimizations, one example per Maven run:
#   opt: OptimizationBenchmark (every individual optimization removed in turn), into runs-opt/
#   key: KeyBenchmark (each key category removed), into runs-key/
# Default examples: every bench_* example of the tip with a `#? benchmark:` line. An example with a
# status file is skipped, so a stopped run continues where it stopped.
# Env overrides: TIP (commit; default: tip.json), OUT (results root), BENCHMARK_OPTIMIZATIONS (opt
# only; default: all), RETRY_FAILED (1: run the failed examples again), EX_LIMIT, BUILD_LIMIT
# (seconds), QUIET_LOAD, QUIET_WAIT, MIN_FREE_GB, OFFLINE (0: Maven may use the network).
set -uo pipefail
B=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
W=$(git -C "$B" rev-parse --show-toplevel)/.claude/worktrees/bench-tip
TIP_ENV=${TIP:-}
. "$B/harness.sh"
MODE=${1:-}; shift
case $MODE in
  opt) CLASS=OptimizationBenchmark BOPT=${BENCHMARK_OPTIMIZATIONS:-.*} EX_LIMIT=${EX_LIMIT:-5400} ;;
  key) CLASS=KeyBenchmark BOPT='$^' EX_LIMIT=${EX_LIMIT:-1200} ;;
  *) echo "usage: variants.sh opt|key [EXAMPLE...]" >&2; exit 1 ;;
esac
TIP=${TIP_ENV:-$TIP}
[ -n "$TIP" ] || { echo "no tip commit: set it in tip.json or in TIP" >&2; exit 1; }
OUT=${OUT:-$B/runs-$MODE}
BUILD_LIMIT=${BUILD_LIMIT:-900} MIN_FREE_GB=${MIN_FREE_GB:-5}
# The timed modules are standalone, but KeyBenchmark first evaluates each variant with rsh (EvalQuery):
# so opt gets the probe, and key the tip's rsh.
RLIB=$B/rlib-$MODE

lock_worktree
setup_worktree "$TIP" || { echo "worktree setup failed" >&2; exit 1; }
full=$(git -C "$REPO" rev-parse "$TIP^{commit}") || exit 1
mkdir -p "$OUT/status"
if [ -f "$OUT/commit" ] && [ "$(cat "$OUT/commit")" != "$full" ]; then
  echo "$OUT holds a run of $(cat "$OUT/commit"), not of $full: choose another OUT" >&2; exit 1
fi
echo "$full" >"$OUT/commit"
if [ "$MODE" = opt ]; then
  if [ -f "$OUT/optimizations" ] && [ "$(cat "$OUT/optimizations")" != "$BOPT" ]; then
    echo "$OUT holds a run with BENCHMARK_OPTIMIZATIONS=$(cat "$OUT/optimizations"): choose another OUT" >&2; exit 1
  fi
  echo "$BOPT" >"$OUT/optimizations"
fi

# Build once per run.
if [ "$(git -C "$W" rev-parse HEAD)" != "$full" ] || [ ! -d "$W/server/target/test-classes" ]; then
  REASON=
  checkout "$full" "$OUT/checkout.log" || { echo "$REASON" >&2; exit 1; }
  wipe_output
fi
log "build $full"
make -C "$W/proto" >"$OUT/proto.log" 2>&1 || { echo "make -C proto failed (see $OUT/proto.log)" >&2; exit 1; }
FILTER='$^'
run_limited "$BUILD_LIMIT" "$OUT/build.log" mvn_w test-compile || { echo "build failed (see $OUT/build.log)" >&2; exit 1; }
if [ "$MODE" = opt ]; then
  install_probe "$RLIB" || exit 1
elif [ "$(cat "$RLIB/commit" 2>/dev/null)" != "$full" ]; then
  rm -rf "$RLIB"; mkdir -p "$RLIB"
  env -u R_HOME R_LIBS="$RLIB" make -C "$W/client/rsh" install R_HOME="$W/R" >"$OUT/rsh-install.log" 2>&1
  grep -q '\* DONE (rsh)' "$OUT/rsh-install.log" || { echo "the install of rsh failed (see $OUT/rsh-install.log)" >&2; exit 1; }
  echo "$full" >"$RLIB/commit"
fi
MAIN_RSH_SHA=$(rsh_sha)

if [ $# -gt 0 ]; then EXS="$*"; else EXS=$(bench_examples "$full"); fi
n=$(echo $EXS | wc -w | tr -d ' ') i=0 ran=0 t_all=0
{ echo "## machine"; machine_id; echo "## start"; machine_state; } >"$OUT/machine-$(date +%Y%m%d-%H%M%S).txt"
log "$MODE: $n examples, load $(load1), BENCHMARK_OPTIMIZATIONS=$BOPT"
for ex in $EXS; do
  i=$((i + 1))
  S=$OUT/status/$ex.json
  if [ -f "$S" ] && ! { [ "${RETRY_FAILED:-0}" = 1 ] && grep -q '"status": "failed"' "$S"; }; then continue; fi
  (( $(free_gb) >= MIN_FREE_GB )) || { log "stopping: only $(free_gb) GB free"; exit 3; }
  [ -f "$EXDIR/$ex.R" ] || { log "$ex: no such example at the tip"; continue; }
  maven_busy && { log "stopping: another Maven process uses $W"; exit 2; }
  load=$(wait_quiet)
  FILTER=$(filter_of "$ex")
  rm -f "$OUT/$ex.csv" "$OUT"/*/"$ex.csv"
  rm -f "$RLIB/rsh-probe-loaded"
  mkdir -p "$OUT/log"
  rm -rf "$W/server/target/surefire-reports"
  touch "$OUT/.start"
  t0=$SECONDS st=0
  run_limited "$EX_LIMIT" "$OUT/log/$ex.log" mvn_w -Dtest="$CLASS" test || st=$?
  secs=$((SECONDS - t0))
  # Collect the CSVs of this run (opt: snapshot/bench/opt/EX.csv; key: snapshot/bench/key/LABEL/EX.csv).
  found=0
  for c in $(find "$SNAP/snapshot/bench" -name "$ex.csv" -newer "$OUT/.start" 2>/dev/null); do
    rel=${c#"$SNAP/snapshot/bench/$MODE/"}
    mkdir -p "$OUT/$(dirname "$rel")"; cp "$c" "$OUT/$rel"; found=$((found + 1))
  done
  info=$(reasons "$CLASS" "$OUT/log/$ex.log" "$st" "$ex")
  reason=$(echo "$info" | awk -F'\t' '$1 != "#"' | cut -f2)
  [ -z "$reason" ] && (( $(echo "$info" | grep -c '^#') )) && reason="$(echo "$info" | grep -c '^#') tests failed"
  [ -e "$RLIB/rsh-probe-loaded" ] && reason="the run loaded rsh"
  [ "$(rsh_sha)" = "$MAIN_RSH_SHA" ] || { log "stopping: the main rsh.so changed"; exit 1; }
  python3 - "$S" "$ex" "$full" "$st" "$secs" "$load" "$(load1)" "$found" "$reason" "$BOPT" "$info" <<'EOF'
import json, sys
p, ex, commit, st, secs, l0, l1, found, reason, bopt, info = sys.argv[1:]
fails = dict(l.split('\t')[1:3] for l in info.splitlines() if l.startswith('#\t'))
json.dump({'example': ex, 'commit': commit, 'status': 'failed' if reason else 'ok', 'reason': reason,
           'exit': int(st), 'seconds': int(secs), 'load_start': float(l0), 'load_end': float(l1),
           'csv_files': int(found), 'optimizations': bopt, 'failures': fails}, open(p, 'w'), indent=1)
EOF
  rm -rf "$W/server/src/test/snapshots"
  ran=$((ran + 1)) t_all=$((t_all + secs))
  log "[$i/$n] $ex: ${reason:-ok} ($secs s, load $load; about $(( t_all / ran * (n - i) / 60 )) min left)"
done
rm -f "$OUT/.start"
log "complete: $(grep -l '"status": "ok"' "$OUT"/status/*.json 2>/dev/null | wc -l | tr -d ' ') ok, $(grep -l '"status": "failed"' "$OUT"/status/*.json 2>/dev/null | wc -l | tr -d ' ') failed, of $n"
