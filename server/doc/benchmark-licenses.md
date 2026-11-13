# Licenses of the benchmark examples

The 134 `bench_<category>_<name>.R` examples in `server/src/test/resources/org/prlprg/examples/R/` are ports of programs from two upstream repositories.
Line 1 of each example (after its `#?` option lines) gives the URL of its upstream file, and line 2 gives its license.

**The license of these example files differs from the MIT license of this repository.**
The MIT license of this repository does not apply to them.
Each file keeps the license of its upstream file, as this document states.

The paths below are relative to the examples directory.

## rbenchmark/benchmarks (BSD-3-Clause)

- Repository: https://github.com/rbenchmark/benchmarks
- Commit: `9850828078e0858cb55146900afe63e550ed36db`
- License: BSD-3-Clause (the `LICENSE` file of the repository, quoted below)
- Files (69):
  - `bench_scalar_{crt,fib,fib_rec,for_loop_add,gcd,gcd_rec,prime}.R` (`scalar/`)
  - `bench_mathkernel_{double,double_na,int,int_na}_vec_add_t{1,2}.R`, `bench_mathkernel_mmm_t{1,2,3}.R` (`mathkernel/`)
  - `bench_misc_*.R` (26 files, `algorithm/` and `misc/2DRandomWalk/`)
  - `bench_riposte_*.R` (16 files, `riposte/`)
  - `bench_shootout_{fannkuch_redux,fasta_c,mandelbrot_orbit,nbody_orbit,nbody_vectorized,pidigits_orbit,revcomp,spectral_norm,spectral_norm_vectorized}.R` (`shootout/`)

Origins that the upstream files and documents state:

- The `shootout/` files credit "The Computer Language Benchmarks Game" or "The Computer Language Shootout" in their headers. `pidigits.R` also names its origin `https://github.com/allr/fastr/tree/master/test/r/shootout/pidigits`. `revcomp.R` has no header.
- `riposte/README.md` says: "Ported from https://github.com/jtalbot/riposte/tree/master/benchmarks/pact". The `riposte/` files have no license header.
- The `algorithm/`, `misc/`, `scalar/` and `mathkernel/` files have no license header.

The `LICENSE` file of the repository:

```
Copyright (c) 2013, rbenchmark
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice, this
  list of conditions and the following disclaimer in the documentation and/or
  other materials provided with the distribution.

* Neither the name of the {organization} nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
```

## R-benchmark-25, in rbenchmark/benchmarks (GPL-2+)

- Repository and commit: as in the previous section
- License: GPL version 2 or later, as the header of `R-benchmark-25/R-benchmark-25.R` states
- Files (15): `bench_ati_att{1,2,3}_{1,2,3,4,5}.R` (`R-benchmark-25/*/att*_*.R`)

The `att*_*.R` files have no header. They are parts of `R-benchmark-25.R`, so its license applies to them.
The header of `R-benchmark-25.R` says:

```
# R Benchmark 2.5 (06/2008) [Simon Urbanek]
...
# Author : Philippe Grosjean
# eMail  : phgrosjean@sciviews.org
# Web    : http://www.sciviews.org
# License: GPL 2 or above at your convenience (see: http://www.gnu.org)
#
# Several tests are adapted from the Splus Benchmark Test V. 2
# by Stephan Steinhaus (stst@informatik.uni-frankfurt.de)
```

## reactorlabs/RBenchmarking (no license stated)

- Repository: https://github.com/reactorlabs/RBenchmarking
- Commit: `a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89`
- License: none stated. The repository has no license file, and its files have no license header. Without a license, the default is "all rights reserved".
- Files (48):
  - `bench_awf_{bounce,bounce_nonames,bounce_nonames_simple,mandelbrot,storage}.R` (`Benchmarks/areWeFast/`)
  - `bench_real_{convolution,convolution_slow,convolution_v,volcano}.R` (`Benchmarks/RealThing/`)
  - `bench_shootout_*.R` except the 9 files of the rbenchmark section (39 files, `Benchmarks/shootout/`)
  - The 2 flexclust files of the next section

Origins that the upstream files and documents state:

- The `README.md` says that the harness complies with the format of the Are We Fast Yet suite (https://github.com/smarr/are-we-fast-yet).
- `areWeFast/bounce.r`, `bounce_nonames.r`, `bounce_nonames_simple.r` and `storage.r` have no header. Only the directory name names the origin (Are We Fast Yet).
- `areWeFast/mandelbrot.r` and each `shootout/` file except `pidigits.r` credit "The Computer Language Shootout" (http://shootout.alioth.debian.org/) and an author in their headers. `pidigits.r` has no header.
- `RealThing/convolution.r` says that `convolve` is "from the extending R manual". `convolution_slow.r`, `convolution_v.r` and `volcano.r` have no header.

## flexclust code, in reactorlabs/RBenchmarking (GPL-2)

- Repository and commit: as in the previous section
- Files (2): `bench_real_{flexclust,flexclust_no_s4}.R` (`Benchmarks/RealThing/flexclust*.r`)
- License: the code comes from the CRAN package flexclust, whose license is GPL-2 (https://cran.r-project.org/package=flexclust). Line 2 of these files says `GPL-2+`, but the package license is GPL-2 only.

The header of `flexclust_no_s4.r` says:

```
#  Original flexclust code is
#    Copyright (C) 2005-2009 Friedrich Leisch
#
#  and has been restructured and stripped off into this benchmark
```

`flexclust.r` has no header. It has the same flexclust code, with S4 classes.
