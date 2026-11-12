#!/bin/bash
# Usage: chain.sh [STATE...]
# Time the benchmark examples at each state, in order. A STATE is a name from the state list
# (00-pre, then each id of skeleton.json), or NAME@SHA for an extra state. Default: all 29.
# A state with a DONE marker is skipped. A failed state does not stop the chain.
# Env overrides (for scratch runs): RUNS (results root), EXAMPLES (space-separated example names;
# default: every `bench_*` example with a `#? benchmark:` line), MIN_TIMED (default 24, or the count of EXAMPLES),
# BUILD_LIMIT, BENCH_LIMIT, CHECK_LIMIT (seconds), QUIET_LOAD, QUIET_WAIT, MIN_FREE_GB.
set -uo pipefail
B=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
REPO=$(git -C "$B" rev-parse --show-toplevel)
W=$REPO/.claude/worktrees/bench-chain
RUNS=${RUNS:-$B/runs}
RLIB=$B/rlib                       # private library; holds only the rsh probe (see rsh-probe/)
PROBE=$RLIB/rsh-probe-loaded       # the probe's record of a load of rsh
SNAP=$W/server/src/test/snapshots/R
EXDIR=$W/server/src/test/resources/org/prlprg/examples/R
MAIN_RSH=$REPO/R/library/rsh/libs/rsh.so   # must not change during the chain
BUILD_LIMIT=${BUILD_LIMIT:-600} BENCH_LIMIT=${BENCH_LIMIT:-720} CHECK_LIMIT=${CHECK_LIMIT:-300}
MIN_FREE_GB=${MIN_FREE_GB:-5}
# State 00-pre: the parent of the first commit of ranges.tsv (the pins; see repin.py).
PRE=$(python3 -c 'import json,sys; print(json.load(open(sys.argv[1]))[0]["pre"])' "$B/skeleton.json") || exit 1
unset R_HOME
mkdir -p "$RUNS"

log() { echo "[$(date +%H:%M:%S)] $*"; }
alive() { [ -n "${1:-}" ] && kill -0 "$1" 2>/dev/null; }
descendants() { local c; for c in $(pgrep -P "$1"); do echo "$c"; descendants "$c"; done; }
# Kill a process tree, never by name (other agents run the same commands): TERM, then KILL
# whatever survives 5 s (a hang in compiled C may ignore TERM).
kill_tree() {
  local pids p; pids="$1 $(descendants "$1")"
  kill $pids 2>/dev/null
  for _ in 1 2 3 4 5; do
    for p in $pids; do alive "$p" && break; p=; done
    [ -z "$p" ] && return; sleep 1
  done
  kill -9 $pids 2>/dev/null
}

# One chain at a time; a killed chain leaves no orphan Maven or R processes.
LOCK=$B/chain.lock CHILD=
if ! (set -o noclobber; echo $$ >"$LOCK") 2>/dev/null; then
  alive "$(cat "$LOCK")" && { echo "another chain.sh runs (pid $(cat "$LOCK"))" >&2; exit 2; }
  echo $$ >"$LOCK"
fi
trap 'rm -f "$LOCK"' EXIT
trap 'alive "$CHILD" && kill_tree "$CHILD"; exit 143' INT TERM HUP

# run_limited SECONDS LOGFILE CMD...: CMD's status, or 124 after killing its tree at the limit.
run_limited() {
  local limit=$1 logf=$2; shift 2
  "$@" >"$logf" 2>&1 &
  CHILD=$!
  local start=$SECONDS
  while alive $CHILD; do
    if (( SECONDS - start > limit )); then
      kill_tree $CHILD; wait $CHILD 2>/dev/null; CHILD=; return 124
    fi
    sleep 2
  done
  wait $CHILD; local s=$?; CHILD=; return $s
}

wait_quiet() {   # up to QUIET_WAIT s for the 1-min load to fall below QUIET_LOAD; prints the load
  local waited=0 load
  while :; do
    load=$(sysctl -n vm.loadavg | awk '{print $2}')
    if awk -v l="$load" -v q="${QUIET_LOAD:-3}" 'BEGIN{exit !(l < q)}' || (( waited >= ${QUIET_WAIT:-120} )); then
      echo "$load"; return
    fi
    sleep 15; waited=$((waited + 15))
  done
}
machine_state() { uptime; ps -Ao pid,pcpu,etime,comm -r | head -8 | cut -c1-150; }

# Maven in the worktree with the measurement environment pinned (the properties file is a copy).
mvn_w() {
  (cd "$W/server" && env -u R_HOME R_LIBS="$RLIB" R_BIN="$W/R/bin/R" IGNORE_SNAPSHOTS=true DEBUG=true \
    EXAMPLE_FILTER="$FILTER" BENCHMARK_OPTIMIZATIONS='$^' ./mvnw -o "$@")
}

setup_worktree() {
  [ -d "$W" ] || git -C "$REPO" worktree add --detach "$W" "$PRE" >/dev/null || return 1
  # R: a directory of per-entry symlinks to the built R of this tree (whose R can itself be such a
  # directory: then the links go to the same targets), never a symlink itself.
  [ -L "$W/R" ] && return 1
  mkdir -p "$W/R"
  local x
  for x in "$REPO"/R/*; do [ -e "$W/R/${x##*/}" ] || ln -s "$(readlink "$x" || echo "$x")" "$W/R/"; done
  cp "$REPO/server/.config.properties" "$W/server/"
  # The private library holds the probe, so that a load of rsh fails instead of using R/library/rsh.
  if ! grep -q '^Title: Probe' "$RLIB/rsh/DESCRIPTION" 2>/dev/null; then
    mkdir -p "$RLIB" && env -u R_HOME "$REPO/R/bin/R" CMD INSTALL --no-test-load -l "$RLIB" "$B/rsh-probe" >"$RLIB/install.log" 2>&1 \
      || { echo "the install of rsh-probe failed (see $RLIB/install.log)" >&2; return 1; }
  fi
}
rsh_sha() { if [ -e "$MAIN_RSH" ]; then shasum -a 256 "$MAIN_RSH" | cut -d' ' -f1; else echo none; fi; }

all_states() {
  echo "00-pre $PRE"
  python3 -c 'import json,sys; [print(x["id"], x["post"]) for x in json.load(open(sys.argv[1]))]' \
    "$B/skeleton.json"
}

wipe_output() { rm -rf "$W/server/target" "$W/server/src/test/snapshots"; }   # worktree output only

# measure NAME SHA DIR: one state. Sets REASON on failure, SUMMARY after the timing.
measure() {
  local name=$1 sha=$2 D=$3 ex
  local free; free=$(df -g "$REPO" | awk 'NR==2{print $4}')
  (( free >= MIN_FREE_GB )) || { REASON="DISK: only ${free} GB free"; return 3; }
  rm -rf "$D"; mkdir -p "$D/csv" "$D/fir" "$D/check"

  # 1. Check out, and verify the tree is exactly the commit.
  git -C "$W" -c submodule.recurse=false checkout -q -f --detach "$sha" >"$D/checkout.log" 2>&1 \
    || { REASON="checkout failed"; return 1; }
  local full; full=$(git -C "$W" rev-parse HEAD)
  [ "$full" = "$(git -C "$REPO" rev-parse "$sha^{commit}")" ] || { REASON="HEAD is $full"; return 1; }
  [ -z "$(git -C "$W" status --porcelain --untracked-files=no)" ] || { REASON="tracked files differ"; return 1; }
  [ -x "$W/R/bin/R" ] && [ ! -L "$W/R" ] || { REASON="worktree R is broken"; return 1; }
  echo "$full" >"$D/commit"
  if (( EXAMPLES_SET )); then EXAMPLE_LIST=$EXAMPLES
  else EXAMPLE_LIST=$(grep -l '^#? benchmark:' "$EXDIR"/bench_*.R | xargs -n1 basename | sed 's/\.R$//' | LC_ALL=C sort); fi

  # 2. Build from scratch: no stale classes, compile cache or snapshots of an earlier state.
  wipe_output
  make -C "$W/proto" >"$D/proto.log" 2>&1 || { REASON="make -C proto failed"; return 1; }
  run_limited "$BUILD_LIMIT" "$D/build.log" mvn_w test-compile || { REASON="build failed ($?)"; return 1; }

  # 3. Time, on a quiet machine.
  local load; load=$(wait_quiet)
  { echo "## before (load $load)"; machine_state; } >"$D/machine.txt"
  rm -f "$PROBE"
  touch "$D/.start"
  local t0=$SECONDS st=0
  run_limited "$BENCH_LIMIT" "$D/bench.log" mvn_w -Dtest=OptimizationBenchmark test || st=$?
  { echo "## after ($((SECONDS - t0)) s, status $st)"; machine_state; } >>"$D/machine.txt"
  (( st == 124 )) && { REASON="TIMEOUT after ${BENCH_LIMIT}s"; return 1; }
  grep -E 'Tests run: [0-9]+, Failures' "$D/bench.log" | tail -1 >"$D/surefire.txt"
  [ -e "$PROBE" ] && { cp "$PROBE" "$D/"; REASON="the run loaded rsh (see $D/rsh-probe-loaded)"; return 1; }

  # 4. Collect; every file must come from this run.
  printf 'example\tc_lines\tc_bytes\tso_bytes\tfir_sha256\tc_sha256\tvalue\n' >"$D/sizes.tsv"
  : >"$D/notes.tsv"
  local timed=0 total=0 csv fir mod value note cl cb sb fs cs
  for ex in $EXAMPLE_LIST; do
    total=$((total + 1)) note=
    csv=$SNAP/snapshot/bench/opt/$ex.csv fir=$SNAP/forced/opt/fir/$ex.fir mod=$SNAP/opt/fir2c/opt/opt/$ex
    if [ "$csv" -nt "$D/.start" ] && awk -F, '$2=="\"<none>\"" && $5+0 > 0 {ok=1} END {exit !ok}' "$csv"; then
      cp "$csv" "$D/csv/"; timed=$((timed + 1))
    else
      note="no time"
    fi
    cl=NA cb=NA sb=NA fs=NA cs=NA value=NA
    [ "$fir" -nt "$D/.start" ] && { fs=$(shasum -a 256 "$fir" | cut -d' ' -f1); cp "$fir" "$D/fir/"; }
    if [ "$mod/code.c" -nt "$D/.start" ]; then
      cl=$(wc -l <"$mod/code.c" | tr -d ' ') cb=$(wc -c <"$mod/code.c" | tr -d ' ')
      cs=$(shasum -a 256 "$mod/code.c" | cut -d' ' -f1)
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
    [[ $value == OK* ]] || note="${note:+$note; }value: $value"
    [ -n "$note" ] && printf '%s\t%s\n' "$ex" "$note" >>"$D/notes.tsv"
    printf '%s\t%s\t%s\t%s\t%s\t%s\t%s\n' "$ex" "$cl" "$cb" "$sb" "$fs" "$cs" "$value" >>"$D/sizes.tsv"
  done
  python3 -c 'import json,sys
n = dict(l.rstrip("\n").split("\t", 1) for l in open(sys.argv[1]) if l.strip())
json.dump(n, open(sys.argv[2], "w"), indent=1)' "$D/notes.tsv" "$D/notes.json"
  rm -f "$D/notes.tsv"
  [ -e "$PROBE" ] && { cp "$PROBE" "$D/"; REASON="check.R loaded rsh"; return 1; }
  [ "$(rsh_sha)" = "$MAIN_RSH_SHA" ] || { REASON="the main rsh.so changed"; return 1; }
  local min=${MIN_TIMED:-$(( EXAMPLES_SET ? total : 24 ))}
  SUMMARY="timed $timed/$total, notes $(python3 -c 'import json,sys; print(len(json.load(open(sys.argv[1]))))' "$D/notes.json"), load $load, $((SECONDS - t0)) s"
  (( timed >= min )) || { REASON="only $timed of $total examples have a time (need $min)"; return 1; }
  gzip -f "$D/bench.log" "$D/build.log"
  touch "$D/DONE"
}

# --- main
setup_worktree || { echo "worktree setup failed" >&2; exit 1; }
MAIN_RSH_SHA=$(rsh_sha)
if [ -n "${EXAMPLES:-}" ]; then
  EXAMPLES_SET=1 FILTER="(?!stdlib_).*($(echo $EXAMPLES | tr ' ' '|'))\.R"
else
  EXAMPLES_SET=0 FILTER='(?!stdlib_).*(bench_).*'
fi
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
  log "$name $sha: start"
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
