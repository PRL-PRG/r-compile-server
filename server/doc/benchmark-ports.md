# Benchmark ports

The `bench_<category>_<name>.R` examples are ports of the programs of rbenchmark (https://github.com/rbenchmark/benchmarks) and RBenchmarking (https://github.com/reactorlabs/RBenchmarking).
`benchmark-licenses.md` gives the upstream commits and licenses.

## Port rules

1. Put the option lines (`#? ...`) first, then the URL line of the upstream file, then the license line. An option line after a different line has no effect.
2. Keep the upstream functions and their constants. Delete `setup()`, the driver, `source`, `commandArgs` and the timing calls.
3. Make the data of `setup()` at top level, one time, after `set.seed(42)`. Inline each helper file. Generate the data where upstream reads a file.
4. Then write `#? benchmark: <call>`. The call returns a value, and each repeat of the call returns the same value.
5. If no argument controls the size of the work, call the entry function from `bench_reps(<reps>, ...)`.
6. Size the call to 20 to 50 ms in GNU-R.
7. After the benchmark line, write a warmup of exactly 12 calls of the same function, with arguments of the same types.
8. Make the warmup take each branch of the benchmark call, and iterate each loop at least twice. Use the smallest arguments that do this.
9. If the program prints more than 20 lines, call it in `capture.output(...)`. For binary output, write to a `rawConnection`.
10. Do not set a global option at top level. Set it in the entry function, and restore it with `on.exit`.

## Upstream programs that are not ported

|                   Upstream program                    |                                                                                                                                 Reason                                                                                                                                 |
|-------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 52 files that duplicate a ported program              | Copies or near-copies of a ported program (mostly the rbenchmark copies of RBenchmarking programs), the 8 `*_strict.r` variants (they add RIR-only calls), and `att1.R`, `att2.R`, `att3.R` and `R-benchmark-25.R`, which hold the same tests as the `att*_*.R` files. |
| `rbenchmark:riposte/qr.R`                             | Broken upstream: it calls the undefined `strip()` and returns the undefined `q`.                                                                                                                                                                                       |
| `rbenchmark:riposte/tpc.R`                            | Broken upstream: its header says "missing code so far", its data file is not in the repository, and its `read.table` call is not valid.                                                                                                                                |
| `rbenchmark:algorithm/ICA/ica.R`                      | It needs the package `fastICA`, which the vendored R does not have. `bench_misc_ica_lapply` is the same algorithm in base R.                                                                                                                                           |
| `rbenchmark:shootout/meteor-contest/meteor-contest.R` | Each call has a fixed cost of about 1.5 s or more (`run(100L)` takes 2.1 s in GNU-R), so a call cannot obey the size rule.                                                                                                                                             |

## Known failures

An option on the first lines of the example marks each failure. Remove the mark when its condition is true.

- `bench_shootout_pidigits` has `#? [opt.fir2c.opt.eval]noEval`.
  - Cause: the optimized C evaluation stops at the R timeout of 120 s. The compiled code is not slow. The run requests 88 lazy versions, and each request optimizes the whole module again (about 1.65 s each).
  - Remove the mark when a version request optimizes only what the new version affects. The mark skips the test, so it does not show the fix: remove the mark and run `FirAfterOpt2CTest#testEval` to check.
- `bench_shootout_pidigits_orbit` has `#? [opt.fir2c.opt.eval]crashes("deoptimization triggered")`.
  - Cause: the test interpreter stops at its cost budget in the first warmup call, so the feedback is partial. In the warmup, `x_len - y_len` is at most 1. `sub_mag` speculates on the result of `(y_len+1):x_len`. The benchmark call reaches 51, and the speculation deopts. A larger warmup does not help.
  - Remove the mark when the speculation does not fail, or when compiled C can deoptimize at that point. The test then fails with "Expected crash, got success".
