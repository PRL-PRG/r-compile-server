#!/bin/bash
# Usage: chain.sh [STATE...]
# Time the benchmark examples at each state, in order. A STATE is a name from the state list
# (00-pre, then each id of skeleton.json, then tip if tip.json has a commit), or NAME@SHA for an
# extra state. Default: all states. A state with a DONE marker is skipped. A failed state does not
# stop the chain.
# Env overrides: RUNS (results root), EXAMPLES_FROM (a commit, or `tip`: run its bench_*.R files at
# each state), EXAMPLES (space-separated example names; default: every `bench_*` example with a
# `#? benchmark:` line), MIN_TIMED (default 1), BUILD_LIMIT, BENCH_LIMIT (default 300 + 90 per
# example), CHECK_LIMIT (seconds), QUIET_LOAD, QUIET_WAIT, MIN_FREE_GB, OFFLINE (0: Maven may use the
# network).
set -uo pipefail
B=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
W=$(git -C "$B" rev-parse --show-toplevel)/.claude/worktrees/bench-chain
. "$B/harness.sh"
RUNS=${RUNS:-$B/runs}
RLIB=$B/rlib                       # private library; holds only the rsh probe (see rsh-probe/)
PROBE=$RLIB/rsh-probe-loaded       # the probe's record of a load of rsh
BUILD_LIMIT=${BUILD_LIMIT:-600} CHECK_LIMIT=${CHECK_LIMIT:-300} MIN_FREE_GB=${MIN_FREE_GB:-5}
BOPT='$^'
# State 00-pre: the parent of the first commit of ranges.tsv (the pins; see repin.py).
PRE=$(python3 -c 'import json,sys; print(json.load(open(sys.argv[1]))[0]["pre"])' "$B/skeleton.json") || exit 1
FROM=${EXAMPLES_FROM:-}
if [ "$FROM" = tip ]; then FROM=$TIP; [ -n "$FROM" ] || { echo "EXAMPLES_FROM=tip, but tip.json has no commit" >&2; exit 1; }; fi
if [ -n "$FROM" ]; then FROM=$(git -C "$REPO" rev-parse "$FROM^{commit}") || exit 1; fi
mkdir -p "$RUNS"

all_states() {
  echo "00-pre $PRE"
  python3 -c 'import json,sys; [print(x["id"], x["post"]) for x in json.load(open(sys.argv[1]))]' \
    "$B/skeleton.json"
  [ -z "$TIP" ] || echo "tip $TIP"
}

# measure NAME SHA DIR: one state. Sets REASON on failure, SUMMARY after the timing.
measure() {
  local name=$1 sha=$2 D=$3 ex
  local free; free=$(free_gb)
  (( free >= MIN_FREE_GB )) || { REASON="DISK: only ${free} GB free"; return 3; }
  rm -rf "$D"; mkdir -p "$D/csv" "$D/fir" "$D/check"

  # 1. Check out, and verify the tree is exactly the commit; then add the example files of FROM.
  checkout "$sha" "$D/checkout.log" || return 1
  git -C "$W" rev-parse HEAD >"$D/commit"
  if [ -n "$FROM" ]; then copy_examples "$FROM" || { REASON="the copy of the examples failed"; return 1; }; echo "$FROM" >"$D/examples-from"; fi
  if [ -n "${EXAMPLES:-}" ]; then EXAMPLE_LIST=$EXAMPLES; else EXAMPLE_LIST=$(bench_examples "$FROM"); fi
  FILTER=$(filter_of $EXAMPLE_LIST)
  local total; total=$(echo $EXAMPLE_LIST | wc -w | tr -d ' ')

  # 2. Build from scratch: no stale classes, compile cache or snapshots of an earlier state.
  wipe_output
  make -C "$W/proto" >"$D/proto.log" 2>&1 || { REASON="make -C proto failed"; return 1; }
  run_limited "$BUILD_LIMIT" "$D/build.log" mvn_w test-compile || { REASON="build failed ($?)"; return 1; }

  # 3. Time, on a quiet machine.
  local load; load=$(wait_quiet)
  { echo "## machine"; machine_id; echo "## before (load $load)"; machine_state; } >"$D/machine.txt"
  rm -f "$PROBE"
  touch "$D/.start"
  local t0=$SECONDS st=0
  run_limited "${BENCH_LIMIT:-$((300 + 90 * total))}" "$D/bench.log" mvn_w -Dtest=OptimizationBenchmark test || st=$?
  { echo "## after ($((SECONDS - t0)) s, status $st)"; machine_state; } >>"$D/machine.txt"
  grep -E 'Tests run: [0-9]+, Failures' "$D/bench.log" | tail -1 >"$D/surefire.txt"
  [ -e "$PROBE" ] && { cp "$PROBE" "$D/"; REASON="the run loaded rsh (see $D/rsh-probe-loaded)"; return 1; }

  # 4. Collect; every file must come from this run. An example without a time gets a note with the reason.
  printf 'example\tc_lines\tc_bytes\tso_bytes\tfir_sha256\tc_sha256\tvalue\n' >"$D/sizes.tsv"
  reasons OptimizationBenchmark "$D/bench.log" "$st" $EXAMPLE_LIST | awk -F'\t' '$1 != "#" {print $1 "\tno time: " $2}' >"$D/notes.tsv"
  local timed=0 csv fir mod value cl cb sb fs cs
  for ex in $EXAMPLE_LIST; do
    csv=$SNAP/snapshot/bench/opt/$ex.csv fir=$SNAP/forced/opt/fir/$ex.fir mod=$SNAP/opt/fir2c/opt/opt/$ex
    [ "$csv" -nt "$D/.start" ] && cp "$csv" "$D/csv/"
    grep -q "^$ex"$'\t' "$D/notes.tsv" || timed=$((timed + 1))
    cl=NA cb=NA sb=NA fs=NA cs=NA value=NA
    [ "$fir" -nt "$D/.start" ] && { fs=$(sha256 "$fir"); cp "$fir" "$D/fir/"; }
    if [ "$mod/code.c" -nt "$D/.start" ]; then
      cl=$(wc -l <"$mod/code.c" | tr -d ' ') cb=$(wc -c <"$mod/code.c" | tr -d ' ')
      cs=$(sha256 "$mod/code.c")
    fi
    if [ "$mod/code.so" -nt "$D/.start" ] && [ "$mod/bindings.rds" -nt "$D/.start" ]; then
      sb=$(wc -c <"$mod/code.so" | tr -d ' ')
      # 5. The timed module's benchmark value vs the AST interpreter's.
      run_limited "$CHECK_LIMIT" "$D/check/$ex.log" env -u R_HOME R_LIBS="$RLIB" "$REPO/R/bin/Rscript" \
        "$B/check.R" "$EXDIR/$ex.R" "$mod"
      value=$(tail -1 "$D/check/$ex.log" | sed 's/ *$//')
      [[ $value == OK* || $value == MISMATCH* ]] || value="CRASH (see check/$ex.log)"
    else
      value="no module"
    fi
    # A wrong value replaces the note of an example with a time (the note of one without a time stays).
    [[ $value == OK* || $value == "no module" ]] || grep -q "^$ex"$'\t' "$D/notes.tsv" \
      || printf '%s\tvalue: %s\n' "$ex" "$value" >>"$D/notes.tsv"
    printf '%s\t%s\t%s\t%s\t%s\t%s\t%s\n' "$ex" "$cl" "$cb" "$sb" "$fs" "$cs" "$value" >>"$D/sizes.tsv"
  done
  python3 -c 'import json,sys
n = dict(l.rstrip("\n").split("\t", 1) for l in open(sys.argv[1]) if l.strip())
json.dump(n, open(sys.argv[2], "w"), indent=1)' "$D/notes.tsv" "$D/notes.json"
  rm -f "$D/notes.tsv"
  [ -e "$PROBE" ] && { cp "$PROBE" "$D/"; REASON="check.R loaded rsh"; return 1; }
  [ "$(rsh_sha)" = "$MAIN_RSH_SHA" ] || { REASON="the main rsh.so changed"; return 1; }
  SUMMARY="timed $timed/$total, notes $(python3 -c 'import json,sys; print(len(json.load(open(sys.argv[1]))))' "$D/notes.json"), load $load, $((SECONDS - t0)) s$( ((st)) && echo ", status $st")"
  (( st == 124 )) && { REASON="TIMEOUT after ${BENCH_LIMIT:-$((300 + 90 * total))} s"; return 1; }
  (( timed >= ${MIN_TIMED:-1} )) || { REASON="only $timed of $total examples have a time (need ${MIN_TIMED:-1})"; return 1; }
  gzip -f "$D/bench.log" "$D/build.log"
  touch "$D/DONE"
}

# --- main
lock_worktree
setup_worktree "$PRE" && install_probe "$RLIB" || { echo "worktree setup failed" >&2; exit 1; }
MAIN_RSH_SHA=$(rsh_sha)
STATES=$(all_states) || exit 1
if [ $# -gt 0 ]; then
  sel=
  for s in "$@"; do
    case $s in
      *@*) sel+="${s%@*} ${s#*@}"$'\n' ;;
      *) line=$(echo "$STATES" | awk -v s="$s" '$1==s') ; [ -n "$line" ] || { echo "unknown state $s" >&2; exit 1; }
         sel+="$line"$'\n' ;;
    esac
  done
  STATES=$sel
fi

done_list= fail_list=
while read -r name sha; do
  [ -n "$name" ] || continue
  D=$RUNS/$name
  if [ -f "$D/DONE" ]; then log "$name $sha: complete, skipped"; done_list+=" $name"; continue; fi
  log "$name $sha: start (load $(load1))"
  SUMMARY= REASON=
  measure "$name" "$sha" "$D"; st=$?
  wipe_output                                   # keep only the results of point 4 in $D
  if [ -f "$D/DONE" ]; then
    log "$name $sha: DONE ($SUMMARY)"; done_list+=" $name"
  else
    log "$name $sha: FAILED: $REASON${SUMMARY:+ ($SUMMARY)}"; fail_list+=" $name"
    (( st == 3 )) && { log "stopping: disk almost full"; break; }
  fi
done <<<"$STATES"

echo "complete:${done_list:- none}"
echo "failed:${fail_list:- none}"
[ -z "$fail_list" ]
