# CRAN-example benchmark harvester

Generates benchmarks from the code that *regular R users actually run* — the
`\examples{}` sections of the most-downloaded CRAN packages — as one more
benchmark group (`../cran/`) alongside the synthetic suites, run by the same
unified harness as everything else.

This is the realistic-workload counterpart to the synthetic suites
(`areWeFast`, `shootout`) and is discovered automatically by `make benchmark`.

## Files

| File           | Purpose                                                             |
|----------------|---------------------------------------------------------------------|
| `packages.csv` | The pinned package set: top-20 by downloads + exact versions + snapshot date. **This is the determinism anchor.** |
| `harvest.R`    | Installs the pinned packages, extracts + validates examples, emits benchmarks. |
| `lib/<R-ver>/` | (generated) per-R-version library the pinned packages install into. |

Generated benchmarks land in `../cran/<package>/<topic>.R` and a
`../cran/harvest-report.csv` records every kept/dropped candidate with
reasons. They carry no absolute paths — `run-benchmarks.sh` puts the matching
`lib/<R-ver>/` on `R_LIBS` at run time.

## What gets collected

Only user-facing example code: each help page's `\examples{}` block.
`\dontrun{}` (needs network/credentials/interactivity) is excluded;
`\donttest{}` is kept (users run it). `tests/`, vignettes, and internals are
ignored.

Every candidate is executed twice under `set.seed(1)` in a throwaway subprocess
with graphics sent to a null device, and is emitted **only if** it runs without
error and produces byte-identical output both times. This guarantees a
reproducible suite that won't trip the harness's compiled-vs-interpreted
verification. Examples are *not* dropped for being slow; the only time bound is
`--timeout` (default 600s), a hang-guard that kills an example deadlocked on
e.g. input.

Each generated `execute(num_iter = 1L)` runs the example `num_iter` times per
call — the same parameterized-workload shape as the other benchmarks (pass a
benchmark-parameter to scale it; the harness repeats the whole thing `--runs`
times).

## Reproducibility

Packages install from the dated Posit Public Package Manager snapshot named in
`packages.csv` (`snapshot_date`), which pins exact versions for the listed
packages *and* all transitive dependencies. The `version` column is
informational. To re-pin, bump `snapshot_date` (and optionally the versions/
ranking) and re-run.

## Package-level JIT

By default `rcp` compiles only the top-level `execute` function, leaving calls
into the package (e.g. dplyr's verbs) interpreted — so you'd miss most of the
JIT's effect. Each generated file therefore declares `BENCH_PACKAGES` (the
loaded package + its installed `Depends`/`Imports` closure, base packages
excluded), and the unified harness runs `rcp:::rcp_cmppkg()` over that list
**before** timing starts, for the `--rcp` backend only. The `--bc` baseline
already has byte-compiled package code from install time, so the comparison
stays fair.

Use `--no-compile-deps` to compile only the loaded package, not its closure.

## Usage

Provision once via make (installs into `lib/<R-ver>/`, generates `../cran`):

```sh
make cran-harvest                                   # for the default RCP R
make cran-harvest R_HOME=/R-vanilla HARVEST_OPTS=--install-only   # for the bc R
```

**Run it with the R you benchmark with.** The library is keyed `lib/<R-version>`
by the version of the R that *runs the harvester*, and the runner later looks up
the lib matching the R it launches — they must be the same R. The launched
`Rscript` binary decides this; the `R_HOME` env var does **not** (a mismatch
prints `ignoring environment value of R_HOME` and uses the binary's own R). If
you have `R_HOME` exported (e.g. to a system R), pass `R_HOME=...` on the make
command line — it overrides the env — or call your R's `Rscript` by full path.
The harvester prints the R it's using (`R : <home> (<version>)`) at startup.

On a supported Linux (the CI image is Ubuntu 24.04), add `HARVEST_OPTS=--binary`
to install Posit's prebuilt binaries instead of compiling from source — much
faster, with automatic fallback to source when a binary isn't available. The
distro codename is auto-detected from `/etc/os-release` (override with
`--codename`).

After that, `make benchmark` runs the CRAN group alongside the synthetic suites
automatically (and CI does the same — the harvest is baked into the rcp image).

Re-run `make cran-harvest HARVEST_OPTS=--no-install` to regenerate the files when
packages are already installed. Useful flags: `--max-per-pkg N` (default 0 =
keep all; >0 keeps the N longest-running), `--timeout S` (default 600, deadlock
guard only), `--deps` (also install Suggests), `--snapshot URL`, `--lib DIR`,
`--out DIR`.

The library `lib/<R-ver>/` is keyed by R's **major.minor** (e.g. `4.3`), the
package-ABI boundary, so it is shared across patch releases. If `make benchmark`
runs under an R for which no library exists yet, `run-benchmarks.sh` installs
the packages for that R automatically (one-time) before running — so the
benchmarks always use packages built for the R that runs them.

To compare bc vs rcp (two processes, so package-level rcp compilation can't
contaminate the bc baseline):

```sh
make benchmark BENCH_OPTS=--bc  BENCH_OUT_DIR=$PWD/out-bc  R_HOME=/R-vanilla
make benchmark BENCH_OPTS=--rcp BENCH_OUT_DIR=$PWD/out-rcp
"$R_HOME/bin/Rscript" \
  ../../../external/rsh/client/rsh/inst/benchmarks/benchmark.R \
  compare out-bc/*.csv out-rcp/*.csv
```

## Caveat worth keeping in mind

Download rank ≠ what users type: many top-20 packages are infrastructure
(`rlang`, `vctrs`, `cli`, `glue`, `R6`, `cpp11`, `fs`, `withr`) or C++ glue
(`Rcpp`, `RcppEigen`, `cpp11`) pulled in transitively, and much realistic R
spends its time in compiled C/BLAS where a bytecode/native JIT can't help. The
`harvest-report.csv` elapsed times are a quick proxy for which benchmarks have
enough interpreted work to show a JIT effect; expect many near-zero speedups,
and report the distribution honestly.
