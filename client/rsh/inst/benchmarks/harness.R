library(rsh)

RBC_OPTS <- list(optimize = 3L)
RSH_OPTS <- list(optimize = 3L)
DEFAULT_NUM_ITER <- 15L

wrap_with_verify <- function(f, expected) {
  f <- force(f)
  function(x) {
    actual <- f(x)
    if (!identical(actual, expected)) {
      stop("Benchmark failed with incorrect result, expected: ", expected, ", actual: ", actual)
    }
  }
}

benchmark <- function(num_iter, bench_param) {
  result <- execute(bench_param)

  rbc <- compiler::cmpfun(execute, options=RBC_OPTS)
  rbc <- wrap_with_verify(rbc, result)
  rsh <- rsh:::rsh_cmpfun(execute, options=RSH_OPTS)
  rsh <- wrap_with_verify(rsh, result)

  microbenchmark::microbenchmark(
    rbc(bench_param),
    rsh(bench_param),
    times = num_iter
  )
}

run <- function(args) {
    if (length(args) < 1 || length(args) > 3) {
        stop(printUsage())
    }

    name <- args[[1]]

    source(paste0(name, ".R"))

    num_iter <- DEFAULT_NUM_ITER
    bench_param <- formals(execute)[[1]]

    if (length(args) >= 2) {
        num_iter <- strtoi(args[[2]])
    }

    if (length(args) == 3) {
        bench_param <- strtoi(args[[3]])
    }

    benchmark(num_iter, bench_param);
}

printUsage <- function() {
    cat("harness.r benchmark [num-iterations] [benchmark-parameter]\n")
    cat("\n")
    cat("  benchmark           - benchmark class name\n")
    cat("  num-iterations      - number of times to execute benchmark (default: ", DEFAULT_NUM_ITER, ")\n")
    cat("  benchmark-parameter - size of the benchmark problem (default defined in benchmark)\n")
}

args <- commandArgs(trailingOnly=FALSE)
arg_f_idx <- which(args == "--file" | args == "-f")
arg_file <- args[arg_f_idx + 1]
setwd(dirname(arg_file))

run(commandArgs(trailingOnly=TRUE))
