# `fir2c.opt` optimization log, 2026-11-09 to 2026-11-11

The sources of the report <https://claude.ai/artifact/KwRoURiYMgSD9oojwndCjV>. The report lists
the 28 optimizations of a chain of commits (branch `lazy-closure-versions`). For each optimization
it gives the cause of the slowness, the solution, the code changes, and the speedup of the 25
`bench_*` examples. It also lists the fixes before the chain and the effect of the soundness fixes.

## Files

- `ranges.tsv`: one line per optimization: number, key, first commit, last commit, campaign label,
  and the earlier report that describes it (those reports are not kept). The ranges are contiguous
  and cover the chain. The first commit of the first line and the last commit of the last line
  are the pins of the report: state `00-pre` is the parent of the first commit.
- `skeleton.py`: reads `ranges.tsv` and the history, and writes `skeleton.json` (commits and
  changed files of each range). It also writes an empty `content/<id>.json` for a new range.
- `content/<id>.json`: the text of one optimization: title, motivation, solution, the kind of each
  commit, and one sentence per changed file.
- `runs/<state>/`: one benchmark run per state (`00-pre`, then the state after each optimization):
  `commit`, `csv/bench_*.csv` (the output of `OptimizationBenchmark`), `sizes.tsv` (size and hash
  of the generated code, and the result of the value check), and `notes.json`.
- `fixes.json`: the text of the parts "Before the chain" and "Soundness fixes": the root of the
  fix block (`blockRoot`, the parent of its first commit), one line per group of the block, the
  costs of the fixes, and one line of fixed faults per optimization.
- `block.tsv`: the group of each commit of the block (`blockRoot..00-pre`), by subject. `gen.py`
  fails if a commit of the block has no line.
- `before-fixes.tsv`: the times of the final state before the soundness fixes: a run of the old
  final commit with the old vendored R and the old `chain.sh`, in the same session as the new run
  (`gen.py --save-before DIR/28-own-phi-web`, where `DIR` is the `RUNS` of that run).
- `gen.py`: writes `report.html` (not tracked) from all of the above.
- `repin.py`: applies a map of old to new commits after a rewrite of the history (see below).
- `chain.sh`, `check.R`, `validate.py`, `rsh-probe/`: the benchmark harness.

## Regenerate the report

```sh
python3 gen.py            # [--bench DIR] [--out FILE]
```

The report pins both ends of the commit chain (`ranges.tsv`), so later commits do not change it.
`gen.py` reads every diff from the commits of the chain; the diffs are stored nowhere else.

After a rebase, give `repin.py` a map of the old to the new commits: a TSV file with a header line,
then one line per commit (old sha, new sha, other columns are ignored). The map must name every
commit of the chain, and state `00-pre` (old base, new base). The script replaces the shas in all
files of this directory except `runs/` and `blockRoot`, then runs `skeleton.py`. It changes no
file if a sha of the files is not in the map. Then run `gen.py`, and correct what its content
check reports (new or removed files of a range) and the text of each changed optimization.

```sh
python3 repin.py MAP.tsv
```

The diff view loads highlight.js 11.9.0 from cdnjs for syntax highlighting. Without it (offline),
the code is plain text.

## Run the benchmarks again

```sh
./chain.sh [STATE...]     # default: all 29 states, about 7.5 minutes each
RUNS=DIR EXAMPLES="bench_ai_awf_towers bench_awf_bounce" ./chain.sh 00-pre 28-own-phi-web   # smoke test
```

`chain.sh` checks out each state in the worktree `.claude/worktrees/bench-chain` of the tree that
holds this directory, builds it, and times the examples with `OptimizationBenchmark`
(`BENCHMARK_OPTIMIZATIONS='$^'`). It needs the built vendored R of that tree (`R`, a build or a
directory of links to one); the worktree gets links to the same entries, and `check.R` runs in
that R. The timed modules are standalone, so the chain uses no installed `rsh`: it installs
`rsh-probe/` into the private library `rlib/`, and a state fails if anything loads `rsh`. It skips a state that
has a `DONE` file. To measure a state again, delete its `DONE` file; `chain.sh` then replaces the
directory of that state. The logs, the FIŘ, and the private R library that it writes are not
tracked (see `.gitignore`). The states of `runs/` have `DONE` files, so a new run of all
states needs a new directory in `RUNS`; it then replaces `runs/`.

## `notes.json`

A note maps an example to a string. The prefix sets how `gen.py` uses the cell:

- `value:` the benchmark call returned a wrong value. The cell is excluded from all statistics.
- `no time` the run produced no time.
- `rerun:` the time comes from a separate run of that example. Information only.

## Method of the table

- The bytecode time of an example is the median of its `bc.opt` time over all states.
- The load factor of a state is the geometric mean, over the examples and the three GNU-R rows
  (`ast`, `bc.default`, `bc.opt`), of the time in that state divided by the median over all states.
- A cell shows min(`<none>`, `<none> (rerun)`) divided by the load factor of its state, and the
  bytecode time divided by that time as a percent.
- The speedup of an optimization is the time in the previous state divided by the time in its
  state. The report shows its geometric mean, minimum, and maximum. A value within ±12 % is noise.
