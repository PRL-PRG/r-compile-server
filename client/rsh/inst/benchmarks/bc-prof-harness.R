#!/usr/bin/env Rscript
set.seed(1)

suppressPackageStartupMessages(library(dplyr))
suppressPackageStartupMessages(library(tidyr))

BC_OPTS <- list(optimize = 3L)

bc_profile <- function(o) {
    output <- capture.output(result <- execute(o$param))

    bc <- compiler::cmpfun(execute, options=BC_OPTS)

    compiler::bcprof(bc, o$verbose)
}


run <- function(o) {
    setwd(dirname(o$benchmark))
    name <- basename(o$benchmark)

    source(paste0(name, ".R"))

    if (is.na(o$param)) {
        o$param <- formals(execute)[[1]]
    }

    res <- bc_profile(o);

    print(res)
    

    # Res is a data frame with the following shape:
    #                   hits  pct
    # GETVAR.OP           33 21.6
    # POP.OP              21 13.7
    # SETVAR.OP           17 11.1
    # STEPFOR.OP          11  7.2
    # ADD.OP              10  6.5
    # RETURN.OP            7  4.6
    # MAKEPROM.OP          6  3.9
    # CALLBUILTIN.OP       6  3.9
    # PUSHARG.OP           5  3.3
    # BRIFNOT.OP           4  2.6
    # LDCONST.OP           4  2.6
    # We need to pivot it to a long format

    nb_opcodes <- sum(res$hits)

    opcodes <- tibble::rownames_to_column(res, var = "opcodes") |>
        mutate(opcodes = gsub("\\.OP$", "", opcodes)) |>
        select(-pct) |>
        pivot_wider(names_from = opcodes, values_from = hits) 
    
    
    res <- tibble::tibble_row(
        name=name,
        nb_static_opcodes = attr(res, "nb_static_opcodes"),
        nb_executed_opcodes = nb_opcodes,
        param=if(is.name(o$param)) NA else o$param,
        commit=o$git_commit,
        timestamp=as.integer(Sys.time()),
        opcodes
    )

    if (!is.na(o$output_dir)) {
        if (!dir.exists(o$output_dir)) {
          dir.create(o$output_dir, recursive=TRUE)
        }
        readr::write_csv(res, file.path(o$output_dir, paste0(name, ".csv")))
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
    cat("  --verbose         - verbosity\n")
    cat("  --output-dir        - the output directory\n")
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
        verbose = FALSE
    )

    i <- 1
    while (i <= length(args)) {
        arg <- args[i]
        if (arg == "--verbose") {
            if (i == length(args)) stop_and_help("Missing value for --verbose")
            i <- i + 1
            o$verbose <- TRUE
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

if(!exists("bcprof", where = getNamespace("compiler"))) {
  stop("This script requires a modifier version of R with exact bytecode profiling. 
  You can find it at https://github.com/programLyrique/bc-prof-gnu-r")
}

options <- parse_args(commandArgs(trailingOnly=TRUE))
options$git_commit <- get_git_short_commit()
run(options)
