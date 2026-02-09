# Copy-and-Patch JIT Compiler for R

This repository implements a copy-and-patch JIT compiler for the R programming
language.

Copy-and-patch is a JIT compilation technique where machine-code *stencils*
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

- `is_compiled(f)` -- check whether a function has been JIT-compiled
- `rcp_jit_enable()` / `rcp_jit_disable()` -- hook into R's compiler so that
  every function is JIT-compiled on first call

## Docker images

The project provides three layered Docker images. Each layer adds one component
so that rebuilds only redo what changed.

| Image | Contents |
|---|---|
| `rcp-base` | Ubuntu 24.04, system dependencies, vanilla R 4.3.2 |
| `rcp-rsh` | + [R compile server](https://github.com/PRL-PRG/r-compile-server) and its custom R build |
| `rcp` | + this repository, compiled and ready to use |

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

### Running tests in Docker

```sh
docker run --rm prl-prg/rcp:$(git rev-parse HEAD) \
  bash -c "make -C /rcp/rcp clean test"
```

### Running benchmarks in Docker

```sh
docker run --rm prl-prg/rcp:$(git rev-parse HEAD) \
  make -C /rcp/rcp benchmark BENCH_ITER=15
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

## Debugging JIT-compiled code with GDB

The compiler can register JIT-compiled functions with GDB so that you can set
breakpoints, step through bytecode instructions, and inspect the stack -- just
as you would with native code.

### Enabling GDB JIT support

GDB support is off by default because it adds overhead. Enable it at build
time:

```sh
cd rcp
make clean install GDB_JIT_SUPPORT=1
```

You can verify it is active from R:

```r
library(rcp)
.Call("C_rcp_gdb_jit_support")
#> [1] TRUE
```

### How it works

When `GDB_JIT_SUPPORT` is enabled and a function is compiled with a `name`,
the compiler:

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

### Debugging session example

```sh
cd rcp
make debug GDB_JIT_SUPPORT=1
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

### Running the debugging tests

The debugging test suite verifies that GDB can step through JIT-compiled
functions and produce correct backtraces:

```sh
cd rcp
make clean test GDB_JIT_SUPPORT=1
```

To update the expected outputs after intentional changes:

```sh
make -C tests/debugging GDB_JIT_SUPPORT=1 re-record
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
     stencils/        Stencil definitions compiled to .o
     extractor/       Tool that extracts stencils from object files
   R/                 R source
   inst/benchmarks/   Benchmark harness and runner script
   tests/             Test suites (smoketest, benchmarks, debugging)
   Makefile           Package-level targets: install, test, benchmark, setup
```
