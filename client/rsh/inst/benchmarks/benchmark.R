#!/usr/bin/env Rscript

DEFAULT_WARMUP <- 5
DEFAULT_RESULT_FILE <- "result.csv"

do_result <- function(args) {
  if (length(args) < 1 || length(args) > 3) {
    stop("Usage: result <input file> [<warmup>] [<output file>]")
  }

  input_dir <- args[1]
  D_raw <- read_csv(input_dir)

  warmup <- DEFAULT_WARMUP
  if (length(args) > 1) {
    warmup <- as.integer(args[2])
  }

  D <- D_raw %>%
    group_by(suite, name, expr) %>%
    slice(-(1:warmup)) %>%
    summarise(
      n = n(),
      min = min(time),
      mean = mean(time),
      median = median(time),
      max = max(time),
      sd = sd(time)
    )

  D_sp <- pivot_wider(D, id_cols = c(suite, name), names_from = expr, values_from = median) %>%
    mutate(
      speedup = RBC / RSH
    )

  res <- D_sp %>%
    arrange(speedup)

  result_file <- DEFAULT_RESULT_FILE
  if (length(args) == 3) {
    result_file <- args[3]
  }
  write_csv(res, result_file)

  print(res, n=Inf)
}

do_save <- function(args) {
  if (length(args) != 2) {
    stop("Usage: save <output file> <benchmark directory>")
  }

  output_file <- args[1]
  input_dir   <- args[2]

  files <- list.files(path = input_dir, recursive = TRUE, pattern = "*\\.csv$", full.names = TRUE)

  map_dfr(files, function(file) {
    df <- read_csv(file) %>%
      mutate(suite = basename(dirname(file)))
    if (ncol(df) != 5) {
      warning("File does not have 5 columns: ", file)
      NULL
    } else {
      df
    }
  }) %>%
  write_csv(output_file)
}

main <- function() {
  args <- commandArgs(trailingOnly = TRUE)

  if (length(args) < 1) {
    stop("No command provided. Usage: benchmark.R [save|result] [args...]")
  }

  cmd  <- args[1]
  rest <- if (length(args) > 1) args[-1] else character(0)

  suppressPackageStartupMessages({
    library(tidyverse)
  })

  switch(cmd,
    save   = do_save(rest),
    result = do_result(rest),
    stop(sprintf("Unknown command '%s'. Use 'save' or 'result'.", cmd))
  )
}

if (!interactive()) {
  main()
}
