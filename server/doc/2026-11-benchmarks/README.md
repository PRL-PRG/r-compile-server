# `fir2c.opt` optimization log, 2026-11-09 to 2026-11-11

The sources of the report <https://claude.ai/artifact/KwRoURiYMgSD9oojwndCjV>. The report lists
the 28 optimizations of the commits `3042a7d73..b9f8ca942` (branch `lazy-closure-versions`). For
each optimization it gives the cause of the slowness, the solution, the code changes, and the
speedup of the 25 `bench_*` examples.

## Files

- `ranges.tsv`: one line per optimization: number, key, first commit, last commit, campaign label,
  and the earlier report that describes it (those reports are not kept). The ranges are contiguous
  and cover the chain.
- `skeleton.py`: reads `ranges.tsv` and the history, and writes `skeleton.json` (commits and
  changed files of each range). It also writes an empty `content/<id>.json` for a new range.
- `content/<id>.json`: the text of one optimization: title, motivation, solution, the kind of each
  commit, and one sentence per changed file.
- `runs/<state>/`: one benchmark run per state (`00-pre`, then the state after each optimization):
  `commit`, `csv/bench_*.csv` (the output of `OptimizationBenchmark`), `sizes.tsv` (size and hash
  of the generated code, and the result of the value check), and `notes.json`.
- `gen.py`: writes `report.html` (not tracked) from all of the above.
- `chain.sh`, `check.R`, `validate.py`, `rsh-probe/`: the benchmark harness.

## Regenerate the report

```sh
python3 gen.py            # [--bench DIR] [--out FILE]
```

The report pins both ends of the commit chain, so later commits do not change it.

## Run the benchmarks again

```sh
./chain.sh [STATE...]     # default: all 29 states, about 7.5 minutes each
```

`chain.sh` checks out each state in the worktree `.claude/worktrees/bench-chain`, builds it, and
times the examples with `OptimizationBenchmark` (`BENCHMARK_OPTIMIZATIONS='$^'`). It needs the
built vendored R of the main tree, and it does not use an installed `rsh`. It skips a state that
has a `DONE` file. To measure a state again, delete its `DONE` file; `chain.sh` then replaces the
directory of that state. The logs, the FIŘ, and the private R library that it writes are not
tracked (see `.gitignore`).

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
