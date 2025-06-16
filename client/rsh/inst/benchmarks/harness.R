library(rsh)

RBC_OPTS <- list(optimize = 3L)
RSH_OPTS <- list(optimize = 3L, cc_opt = 2)
RUNS <- as.integer(Sys.getenv("RUNS", 15))

wrap_with_verify <- function(f, expected, expected_output) {
  f <- force(f)
  function(x) {
    output <- capture.output(actual <- f(x))
    if (!identical(actual, expected)) {
      stop("Benchmark failed with incorrect result, expected: ", expected, ", actual: ", actual)
    }
    if (!identical(output, expected_output)) {
      stop("Benchmark failed with incorrect output, expected: ", expected_output, ", actual: ", output)
    }
  }
}

benchmark <- function(bench_param) {
  output <- capture.output(result <- execute(bench_param))

  rbc <- compiler::cmpfun(execute, options=RBC_OPTS)
  rbc <- wrap_with_verify(rbc, result, output)
  rsh <- rsh:::rsh_cmpfun(execute, options=RSH_OPTS)
  rsh <- wrap_with_verify(rsh, result, output)

  microbenchmark::microbenchmark(
    RBC=rbc(bench_param),
    RSH=rsh(bench_param),

    times = RUNS,
    unit="seconds",
    control=list(order="block", warnup=0)
  )
}

run <- function(args) {
    if (length(args) < 1 || length(args) > 2) {
        stop(printUsage())
    }

    name <- args[[1]]
    setwd(dirname(name))

    source(paste0(basename(name), ".R"))

    bench_param <- formals(execute)[[1]]

    if (length(args) == 2) {
        bench_param <- strtoi(args[[2]])
    }

    res <- benchmark(bench_param);
    print(res)
    res <- cbind(res, name=basename(name), bench_param={if(missing(bench_param)) NA else bench_param})
    write.csv(res, paste0(name, ".csv"), row.names = FALSE)
}

printUsage <- function() {
    cat("harness.r benchmark [benchmark-parameter]\n")
    cat("\n")
    cat("  benchmark           - benchmark class name\n")
    cat("  benchmark-parameter - size of the benchmark problem (default defined in benchmark)\n")
    cat("\n")
    cat("  RUNS environment variable affects the number of runs (default: ", RUNS, ")\n")
}

args <- commandArgs(trailingOnly=FALSE)
arg_f_idx <- which(args == "--file" | args == "-f")
arg_file <- args[arg_f_idx + 1]
setwd(dirname(arg_file))

run(commandArgs(trailingOnly=TRUE))
