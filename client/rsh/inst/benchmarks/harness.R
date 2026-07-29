#!/usr/bin/env Rscript
#
# Unified benchmark harness.
#
# Runs any benchmark that follows the contract: a sourced .R file defining
#   execute <- function(param = <default>)
# This is the same contract the synthetic suites (areWeFast, shootout, ...) use,
# so a single harness runs every benchmark in the tree.
#
# Optional, for package-based benchmarks: if the sourced file also defines
#   BENCH_PACKAGES <- c("pkg", ...)
# the harness compiles those packages to native code with rcp_cmppkg() BEFORE
# timing (for the --rcp backend only), so calls from `execute` into the package
# run JIT-compiled too -- not just `execute`. Benchmarks that do not define
# BENCH_PACKAGES are unaffected (the step is a no-op). The --bc baseline keeps
# the byte-compiled package code it already gets at install time; rsh has no
# package-level compiler.

options(rcp.cmpfun.stats = TRUE)

BC_OPTS <- list(optimize = 3L)
RSH_OPTS <- list(optimize = 3L, cache = FALSE)

DEFAULT_RUNS <- 15L
DEFAULT_RSH_OPT <- 3L

# Render any value to a single diagnostic string. `stop()` coerces its
# arguments with as.character(), which errors on values it cannot coerce to a
# character vector (e.g. S4/S7 objects, typeof() == "object", as returned by
# ggplot2's element_text()). Routing through print()/capture.output() keeps the
# failure message robust for arbitrary result types.
format_value <- function(x) {
  txt <- tryCatch(
    capture.output(print(x)),
    error = function(e) paste0("<unprintable ", class(x)[[1]], ": ",
                               conditionMessage(e), ">")
  )
  if (length(txt) > 50L) {
    txt <- c(txt[seq_len(50L)], sprintf("... (%d more lines)", length(txt) - 50L))
  }
  paste(txt, collapse = "\n")
}

# Find the first place where two values diverge under identical(). str()/print()
# routinely hide what identical() compares -- attributes, closure bodies (where
# srcref imputation injects `{ }`), closure environments, NA storage type --
# which is exactly how two element_text() objects can print the same yet fail
# identical(). This walks both values in lockstep and reports the precise path.
first_diff <- function(a, b, path = "<value>", depth = 0L) {
  if (identical(a, b)) return(character())
  if (depth > 50L)     return(sprintf("%s: differs (max depth reached)", path))

  if (typeof(a) != typeof(b)) {
    return(sprintf("%s: typeof differs: %s vs %s", path, typeof(a), typeof(b)))
  }
  if (!identical(class(a), class(b))) {
    return(sprintf("%s: class differs: [%s] vs [%s]", path,
                   paste(class(a), collapse = ", "), paste(class(b), collapse = ", ")))
  }

  aa <- attributes(a); ab <- attributes(b)
  for (nm in union(names(aa), names(ab))) {
    d <- first_diff(aa[[nm]], ab[[nm]], sprintf("%s @%s", path, nm), depth + 1L)
    if (length(d)) return(d)
  }

  if (is.environment(a)) {
    return(sprintf("%s: environments differ by reference", path))
  }
  if (is.function(a)) {
    if (!identical(body(a), body(b))) {
      return(sprintf("%s: function body differs (e.g. injected `{ }`)", path))
    }
    if (!identical(formals(a), formals(b))) {
      return(sprintf("%s: function formals differ", path))
    }
    if (!identical(environment(a), environment(b))) {
      return(sprintf("%s: function closure environment differs", path))
    }
    return(sprintf("%s: functions differ", path))
  }
  if (is.list(a) || is.pairlist(a) || is.call(a) || is.expression(a)) {
    # Dispatch-free element access: classed list-likes can define length()/`[[`
    # methods that disagree with the raw count and overrun under seq_along().
    raw  <- typeof(a) == "list"
    elt  <- function(z, i) if (raw) .subset2(z, i) else z[[i]]
    la <- if (raw) length(unclass(a)) else length(a)
    lb <- if (typeof(b) == "list") length(unclass(b)) else length(b)
    if (la != lb) {
      return(sprintf("%s: length differs: %d vs %d", path, la, lb))
    }
    nms <- names(a)
    for (i in seq_len(la)) {
      lbl <- if (!is.null(nms) && nzchar(nms[[i]])) sprintf("%s$%s", path, nms[[i]])
             else sprintf("%s[[%d]]", path, i)
      d <- first_diff(elt(a, i), elt(b, i), lbl, depth + 1L)
      if (length(d)) return(d)
    }
  }
  if (is.atomic(a)) {
    if (length(a) != length(b)) {
      return(sprintf("%s: length differs: %d vs %d", path, length(a), length(b)))
    }
    idx <- which(!mapply(identical, as.list(a), as.list(b)))
    i <- if (length(idx)) idx[[1L]] else 1L
    return(sprintf("%s: value differs at [%d]: %s vs %s", path, i,
                   format(a[[i]]), format(b[[i]])))
  }

  sprintf("%s: differs (no finer classification; typeof=%s)", path, typeof(a))
}

# Build the diagnostic shown when a benchmark result/output mismatches. Leads
# with the precise divergence point, adds a waldo diff when available, and
# finally the full printed values.
describe_mismatch <- function(expected, actual) {
  parts <- character()

  d <- tryCatch(first_diff(expected, actual),
                error = function(e) paste0("first_diff() failed: ", conditionMessage(e)))
  if (length(d)) parts <- c(parts, paste0("first difference: ", d))

  if (requireNamespace("waldo", quietly = TRUE)) {
    w <- tryCatch(
      paste(capture.output(print(
        waldo::compare(expected, actual, x_arg = "expected", y_arg = "actual"))),
        collapse = "\n"),
      error = function(e) NULL)
    if (!is.null(w) && nzchar(w)) parts <- c(parts, "waldo::compare:", w)
  }

  c(parts, "expected:", format_value(expected), "actual:", format_value(actual))
}

# Compile the benchmark's packages to native code, outside the timed region.
# A failure in one package is reported but never aborts the benchmark.
precompile_packages <- function() {
  if (!exists("BENCH_PACKAGES", inherits = TRUE)) return(invisible())
  pkgs <- get("BENCH_PACKAGES", inherits = TRUE)
  # Compile package functions WITHOUT the `stats` telemetry attribute. rcp
  # attaches it (under rcp.cmpfun.stats) to every function it compiles, but for
  # package code it is never read -- only the timed top-level function's stats
  # are consumed. As a plain function attribute it leaks into observable program
  # behaviour: it breaks identical() (e.g. via a ggplot2 S7 object's @S7_class)
  # and changes deparse()/quo_name() output to `structure(function ..., stats=)`
  # whenever a compiled function (e.g. rlang::sym) is itself inlined and printed.
  # rcp_cmppkg() compiles eagerly here, before timing, so toggling the option
  # around it suffices.
  old <- options(rcp.cmpfun.stats = FALSE)
  on.exit(options(old), add = TRUE)
  for (p in pkgs) {
    tryCatch(
      rcp:::rcp_cmppkg(p),
      error = function(e) message("  cmppkg(", p, ") failed: ", conditionMessage(e))
    )
  }
  message("  rcp_cmppkg: ", paste(pkgs, collapse = ", "))
}

benchmark <- function(options) {
  # Establish the ground-truth result + output with everything interpreted,
  # BEFORE any package gets compiled.
  set.seed(1)
  expected_output <- capture.output(expected_value <- execute(options$param))
  expected <- list(value = expected_value, output = expected_output)

  # Correctness is verified by microbenchmark's `check` hook, which runs ONCE
  # (untimed) before timing: each timed expression returns list(value=, output=)
  # and must reproduce the interpreted reference's value AND printed output.
  # This replaces the old per-iteration verify wrapper, so gc()/set.seed() (moved
  # to `setup` below) and the comparison no longer inflate every measurement.
  check <- function(values) {
    for (got in values) {
      if (!identical(got$value, expected$value)) {
        stop(paste(c("Benchmark failed with incorrect result",
                     describe_mismatch(expected$value, got$value)), collapse = "\n"),
             call. = FALSE)
      }
      if (!identical(got$output, expected$output)) {
        stop(paste(c("Benchmark failed with incorrect output",
                     describe_mismatch(expected$output, got$output)), collapse = "\n"),
             call. = FALSE)
      }
    }
    TRUE
  }

  # Each timed expression captures both the printed output and the return value
  # and bundles them so `check` can compare both. capture.output is the only work
  # besides the call itself; gc()/set.seed() are hoisted into `setup`.
  bundle <- function(call) bquote({
    o <- capture.output(v <- .(call))
    list(value = v, output = o)
  })

  b <- list()
  rsh_stats <- NULL

  if ("bc" %in% options$type) {
    # Package code is already byte-compiled at install time -- nothing to do.
    bc <- compiler::cmpfun(execute, options=BC_OPTS)
    b$bc <- bundle(quote(bc(options$param)))
  }

  if ("rsh" %in% options$type) {
    library(rsh)

    rsh <- rsh:::rsh_cmpfun(execute, options=c(RSH_OPTS, options$compiler_options))
    b$rsh <- bundle(quote(rsh(options$param)))
  }

  if ("rcp" %in% options$type) {
    library(rcp)

    # Compile the benchmark's package(s) to native BEFORE timing.
    precompile_packages()

    rsh <- rcp:::rcp_cmpfun(execute, options=c(RSH_OPTS, options$compiler_options))
    rsh_stats <- attr(rsh, "stats")
    attr(rsh, "stats") <- NULL

    b$rsh <- bundle(quote(rsh(options$param)))
  }

  # setup runs untimed before each measured iteration (and before the check
  # eval), in the same process and RNG state as the timed expression.
  b$setup <- quote({ gc(full=TRUE); set.seed(1) })
  b$check <- check
  b$times <- options$runs
  b$unit <- "seconds"
  b$control <- list(order="block")

  res <- do.call(microbenchmark::microbenchmark, b)
  attr(res, "extras") <- rsh_stats
  res
}

run <- function(o) {
    setwd(dirname(o$benchmark))
    file_base <- basename(o$benchmark)
    # Label used for the result row and the output CSV. Defaults to the file
    # name, but the runner passes a path-derived --name so benchmarks with the
    # same file name in different groups don't collide.
    label <- if (!is.na(o$name)) o$name else file_base

    source(paste0(file_base, ".R"))

    if (is.na(o$param)) {
        o$param <- formals(execute)[[1]]
    }

    res <- benchmark(o);
    extras <- attr(res, "extras")

    print(res)

    res <- cbind(
        res,
        name=label,
        param=if(is.name(o$param)) NA else o$param,
        runs=o$runs,
        commit=o$git_commit,
        timestamp=as.integer(Sys.time()),
        compiler_options=paste0(names(o$compiler_options), "=", o$compiler_options, collapse=" ")
    )

    if (!is.null(extras)) {
      res <- cbind(res, as.list(extras))
    }

    if (!is.na(o$output_dir)) {
        csv_path <- file.path(o$output_dir, paste0(label, ".csv"))
        # `label` may contain '/' (group/topic), so create the parent directory.
        dir.create(dirname(csv_path), recursive=TRUE, showWarnings=FALSE)
        write.csv(res, csv_path, row.names = FALSE)
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
    cat("  --rcp               - run RCP\n")
    cat("  --rsh-cc-opt        - set RSH/RCP optimization level (default: ", DEFAULT_RSH_OPT, ")\n")
    cat("  --runs <n>          - number of runs (default: ", DEFAULT_RUNS, ")\n")
    cat("  --output-dir        - the output directory\n")
    cat("  --name <name>       - result label / csv name (default: benchmark file name)\n")
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
        name = NA,
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
        } else if (arg == "--rcp") {
            o$type <- unique(c(o$type, "rcp"))
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
        } else if (arg == "--name") {
            if (i == length(args)) stop_and_help("Missing value for --name")
            i <- i + 1
            o$name <- args[i]
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
