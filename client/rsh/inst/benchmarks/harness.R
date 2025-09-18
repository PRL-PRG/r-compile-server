#!/usr/bin/env Rscript
set.seed(1)

BC_OPTS <- list(optimize = 3L)
RSH_OPTS <- list(optimize = 3L, cache = FALSE)

DEFAULT_RUNS <- 15L
DEFAULT_RSH_OPT <- 3L

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

benchmark <- function(options) {
  output <- capture.output(result <- execute(options$param))
  b <- list()

  if ("bc" %in% options$type) {
    bc <- compiler::cmpfun(execute, options=BC_OPTS)
    bc <- wrap_with_verify(bc, result, output)
    b$bc <- quote(bc(options$param))
  }

  if ("rsh" %in% options$type) {
    library(rsh)

    rsh <- rsh:::rsh_cmpfun(execute, options=c(RSH_OPTS, options$compiler_options))
    rsh <- wrap_with_verify(rsh, result, output)
    b$rsh <- quote(rsh(options$param))
  }

  b$times <- options$runs
  b$unit <- "seconds"
  b$control <- list(order="block")

  do.call(microbenchmark::microbenchmark, b)
}

run <- function(o) {
    setwd(dirname(o$benchmark))
    name <- basename(o$benchmark)

    source(paste0(name, ".R"))

    if (is.na(o$param)) {
        o$param <- formals(execute)[[1]]
    }

    res <- benchmark(o);

    print(res)
    
    res <- cbind(
        res, 
        name=name,
        param=if(is.name(o$param)) NA else o$param,
        runs=o$runs,
        commit=o$git_commit,
        timestamp=as.integer(Sys.time()),
        compiler_options=paste0(names(o$compiler_options), "=", o$compiler_options, collapse=" ")
    )

    if (!is.na(o$output_dir)) {
        if (!dir.exists(o$output_dir)) {
          dir.create(o$output_dir, recursive=TRUE)
        }
        write.csv(res, file.path(o$output_dir, paste0(name, ".csv")), row.names = FALSE)
    }
}

stop_and_help <- function(...) {
    message <- paste(...)
    if (!is.na(message)) {
        cat("Error:", message, "\n\n")
    }

    cat("harness.r [options] <benchmark> [benchmark-parameter]\n")
    cat("\n")
    cat("options:\n")
    cat("  --bc                - run BC\n")
    cat("  --rsh               - run RSH\n")
    cat("  --rsh-cc-opt        - set RSH optimization level (default: ", DEFAULT_RSH_OPT, ")\n")
    cat("  --runs <n>          - number of runs (default: ", DEFAULT_RUNS, ")\n")
    cat("  --output-dir        - the output directory\n")
    cat("\n")
    cat("  benchmark           - benchmark class name\n")
    cat("  benchmark-parameter - size of the benchmark problem (default defined in benchmark)\n")
    cat("\n")

    stop()
}

parse_args <- function(args) {
    o <- list(
        type = character(),
        benchmark = NA,
        param = NA,
        output_dir = NA,
        runs = DEFAULT_RUNS,
        compiler_options = list(
          cc_opt = DEFAULT_RSH_OPT
        )
    )

    i <- 1
    while (i <= length(args)) {
        arg <- args[i]
        if (arg == "--bc") {
            o$type <- unique(c(o$type, "bc"))
        } else if (arg == "--rsh") {
            o$type <- unique(c(o$type, "rsh"))
        } else if (arg == "--rsh-cc-opt") {
            if (i == length(args)) stop_and_help("Missing value for --rsh-cc-opt")
            i <- i + 1
            o$compiler_options$cc_opt <- as.integer(args[i])
        } else if (arg == "--runs") {
            if (i == length(args)) stop_and_help("Missing value for --runs")
            i <- i + 1
            o$runs <- as.integer(args[i])
        } else if (arg == "--output-dir") {
            if (i == length(args)) stop_and_help("Missing value for --output-dir")
            i <- i + 1
            o$output_dir <- args[i]
        } else if (startsWith(arg, "--")) {
            stop_and_help("Unknown option", arg)
        } else if (is.na(o$benchmark)) {
            o$benchmark <- arg
        } else if (is.na(o$param)) {
            o$param <- as.integer(arg)
        } else {
            stop_and_help("Unknown or extra argument: ", arg)
        }
        i <- i + 1
    }

    if (!is.integer(o$runs) || o$runs <= 0) {
        stop_and_help("`--runs` must be a positive integer.")
    }

    if (length(o$type) == 0) {
        stop_and_help("Missing type")
    }

    if (is.na(o$benchmark)) {
        stop_and_help("Missing benchmark")
    }

    o
}

find_self <- function(args) {
    i <- 1
    while (i <= length(args)) {
        arg <- args[i]
        if (startsWith(arg, "--file=")) {
            return(substring(arg, 8))
        }
        if (arg %in% c("--file", "-f")) {
          return(args[i + 1])
        }
        i <- i + 1
    }
    stop("Unable to find the --file parameter passed to Rscript")
}

get_git_short_commit <- function(dir = ".") {
  res <- tryCatch(
    system2("git", c("-C", dir, "rev-parse", "--short", "HEAD"),
            stdout = TRUE, stderr = TRUE),
    error = function(e) NA_character_
  )
  if (length(res) == 1 && grepl("fatal|not a git", res, ignore.case = TRUE)) {
    return(NA_character_)
  }
  trimws(res[1])
}

self <- find_self(commandArgs(trailingOnly=FALSE))
setwd(dirname(self))

options <- parse_args(commandArgs(trailingOnly=TRUE))
options$git_commit <- get_git_short_commit()
run(options)
