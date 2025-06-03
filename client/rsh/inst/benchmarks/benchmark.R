#!/usr/bin/env Rscript

do_result <- function(args) {
  if (length(args) != 1) {
    stop("Usage: result <input file>")
  }

  input_dir <- args[1]
  D_raw <- read_csv(input_dir)

  D <- D_raw %>%
    group_by(suite, name, expr) %>%
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

  D_sp %>%
    arrange(speedup) %>%
    print(n=Inf)
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
