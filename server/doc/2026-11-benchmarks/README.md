# `fir2c.opt` optimization log, 2026-11-09 to 2026-11-11

The sources of the report <https://claude.ai/artifact/KwRoURiYMgSD9oojwndCjV>. The report lists
the 28 optimizations of a chain of commits (branch `lazy-closure-versions`). For each optimization
it gives the cause of the slowness, the solution, the code changes, and the speedup of the
benchmark examples. After the chain, the report has one more state: the tip. At the tip, it also
shows the effect of each optimization and of each key category of optimizations.

## Files

- `ranges.tsv`: one line per optimization: number, key, first commit, last commit, campaign label,
  and the earlier report that describes it (those reports are not kept). The ranges are contiguous
  and cover the chain. The first commit of the first line and the last commit of the last line
  are the pins of the report: state `00-pre` is the parent of the first commit.
- `skeleton.py`: reads `ranges.tsv` and the history, and writes `skeleton.json` (commits and
  changed files of each range). It also writes an empty `content/<id>.json` for a new range.
- `content/<id>.json`: the text of one optimization: title, motivation, solution, the kind of each
  commit, and one sentence per changed file.
- `tip.json`: the tip: `commit` (the commit of the timed runs), `description` (one paragraph for
  the list of optimizations), and `runNotes` (one paragraph about the timed runs for the speedup
  table: the machine, the states that were measured again, and the check of each state).
- `runs/<state>/`: one benchmark run per state (`00-pre`, then the state after each optimization,
  then `tip`): `commit`, `examples-from` (the commit of the example files, if not `commit`),
  `csv/bench_*.csv` (the output of `OptimizationBenchmark`), `sizes.tsv` (size and hash of the
  generated code, and the result of the value check), and `notes.json`.
- `runs-opt/`: the run of `OptimizationBenchmark` at the tip, with each individual optimization
  removed in turn: `bench_*.csv`, `status/bench_*.json` (one per example), `commit`, and
  `optimizations` (the value of `BENCHMARK_OPTIMIZATIONS`).
- `runs-key/`: the run of `KeyBenchmark` at the tip: `<category>/bench_*.csv`, `status/`, and
  `commit`.
- `gen.py`: writes `report.html` (not tracked) from all of the above.
- `repin.py`: applies a map of old to new commits after a rewrite of the history (see below).
- `chain.sh`, `variants.sh`, `harness.sh` (the functions of both), `check.R`, `validate.py`,
  `rsh-probe/`: the benchmark harness.

## Examples and categories

The report shows the examples `bench_<category>_<name>`, where the category is one of `awf`,
`shootout`, `real`, `ati`, `scalar`, `mathkernel`, `riposte`, and `misc`, in this order. It does
not show the other examples of a run directory. The caption of the speedup table names them. Each
table puts the examples in groups by category. The row of a category is always visible. Select it
to show the rows of its examples.

## Regenerate the report

```sh
python3 gen.py            # [--bench DIR] [--opt DIR] [--key DIR] [--out FILE]
```

The defaults are `runs`, `runs-opt`, and `runs-key`. A section without data shows "Pending".
The report pins both ends of the commit chain (`ranges.tsv`), so later commits do not change it.
`gen.py` reads every diff from the commits of the chain; the diffs are stored nowhere else.
`gen.py` reads the optimizations of each key category from `KeyBenchmarkQuery.java` and
`OwnershipBenchmarkQuery.java` at the commit of `runs-key/commit`. It prints a warning if
`runs-opt` or `runs-key` has a different commit than `runs/tip`.

After a rebase, give `repin.py` a map of the old to the new commits: a TSV file with a header line,
then one line per commit (old sha, new sha, other columns are ignored). The map must name every
commit of the chain, and state `00-pre` (old base, new base). The script replaces the shas in all
files of this directory except the run directories, then runs `skeleton.py`. It keeps the tip
commit of `tip.json` if the map does not name it. It changes no file if a sha of the files is not
in the map. Then run `gen.py`, and correct what its content check reports (new or removed files of
a range) and the text of each changed optimization.

```sh
python3 repin.py MAP.tsv
```

The diff view loads highlight.js 11.9.0 from cdnjs for syntax highlighting. Without it (offline),
the code is plain text.

## Run the benchmarks again

Set the tip commit in `tip.json` first. Use a quiet machine: the scripts print the 1-minute load
average, and they wait up to `QUIET_WAIT` seconds (default 120) for it to fall below `QUIET_LOAD`
(default 3).

```sh
EXAMPLES_FROM=tip RUNS=DIR ./chain.sh          # all states, with the example files of the tip
./variants.sh opt [EXAMPLE...]                 # each optimization removed, into runs-opt/
./variants.sh key [EXAMPLE...]                 # each key category removed, into runs-key/
EXAMPLES_FROM=tip RUNS=DIR EXAMPLES="bench_awf_bounce bench_scalar_fib_rec" ./chain.sh 00-pre tip   # smoke test
OUT=DIR BENCHMARK_OPTIMIZATIONS='unbox|inline' ./variants.sh opt bench_awf_bounce                  # smoke test
```

`chain.sh` checks out each state in the worktree `.claude/worktrees/bench-chain` of the tree that
holds this directory, builds it, and times the examples with `OptimizationBenchmark`
(`BENCHMARK_OPTIMIZATIONS='$^'`), in one Maven run per state. With `EXAMPLES_FROM`, it copies the
`bench_*.R` files of that commit into the worktree after the checkout (untracked, or over the
files of the state), and it runs the examples of that commit. `EXAMPLES` gives a list of examples.
It needs the built vendored R of that tree (`R`, a build or a directory of links to one); the
worktree gets links to the same entries, and `check.R` runs in that R. The timed modules are
standalone, so the chain uses no installed `rsh`: it installs `rsh-probe/` into the private library
`rlib/`, and a state fails if anything loads `rsh`. It skips a state that has a `DONE` file. To
measure a state again, delete its `DONE` file; `chain.sh` then replaces the directory of that
state. The states of `runs/` have `DONE` files, so a new run of all states needs a new directory
in `RUNS`; it then replaces `runs/`. A state takes about 1 minute to build, then 10 to 20 seconds
for each example.

`variants.sh` checks out the tip in the worktree `.claude/worktrees/bench-tip`, builds it once,
and then runs one Maven run for each example. It copies the CSVs of the example into the output
directory, and it writes `status/<example>.json`: the status (`ok` or `failed`), the reason of a
failure, the failed tests, the time of the run, and the load average at its start and end. It
skips an example that has a status file, so a stopped run continues where it stopped. Use
`RETRY_FAILED=1` to run the failed examples again. Each line of its output shows the progress and
an estimate of the time that remains. The mode `opt` removes each optimization of
`BENCHMARK_OPTIMIZATIONS` (default: all of them, about 45), and it takes about 10 seconds per
optimization for each example. The mode `key` runs the five methods of `KeyBenchmark` and takes
about 2 minutes for each example. `KeyBenchmark` first evaluates each variant with `rsh`, so the
mode `key` installs the `rsh` of the tip into the private library `rlib-key/`.

Both scripts refuse to start a run while another run or another Maven process uses their
worktree. They stop when the free disk space falls below `MIN_FREE_GB` (default 5). The logs and
the private R libraries are not tracked (see `.gitignore`).

## `notes.json`

A note maps an example to a string. The prefix sets how `gen.py` uses the cell:

- `value:` the benchmark call returned a wrong value. The cell is excluded from all statistics.
- `no time` the run produced no time. `chain.sh` adds the reason: `compile error`,
  `test failure`, `timeout` (the run of the state stopped at `BENCH_LIMIT`), or `not run`.
- `rerun:` the time comes from a separate run of that example. Information only.

## Method of the table

- The bytecode time of an example is the median of its `bc.opt` time over all states.
- The load factor of a state is the geometric mean, over the examples and the three GNU-R rows
  (`ast`, `bc.default`, `bc.opt`), of the time in that state divided by the median over all states.
  Only a row with a time in two states or more counts.
- A cell shows min(`<none>`, `<none> (rerun)`) divided by the load factor of its state, and the
  bytecode time divided by that time as a percent.
- The speedup of an optimization is the time in the previous state divided by the time in its
  state. The report shows its geometric mean, minimum, and maximum. A value within ±12 % is noise.
- The row of a category shows, for each state, the geometric mean of the percents of its examples
  with a valid time in that state, and their count. Its tint shows the geometric mean of the
  speedups of its examples with a valid time in that state and in the previous state.
- The summary at the top uses the last state (the tip). It counts the examples with a valid time,
  the examples faster and slower than `bc.opt`, and it lists the examples without a valid time and
  the reason.

## Method of the sections "Each optimization removed" and "Key categories removed"

- The slowdown of a variant for an example is its time divided by the time of the row `<none>`
  of the same CSV (all optimizations). A variant with the same C as `<none>` has the time of
  `<none>` (see `VariantBenchmark`), so its slowdown is exactly 1. The means include these
  examples. A variant with the same C as another variant has changed C.
- A cell is the geometric mean of the slowdowns over the examples with both times, and the count.
- The noise floor of a cell is the geometric mean, over the same examples, of max(r, 1/r), where r
  is the time of `<none> (rerun)` divided by the time of `<none>`. A cell inside its floor is not
  significant. The same rule applies to one example, with its own r.
- "Each optimization removed" sorts the optimizations by the mean over all examples. For each
  optimization, it counts the examples with changed C and the examples where the variant failed,
  and it lists up to three examples with the largest significant slowdowns.
- "Key categories removed" has one row per key category, with the optimizations that it removes.
  The category `contextualDispatch` removes no optimization: it limits each function to one
  version besides the baseline. So it overlaps `scalarUnboxing` and `promiseInlining`.
