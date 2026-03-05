# Copy-and-Patch JIT Compiler for R

This repository implements a copy-and-patch JIT compiler for the R programming
language.

Copy-and-patch is a JIT compilation technique where machine-code _stencils_
(templates) are pre-compiled from C and the JIT compiler assembles native code
by copying these stencils and patching in runtime values such as addresses,
immediates, and control-flow targets. Because the heavy lifting is done
ahead-of-time by the C compiler, compilation at runtime is fast -- essentially
a sequence of `memcpy` + fixup operations.

The technique is described in Xu and Kjolstad,
[Copy-and-Patch Compilation](https://dl.acm.org/doi/10.1145/3485513), OOPSLA 2021.

The R implementation is described in Kocourek et al.,
[Copy-and-Patch Just-in-Time Compiler for R](https://dl.acm.org/doi/10.1145/3759548.3763370), VMIL 2025.

## Prerequisites

- Linux x86-64 (the stencils are platform-specific)
- GCC 14 (`gcc-14`, `g++-14`) -- the stencil compiler requires
  `no_callee_saved_registers` and C++20
- GNU Fortran (`gfortran`) -- needed to build R from source
- Standard R build dependencies (see `Dockerfile.rcp-base` for the full list)

## Building from source

Clone the repository with its submodules:

```sh
git clone --recurse-submodules https://github.com/PRL-PRG/rcp.git
cd rcp
```

Build R from source and install R package dependencies:

```sh
make setup
```

Build and test the compiler:

```sh
make test
```

This installs the `rcp` R package into the local R installation, then runs the
smoke tests, benchmark tests, and GDB debugging tests.

## Usage

Start R using the locally built version:

```sh
cd rcp
make run
```

Load the package:

```r
library(rcp)
```

### Compiling a single function

Use `rcp_cmpfun()` to compile a function to native code:

```r
fib <- function(n) if (n < 2) n else fib(n - 1) + fib(n - 2)
fib_jit <- rcp_cmpfun(fib, options = list(name = "fib", optimize = 3))
fib_jit(10)
```

Options:

- `name` -- a label for the compiled function (used in debugging and GDB JIT
  info)
- `optimize` -- optimization level passed to R's bytecode compiler

If the function cannot be bytecode-compiled, `rcp_cmpfun()` returns it
unchanged.

### Compiling an entire package

`rcp_cmppkg()` compiles every function in a loaded package namespace in-place:

```r
library(utils)
rcp_cmppkg("utils")
```

It returns a list with the number of `compiled` and `failed` functions.

### Other API functions

- `rcp_is_compiled(f)` -- check whether a function has been JIT-compiled
- `rcp_jit_enable()` / `rcp_jit_disable()` -- hook into R's compiler so that
  every function is JIT-compiled on first call

## Docker images

The project builds three layered images that mirror the three system
components and their change frequency.

| Image      | Description                                                                                                                                 |
| ---------- | ------------------------------------------------------------------------------------------------------------------------------------------- |
| `rcp-base` | Ubuntu 24.04, toolchain, vanilla R 4.3.2, `microbenchmark` for `/R-vanilla`                                                                 |
| `rcp-rsh`  | `rcp-base` + [r-compile-server](https://github.com/PRL-PRG/r-compile-server) at `RSH_COMMIT`, custom R build, `microbenchmark` for custom R |
| `rcp`      | `rcp-rsh` + `rcp` at `RCP_COMMIT`, built and installed                                                                                       |

This split keeps rebuilds short: frequent `rcp` edits only rebuild the top
image, while expensive R builds stay cached in lower layers.

### Building locally

```sh
make docker-rcp-base
make docker-rcp-rsh
make docker-rcp
```

Or build all three at once (each target depends on the previous):

```sh
make docker-rcp
```

### How the build works

1. `make docker-rcp-base` builds `ghcr.io/prl-prg/rcp-base:latest` from
   `Dockerfile.rcp-base`.
2. `make docker-rcp-rsh` builds `ghcr.io/prl-prg/rcp-rsh:$RSH_COMMIT` from
   `Dockerfile.rcp-rsh`.
3. `make docker-rcp` builds `ghcr.io/prl-prg/rcp:$RCP_COMMIT` from
   `Dockerfile.rcp`.

`Dockerfile.rcp` reuses `/rsh` from the parent `rcp-rsh` image and does not
clone the `external/rsh` submodule again.

### Reproducibility and cache behavior

- `RSH_COMMIT` defaults to the checked-out `external/rsh` submodule commit.
- `RCP_COMMIT` defaults to `git rev-parse HEAD` of this repository.
- Docker image source checkouts are pinned to those commit SHAs.
- Build context is intentionally minimal via `.dockerignore`; Dockerfiles clone
  exact commits instead of copying the local workspace.

You can override the defaults explicitly:

```sh
make docker-rcp \
  RSH_COMMIT=<rsh-commit-sha> \
  RCP_COMMIT=<rcp-commit-sha> \
  DOCKER_IMAGE_ORG=ghcr.io/prl-prg
```

### Running tests in Docker

```sh
docker run --rm ghcr.io/prl-prg/rcp:$(git rev-parse HEAD) \
  bash -c "make -C /rcp/rcp/tests test"
```

### Running benchmarks in Docker

```sh
docker run --rm ghcr.io/prl-prg/rcp:$(git rev-parse HEAD) \
  make -C /rcp/rcp benchmark BENCH_ITER=15 BENCH_OPTS=--rcp
```

## Benchmarks

The benchmark suite lives in the `rsh` submodule and is driven by
`rcp/inst/benchmarks/run-benchmarks.sh`.

### Running benchmarks locally

From the `rcp/` directory:

```sh
make benchmark                  # 15 iterations, sequential
make benchmark BENCH_ITER=5     # fewer iterations
```

The underlying script supports additional options:

```sh
./inst/benchmarks/run-benchmarks.sh --runs 10 --parallel 4 --output results/
```

- `--runs N` -- number of repetitions per benchmark (default: 1 in the script,
  overridden to 15 by the Makefile)
- `--parallel N` -- number of benchmarks to run concurrently (default: `nproc`)
- `--output DIR` -- directory for result CSVs and logs

Environment variables `FILTER` and `BENCH_OPTS` can further narrow the set of
benchmarks and select the compilation mode (`--rcp` or `--bc`).

## Architecture

```
Build time                          Runtime
──────────                          ───────
stencils.c ──[clang]──> stencils.o  R bytecode
                │                      │
     extract_stencils                  │
       │          │                    ▼
  stencils.h  stencils_data.c ───> compile.c
  (metadata)  (code + FDEs)        (copy & patch)
                                       │
                              ┌────────┼────────┐
                              ▼        ▼        ▼
                          JIT code  gdb_jit.c  perf_jit.c
                                   (ELF+DWARF) (jitdump)
```

1. **Build time**: `extract_stencils` compiles stencil source into an object
   file, extracts machine code and `.eh_frame` FDE bytes for each stencil,
   and generates `stencils.h` / `stencils_data.c`.

2. **Runtime**: `compile.c` concatenates stencil bodies into executable
   memory, patching relocations. If debug/profiling is enabled (via env vars),
   it calls `gdb_jit_register()` and/or `perf_jit_*()` to register the
   compiled code.

## Debugging and profiling JIT-compiled code

Two optional features provide observability into JIT-compiled code, selected
at runtime via environment variables:

- **GDB JIT Interface** (`RCP_GDB_JIT=1`): Registers in-memory ELF objects
  with GDB, enabling backtraces, stepping, breakpoints, and variable
  inspection in JIT code.

- **Perf/Samply Profiling** (`RCP_PERF_JIT=1`): Writes a jitdump file that
  `perf inject` or `samply` can read to resolve JIT code addresses into
  function names with correct stack unwinding.

DWARF `.eh_frame` data is always compiled in (needed for C++ exception
unwinding through JIT frames). When no env var is set, the only overhead is the
CFI data arrays in the binary. No runtime cost (no ELF building, no jitdump
I/O) unless explicitly enabled:

```sh
RCP_GDB_JIT=1 R -e 'library(rcp); ...'     # GDB JIT debugging
RCP_PERF_JIT=1 R -e 'library(rcp); ...'    # perf jitdump profiling
RCP_GDB_JIT=1 RCP_PERF_JIT=1 R -e '...'   # both
```

### GDB JIT debugging

When `RCP_GDB_JIT=1`, the compiler registers
JIT-compiled functions with GDB so that you can set breakpoints, step through
bytecode instructions, and inspect the stack -- just as you would with native
code.

For each compiled function, the compiler:

1. Constructs an in-memory ELF object containing DWARF debug sections
   (`.debug_info`, `.debug_line`, `.debug_frame`).
2. Generates a pseudo-source file (`/tmp/rcp_jit_XXXXXX/<name>.S`) where each
   line corresponds to a bytecode instruction (e.g., `GETVAR_OP_`,
   `ADD_OP_`, `RETURN_OP_`).
3. Registers the ELF with GDB via the standard
   [GDB JIT Interface](https://sourceware.org/gdb/current/onlinedocs/gdb.html/JIT-Interface.html).

This enables GDB to map addresses in JIT code back to bytecode instructions,
show meaningful backtraces, and allow single-stepping through compiled R
functions.

#### Debugging session example

```sh
cd rcp
make install
RCP_GDB_JIT=1 make debug
```

Inside GDB:

```gdb
(gdb) break __jit_debug_register_code
(gdb) run
```

Then in R:

```r
library(rcp)
f <- function(x) x + 1
f_jit <- rcp_cmpfun(f, options = list(name = "f_jit"))
f_jit(41)
```

GDB will break when the function is registered. You can then set breakpoints
on individual bytecode instructions and step through the compiled code.

The helper function `rcp_print_stack_val` can be called from GDB to inspect
R values on the stack:

```gdb
(gdb) call rcp_print_stack_val((void*)addr)
```

### Perf/Samply profiling

When `RCP_PERF_JIT=1`, the compiler writes a jitdump
file (`/tmp/jit-<pid>.dump`) containing:

- `JIT_CODE_LOAD` records mapping address ranges to function names
- `JIT_CODE_UNWINDING_INFO` records with `.eh_frame` data for stack unwinding

Tools like `perf inject --jit` or `samply` read the jitdump to resolve JIT
addresses into symbols and produce correct stack traces.

#### Profiling example

```sh
cd rcp
make install
RCP_PERF_JIT=1 perf record -g -k1 R -e 'library(rcp); ...'
perf inject --jit -i perf.data -o perf.jit.data
perf report -i perf.jit.data
```

### Running the debugging and profiling tests

```sh
cd rcp
make test
```

To update the expected GDB test outputs after intentional changes:

```sh
make -C tests/gdb-jit re-record
```

## Project layout

```
rcp/                  Root
 Dockerfile.rcp-base  Base image (Ubuntu + deps + vanilla R)
 Dockerfile.rcp-rsh   R compile server image
 Dockerfile.rcp       Full image (rcp built and installed)
 Makefile             Top-level targets: setup, test, docker-*
 external/rsh/        Git submodule: R compile server
 rcp/                 The R package
   src/               C/C++ source
     compile.c        JIT compiler -- calls debug/profiling hooks
     gdb_jit.c        ELF construction, build_eh_frame(), GDB registration
     perf_jit.c       Jitdump file writing
     shared/dwarf.c   DWARF constants and CFI decoder
     stencils/        Stencil definitions compiled to .o
     extractor/       Tool that extracts stencils from object files
   R/                 R source
   inst/benchmarks/   Benchmark harness and runner script
   tests/             Test suites (smoketest, benchmarks, gdb-jit, perf, stencils)
   Makefile           Package-level targets: install, test, benchmark, setup
```
