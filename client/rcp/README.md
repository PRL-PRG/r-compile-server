# Copy and Patch JIT compilation for R - code

This repository contains the code neccessary to run Copy and Patch JIT for R.

## Installation

1. Clone with `git clone --recurse-submodules`
2. Navigate to `/external/R/` and run `../r-compile-server/tools/build-gnur.sh .` to install custom R environment
3. Navigate to `/rcp/` and run `make` to install the project
4. Test it by running `/external/R/bin/R`
5. Load the package with `library(rcp)`
6. Compile any function with `copy_patched_result = rcp_cmpfun(function_to_compile, options = list(optimize = 3))`
7. Run the result as a function itself (for example `copy_patched_result()`)
