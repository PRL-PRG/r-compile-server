# Copy and Patch JIT compiler for R

This repository implements a copy-and-patch JIT compiler for R.

Copy-and-patch JIT is a compilation technique where machine-code templates are
pre-generated (or produced from a compact representation) and JIT compilation
specializes code by copying these templates and patching in runtime constants
(e.g., addresses, immediates, and control-flow targets). This approach is
described in the original OOPSLA paper by Xu et Kjolstad [Copy-and-patch
compilation: a fast compilation algorithm for high-level languages and
bytecode](https://dl.acm.org/doi/10.1145/3485513), OOPSLA 2021.

The implementation here targets the R programming language. It has been
described in Kocourek at al. [Copy-and-Patch Just-in-Time Compiler for
R](https://dl.acm.org/doi/10.1145/3759548.3763370), VMIL 2025.

## Install

To install it, you need to fetch all the dependencies:

```sh
git clone --recurse-submodules ...
make setup
```

Once that is done you can build and test the compiler:

```sh
make test
```

## Usage

In R, load the package:

```r
library(rcp)
```

As an example, define a function (e.g., Fibonacci):

```r
fib <- function(n) if (n < 2) n else fib(n - 1) + fib(n - 2)
```

Compile it with `rcp_cmpfun()`:

```r
fib_jit <- rcp_cmpfun(fib, options = list(optimize = 3))
```

Call the compiled function like a normal R function:

```r
fib_jit(10)
```
