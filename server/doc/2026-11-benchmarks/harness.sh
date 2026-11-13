# Functions of chain.sh and variants.sh (source this file). Before it, set B (this directory) and
# W (the worktree). Runs on macOS and Linux.
REPO=$(git -C "$B" rev-parse --show-toplevel)
SNAP=$W/server/src/test/snapshots/R
EXREL=server/src/test/resources/org/prlprg/examples/R
EXDIR=$W/$EXREL
MAIN_RSH=$REPO/R/library/rsh/libs/rsh.so   # must not change during a run
OS=$(uname -s)
# The tip: the commit of tip.json (an empty string if the file has none).
TIP=$(python3 -c 'import json,sys; print(json.load(open(sys.argv[1]))["commit"])' "$B/tip.json") || exit 1
unset R_HOME

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

# One run per worktree, and none while another Maven process uses the worktree. A killed run
# leaves no orphan Maven or R processes.
CHILD=
lock_worktree() {
  LOCK=$B/${W##*/}.lock
  if ! (set -o noclobber; echo $$ >"$LOCK") 2>/dev/null; then
    alive "$(cat "$LOCK")" && { echo "another run uses $W (pid $(cat "$LOCK"))" >&2; exit 2; }
    echo $$ >"$LOCK"
  fi
  trap 'rm -f "$LOCK"' EXIT
  trap 'alive "$CHILD" && kill_tree "$CHILD"; exit 143' INT TERM HUP
}
maven_busy() { pgrep -f "multiModuleProjectDirectory=$W/server" >/dev/null; }

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

load1() { if [ "$OS" = Linux ]; then cut -d' ' -f1 /proc/loadavg; else sysctl -n vm.loadavg | awk '{print $2}'; fi; }
wait_quiet() {   # up to QUIET_WAIT s for the 1-min load to fall below QUIET_LOAD; prints the load
  local waited=0 load
  while :; do
    load=$(load1)
    if awk -v l="$load" -v q="${QUIET_LOAD:-3}" 'BEGIN{exit !(l < q)}' || (( waited >= ${QUIET_WAIT:-120} )); then
      echo "$load"; return
    fi
    sleep 15; waited=$((waited + 15))
  done
}
machine_state() {   # the load and the 7 processes with the most CPU
  uptime
  if [ "$OS" = Linux ]; then ps -eo pid,pcpu,etime,args --sort=-pcpu; else ps -Ao pid,pcpu,etime,comm -r; fi | head -8 | cut -c1-150
}
machine_id() {   # "key: value" lines
  local os cpu cores mem
  if [ "$OS" = Linux ]; then
    os=$(. /etc/os-release 2>/dev/null && echo "${PRETTY_NAME:-}"); os=${os:-Linux}
    cpu=$(lscpu 2>/dev/null | awk -F': *' '/^Model name/{print $2; exit}')
    [ -n "$cpu" ] || cpu=$(awk -F': *' '/^(model name|Model|Hardware)[[:space:]]*:/{print $2; exit}' /proc/cpuinfo)
    cores=$(nproc) mem=$(awk '/^MemTotal/{printf "%.1f", $2 / 1048576}' /proc/meminfo)
    echo "governor: $(cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor 2>/dev/null || echo NA)"
  else
    os="macOS $(sw_vers -productVersion) ($(sw_vers -buildVersion))"
    cpu=$(sysctl -n machdep.cpu.brand_string) cores=$(sysctl -n hw.ncpu)
    mem=$(sysctl -n hw.memsize | awk '{printf "%.1f", $1 / 1073741824}')
  fi
  echo "os: $os"; echo "kernel: $(uname -srm)"; echo "cpu: ${cpu:-unknown}"
  echo "cores: $cores"; echo "memory_gb: $mem"; echo "host: $(hostname)"
  echo "cc: $(${CC:-gcc} --version 2>&1 | head -1)"   # AppConfig.CC, default gcc
  echo "java: $(java -version 2>&1 | grep -m1 version) (JAVA_HOME=${JAVA_HOME:-unset})"
  echo "R: $(env -u R_HOME "$REPO/R/bin/R" --version 2>&1 | head -1)"
}
sha256() { if command -v sha256sum >/dev/null; then sha256sum "$1"; else shasum -a 256 "$1"; fi | cut -d' ' -f1; }
rsh_sha() { if [ -e "$MAIN_RSH" ]; then sha256 "$MAIN_RSH"; else echo none; fi; }
free_gb() { df -Pk "$REPO" | awk 'NR==2{print int($4 / 1048576)}'; }

# Maven in the worktree with the measurement environment pinned (the properties file is a copy).
# FILTER: the example filter; BOPT: the optimizations that OptimizationBenchmark removes; RLIB: R_LIBS.
mvn_w() {
  maven_busy && { echo "another Maven process uses $W" >&2; return 2; }
  (cd "$W/server" && env -u R_HOME R_LIBS="$RLIB" R_BIN="$W/R/bin/R" IGNORE_SNAPSHOTS=true DEBUG=true \
    EXAMPLE_FILTER="$FILTER" BENCHMARK_OPTIMIZATIONS="$BOPT" ./mvnw $( [ "${OFFLINE:-1}" = 0 ] || echo -o ) "$@")
}
# The example filter of a list of examples.
filter_of() { echo "(?!stdlib_).*($(echo $* | tr ' ' '|'))\.R"; }

# setup_worktree REV: make W (detached at REV) with links to the built R of this tree.
setup_worktree() {
  [ -d "$W" ] || git -C "$REPO" worktree add --detach "$W" "$1" >/dev/null || return 1
  # R: a directory of per-entry symlinks to the built R of this tree (whose R can itself be such a
  # directory: then the links go to the same targets), never a symlink itself.
  [ -L "$W/R" ] && return 1
  mkdir -p "$W/R"
  local x
  for x in "$REPO"/R/*; do [ -e "$W/R/${x##*/}" ] || ln -s "$(readlink "$x" || echo "$x")" "$W/R/"; done
  # Untracked, so a fresh clone has none; mvn_w sets the same values in the environment.
  [ ! -f "$REPO/server/.config.properties" ] || cp "$REPO/server/.config.properties" "$W/server/"
}
# install_probe LIB: the probe in LIB, so that a load of rsh fails instead of using R/library/rsh.
install_probe() {
  grep -q '^Title: Probe' "$1/rsh/DESCRIPTION" 2>/dev/null && return
  mkdir -p "$1" && env -u R_HOME "$REPO/R/bin/R" CMD INSTALL --no-test-load -l "$1" "$B/rsh-probe" >"$1/install.log" 2>&1 \
    || { echo "the install of rsh-probe failed (see $1/install.log)" >&2; return 1; }
}
# checkout REV LOGFILE: check out REV in W, and verify that the tree is exactly the commit.
checkout() {
  git -C "$W" clean -fq -- "$EXREL" >/dev/null   # the example files that copy_examples added
  git -C "$W" -c submodule.recurse=false checkout -q -f --detach "$1" >"$2" 2>&1 || { REASON="checkout failed"; return 1; }
  local full; full=$(git -C "$W" rev-parse HEAD)
  [ "$full" = "$(git -C "$REPO" rev-parse "$1^{commit}")" ] || { REASON="HEAD is $full"; return 1; }
  [ -z "$(git -C "$W" status --porcelain --untracked-files=no)" ] || { REASON="tracked files differ"; return 1; }
  [ -x "$W/R/bin/R" ] && [ ! -L "$W/R" ] || { REASON="worktree R is broken"; return 1; }
}
# copy_examples REV: put the bench_*.R files of REV in W (over the files of the checked-out commit).
copy_examples() {
  local f
  for f in $(git -C "$REPO" ls-tree --name-only "$1" "$EXREL/" | grep '/bench_[^/]*\.R$'); do
    git -C "$REPO" show "$1:$f" >"$W/$f" || return 1
  done
}
# The bench_* examples with a `#? benchmark:` line of commit $1, or of EXDIR without $1.
bench_examples() {
  if [ -n "${1:-}" ]; then git -C "$REPO" grep -l '^#? benchmark:' "$1" -- "$EXREL/bench_*.R" | sed 's/.*://'
  else grep -l '^#? benchmark:' "$EXDIR"/bench_*.R; fi | xargs -n1 basename | sed 's/\.R$//' | LC_ALL=C sort
}
wipe_output() { rm -rf "$W/server/target" "$W/server/src/test/snapshots"; }   # worktree output only

# reasons CLASS LOG STATUS EX...: one line "EX<TAB>reason" for each EX of the run of CLASS that has no
# time: from the surefire report, the log, and the compiled module of the default optimizations.
# Also one line "#<TAB>test<TAB>message" for each failed test.
reasons() {
  python3 - "$W/server/target/surefire-reports" "$SNAP" "$@" <<'EOF'
import glob, os, re, sys, xml.etree.ElementTree as ET
rep, snap, cls, logf, status, *exs = sys.argv[1:]
fails = {}
for f in glob.glob(os.path.join(rep, f'TEST-*{cls}*.xml')):
    for tc in ET.parse(f).getroot().iter('testcase'):
        el = next((e for e in tc if e.tag in ('failure', 'error')), None)
        if el is None: continue
        msg = ' '.join(((el.get('message') or el.text or '').strip().splitlines() or [''])[:3])[:300]
        full = (el.get('message') or '') + (el.text or '')
        # The messages of EvalQuery#verifyEqual, and the exception of a failed C compilation.
        kind = ('wrong value' if re.search(r'Benchmark value changed|Return value or crash reason changed|Output changed', full) else
                'compile error' if 'CCompilationException' in full else 'test failure')
        for ex in exs:
            if re.search(rf'\b{re.escape(ex)}\b', tc.get('name', '')):
                fails.setdefault(ex, f'{kind}: {msg}')
                print(f'#\t{tc.get("name")}\t{msg}'.replace('\n', ' '))
log = open(logf, errors='replace').read() if os.path.exists(logf) else ''
for ex in exs:
    csvs = glob.glob(os.path.join(snap, 'snapshot', 'bench', '**', ex + '.csv'), recursive=True)
    ok = any(re.search(r'^"\d+","<none>",[^,]*,[^,]*,[0-9.e+-]+,', open(c).read(), re.M) for c in csvs)
    if ok: continue
    so = os.path.exists(os.path.join(snap, 'opt', 'fir2c', 'opt', 'opt', ex, 'code.so'))
    if ex in fails: r = fails[ex]
    elif csvs:
        r = 'test failure: the benchmark call of <none> failed' if so else 'compile error: no module for <none>'
    elif status == '124': r = 'timeout'
    else: r = 'not run'
    print(f'{ex}\t{r}')
EOF
}
