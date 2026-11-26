# FIŘ JIT benchmarks

Use an x86-64 Linux machine with the [build dependencies](#build-dependencies-on-ubuntu).

## 1. Clone the compiler with its submodules

```sh
git clone --recurse-submodules --branch r-benchmarking https://github.com/PRL-PRG/r-compile-server.git rcs
cd rcs
```

If the branch is local, use the [Git bundle instructions](#clone-a-local-branch).

## 2. Build

```sh
make -C client/rcp setup CC=gcc-14 CXX=g++-14
make -C proto
make -C client/rsh install
make -C server rbench-build
```

## 3. Clone r-benchmarks

```sh
git clone https://github.com/PRL-PRG/r-benchmarks.git ../r-benchmarks
```

## 4. Install uv

```sh
curl -LsSf https://astral.sh/uv/install.sh | sh
export PATH="$HOME/.local/bin:$PATH"
```

## 5. Run

Run these commands from the compiler repository root.

```sh
mkdir -p out
./benchmarks/rbench-fir.py --rbench-root ../r-benchmarks \
  --include '^shootout/fasta/fasta/' \
  --cc gcc-14 --runs 1 --warmups 50 --iterations 5 \
  --json out/fasta.json
```

Add `--dry` to check the selection.
Use `--rbench-root` to select the r-benchmarks checkout.

## Replicates

Each rbench benchmark defines one workload and its input size.
Use `--runs` to set the number of replicates per benchmark.
The default is five replicates.
The driver gives each replicate a `runN` label.
Bench runs each label once.

For each replicate, Bench starts the driver with the internal `--worker` argument.
The worker copies the corpus into a temporary directory.
The worker starts one compile server on a free loopback port and one R process.
It stops the server at the end of the replicate.

Multiple replicates show how the runtime varies between processes.
Each replicate uses its own compiler state.
Use `--runs 1` to get one replicate per selected benchmark.

## Warmup and samples

By default, each replicate runs 50 warmup calls and collects 10 measured calls.
The default JIT threshold is 10 calls per tier.
Use `--runs`, `--warmups`, `--iterations`, and `--jit-threshold` to change these values.
The `--timeout` limit covers the full process in seconds.

The FIŘ profile connects to the compile server and enables JIT tiering in `rbench_prepare()` after setup.
The rbench harness then runs `execute(size)` for the sum of the warmup and measured calls.
The rbench controller marks the first `--warmups` samples as warmup in the report.
The RCP baseline collects feedback for the compile server.
During warmup, R requests and loads lazy versions of the optimized code.

The harness runs a forced GC before each call.
At the harness flush after GC, the profile waits for pending replies and checks the counters during warmup.
A quiet call starts and ends in the optimized tier.
Its counters stay the same and there are no pending requests.
With the default threshold, the profile requires 11 consecutive quiet calls at the end of warmup.

The profile disables the GNU R JIT before the timed calls.
If compilation fails or resumes during measurement, the replicate fails.
If compilation continues at the end of warmup, the replicate fails.
The driver checks the FIŘ status again after the harness returns.
It publishes the timing samples only if the full replicate passes these checks.

The runtime metric covers each call to `execute(size)`, with any GC that occurs during that call.
The harness runs forced GC before it starts the timer.
The final summary gives the median of the process medians and the range of those medians.
The `elapsed` metric covers the full replicate, which includes setup and warmup.
The `fir_compile_ms` metric gives the total wall time of completed compile requests at the server.
The JSON sample also gives the time and kind of each request.
This metric covers FIŘ and C compilation, and the preparation of their results on the server.
It excludes network time, client compilation, and the time to load code in R.

Repeat the pilot with `--warmups 80`.
Compare the process medians before you measure the full suite.
Use the server log to verify that the server received the `execute` request with an RCP recording.
The `SpeedTest/prg/data` benchmark generates data and reads and writes a file inside `execute`.
Its timing includes those operations.

## Compare with GNU R

Build stock GNU R in a separate directory.
Use the release in `R/VERSION`.
Use the same C compiler and the default reference BLAS for both builds.
Run these commands from the compiler repository root.

```sh
r_version=$(awk 'NR == 1 {print $1}' R/VERSION)
mkdir -p out/gnu-r
r_archive="out/R-$r_version.tar.gz"
if [ ! -f "$r_archive" ]; then
  curl -fsSL "https://cloud.r-project.org/src/base/R-${r_version%%.*}/R-$r_version.tar.gz" \
    -o "$r_archive"
fi
tar -xzf "$r_archive" -C out/gnu-r --strip-components=1
(
  cd out/gnu-r
  CC=gcc-14 CXX=g++-14 CFLAGS='-g -O2' CXXFLAGS='-g -O2' CPPFLAGS='-g -O2' ./configure
  make -j8
)

R/bin/Rscript --vanilla -e 'print(getRversion())'
out/gnu-r/bin/Rscript --vanilla -e 'print(getRversion())'
```

Make sure the two commands print the same R version.
Pass the stock binary to rbench with `--R`.
Use the same workload sizes, warmup count, replicate count, and sample count for both runs.
The stock runner includes the warmup calls in `--iterations`.
It marks the first `--warmups` calls as warmup in the JSON report.
Use only calls with `warmup: false` for the comparison.
GNU R keeps its standard JIT enabled for the full run.

```sh
rbench_dir="$PWD/../r-benchmarks"

./benchmarks/rbench-fir.py --rbench-root "$rbench_dir" --include '^shootout/' \
  --cc gcc-14 --runs 3 --warmups 50 --iterations 5 \
  --json out/fir.json --dir out/fir-runs
uv run --project "$rbench_dir" --locked "$rbench_dir/rbench.py" \
  --R "$PWD/out/gnu-r/bin/R" --include '^shootout/' \
  --runs 3 --warmups 50 --iterations 55 \
  --json out/gnu-r.json --dir out/gnu-r-runs
```

For only `fasta`, use `'^shootout/fasta/fasta/'` in the FIŘ command.
Use `'^shootout/fasta/fasta$'` in the stock command.
The FIŘ filter includes a slash for the `runN` label.

For each implementation, calculate the median of the measured calls in each process.
Use the median of those process medians for the workload comparison.
Compare workloads with successful replicates and matching results.

## Shootout results

This run compared FIŘ with stock GNU R 4.5.2 on the same Linux x86-64 host.
Each of the 37 workloads had three replicates per implementation.
Each valid replicate supplied five measured calls.
GNU R completed all 37 workloads.
FIŘ and GNU R had identical printed output for all 24 comparable workloads.

The archived FIŘ run used an adaptive warmup of 40 to 42 calls in the valid replicates.
The current driver uses a fixed number of warmup calls.

FIŘ took more time on all 24 pairs.
The geometric mean of the FIŘ-to-GNU R runtime ratios was 1.32.
The 13 FIŘ failures include 12 bytecode stack mismatches and one unsupported deoptimization.

- The paired results show the median runtime and the compilation time for each workload. [comparison.json](comparison.json)
- The FIŘ report gives the individual samples, the compile request times, and the failures. [fir.json](fir.json)
- The GNU R report gives the individual samples and their warmup flags. [gnu-r.json](gnu-r.json)
- The manifest gives the revisions, the build details, the workload sizes, and the run settings. [manifest.json](manifest.json)

## Additional setup

### Select workloads and save reports

Use `--list` to see the workload names.
Use `--include '^shootout/'` to select the full suite.
Use `--exclude` to remove workloads from the selection.
Use `--csv` for a CSV report.
Use `--dir` to save the output from each process.
Use `./benchmarks/rbench-fir.py --help` for the full list of options.

### Build dependencies on Ubuntu

On Ubuntu 26.04, install the build tools before you clone the repositories.

```sh
sudo apt-get update
sudo apt-get install -y --no-install-recommends \
  ca-certificates curl git rsync make gcc-14 g++-14 gfortran binutils-dev \
  libbz2-dev libcairo2-dev libcurl4-openssl-dev libicu-dev libjpeg-dev \
  liblzma-dev libpango1.0-dev libpcre2-dev libpng-dev libreadline-dev \
  libssl-dev libtiff5-dev libx11-dev libxt-dev zlib1g-dev \
  patch texinfo pkg-config xz-utils locales python3 python3-venv \
  llvm-17 llvm-17-dev clang-17 libgrpc++-dev protobuf-compiler \
  protobuf-compiler-grpc libprotobuf-dev libabsl-dev libxxhash-dev \
  openjdk-26-jdk-headless
sudo locale-gen en_US.UTF-8
export LANG=en_US.UTF-8
export JAVA_HOME=/usr/lib/jvm/java-26-openjdk-amd64
export PATH="$JAVA_HOME/bin:$PATH"
java -version
```

### CRAN rsync fallback

If the vendored R build cannot get the recommended packages through `rsync`, use the CRAN release archive.
Run these commands from the compiler repository root.

```sh
mkdir -p out
output_dir="$PWD/out"
r_version=$(awk 'NR == 1 {print $1}' R/VERSION)
recommended="$output_dir/cran/src/contrib/$r_version/Recommended"
mkdir -p "$recommended"
curl -fsSL "https://cloud.r-project.org/src/base/R-${r_version%%.*}/R-$r_version.tar.gz" \
  -o "$output_dir/R-$r_version.tar.gz"
tar -xzf "$output_dir/R-$r_version.tar.gz" -C "$recommended" \
  --strip-components=4 --wildcards "R-$r_version/src/library/Recommended/*.tar.gz"
CRAN_RSYNC="$output_dir/cran" make -C client/rcp setup CC=gcc-14 CXX=g++-14
```

Then continue with `make -C proto` in the [build step](#2-build).

### Clone a local branch

If the `r-benchmarking` branch is local, create a Git bundle from the checkout that has the branch.
Copy the bundle to the new machine.
Replace `user@new-host` with the SSH destination.

```sh
git bundle create /tmp/rcs-r-benchmarking.bundle r-benchmarking
scp /tmp/rcs-r-benchmarking.bundle user@new-host:
```

On the new machine, replace step 1 with these commands.

```sh
git clone --recurse-submodules --branch r-benchmarking "$HOME/rcs-r-benchmarking.bundle" rcs
cd rcs
```

### Benchmark revision and R packages

For the same workloads and sizes as the archived shootout run, use this revision.

```sh
git -C ../r-benchmarks checkout --detach 86c5182ce98e9380734d4557283c73e1984e061e
```

If a workload needs more R packages, install them in the vendored R library.

```sh
R/bin/Rscript --vanilla -e '
  packages <- c("Matrix", "MASS", "clusterGeneration")
  missing <- setdiff(packages, rownames(installed.packages(lib.loc = .Library)))
  if (length(missing)) install.packages(missing, lib = .Library, repos = "https://cloud.r-project.org")
  stopifnot(all(packages %in% rownames(installed.packages(lib.loc = .Library))))
'
```

### Rebuild after a change

Use `make -C client/rsh install` again after a change to the client.
Use `make -C server rbench-build` again after a change to the server.
