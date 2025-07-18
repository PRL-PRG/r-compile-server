#!/usr/bin/env Rscript
set.seed(1)

suppressPackageStartupMessages(library(dplyr))
suppressPackageStartupMessages(library(tidyr))
suppressPackageStartupMessages(library(callr))

profile <- function(o, name, execute) {
    callr::r(
        function(o, execute) {
            execute(o$param)
        },
        list(o = o, execute=execute),
        show = FALSE,
        arch = o$timeR,
        cmdargs = c(paste0("--timeR-raw=",file.path(o$output_dir, paste0(name, ".csv"))),
         "--slave", "--no-save", "--no-restore"),
    )
}


run <- function(o) {
    setwd(dirname(o$benchmark))
    name <- basename(o$benchmark)

    # Just to get the parameter name
    source(paste0(name, ".R"))

    if (!is.na(o$output_dir)) {
        if (!dir.exists(o$output_dir)) {
          dir.create(o$output_dir, recursive=TRUE)
        }
    }

    if (is.na(o$param)) {
        o$param <- formals(execute)[[1]]
    }

    profile(o, name, execute)
}

stop_and_help <- function(...) {
    message <- paste(...)
    if (!is.na(message)) {
        cat("Error:", message, "\n\n")
    }

    cat("harness.r [options] <benchmark> [benchmark-parameter]\n")
    cat("\n")
    cat("options:\n")
    cat("  --verbose           - verbosity\n")
    cat("  --output-dir        - the output directory\n")
    cat("  --timeR              - path to the timeR executable. You can also setup the env variable TIME_R.")
    cat("\n")
    cat("  benchmark           - benchmark class name\n")
    cat("  benchmark-parameter - size of the benchmark problem (default defined in benchmark)\n")
    cat("\n")

    stop()
}


parse_args <- function(args) {
    o <- list(
        benchmark = NA,
        param = NA,
        output_dir = NA,
        timeR = Sys.getenv("TIME_R"),
        verbose = FALSE
    )

    i <- 1
    while (i <= length(args)) {
        arg <- args[i]
        if (arg == "--verbose") {
            if (i == length(args)) stop_and_help("Missing value for --verbose")
            i <- i + 1
            o$verbose <- TRUE
        } else if (arg == "--timeR") {
            if (i == length(args)) stop_and_help("Missing value for --timeR")
            i <- i + 1
            o$timeR <- args[i]
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

    if (is.na(o$benchmark)) {
        stop_and_help("Missing benchmark")
    }

    if (is.null(o$timeR) || o$timeR == "") {
        stop_and_help("Missing timeR executable.")
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
if(!callr::r(exists, list(x = "traceR_idlemark"), arch= options$timeR, show = FALSE)) {
  stop("This script requires a modifier version of R with timers.
  You can find it at https://github.com/programLyrique/timeR")
}
options$git_commit <- get_git_short_commit()
run(options)
