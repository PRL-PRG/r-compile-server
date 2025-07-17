#!/usr/bin/env Rscript

SAME_TRESHOLD <- .03
DEFAULT_WARMUP <- 5
DEFAULT_RESULT_FILE <- "result.csv"

geom_mean <- function(xs) {
  exp(mean(log(xs)))
}

load_package <- function(pkg) {
  if (!requireNamespace(pkg, quietly = TRUE)) {
    stop(sprintf("Package '%s' is not installed.", pkg), call. = FALSE)
  }
  suppressPackageStartupMessages(library(pkg, character.only = TRUE, quietly = TRUE, warn.conflicts = FALSE))
}

do_compare <- function(args) {
  load_package("tidyverse")
  load_package("lubridate")
  load_package("glue")
  load_package("crayon")
  
  files <- args
  warmup <- DEFAULT_WARMUP
  
  if (length(files) == 0) {
    stop("Usage: result <file1> <file2> [ ... <fileN> ]")
  }
  
  data <- map_dfr(files, function(f) {
    df <- 
      read_csv(f, show_col_types = FALSE) %>%
      rename(VM=expr) %>% 
      mutate(
        time=time/1e6,
        timestamp=as_datetime(timestamp),
        file=f
      ) %>%
      slice(-(1:warmup))
    
    if (ncol(df) < 9) {
      warning("File does not have at least 9 columns: ", f)
    }

    df
  })

  slower <- Vectorize(red $ bold)
  faster <- Vectorize(green $ bold)
  same <- Vectorize(yellow $ bold)
  
  categorize <- Vectorize(function(x) {
      d <- x - 1
      if (abs(d) <= SAME_TRESHOLD) {
        "same"
      } else if (d > 0) {
        "faster"
      } else {
        "slower"
      }
  })

  print_result <- function(df) {
    header <- str_c("Benchmark: ", blue(df$name[1]), "\n")
    res <- 
      df %>%
      arrange(speedup) %>% 
      slice(n():1) %>%
      mutate(speedup_s=speedup) %>% 
      mutate_at(c("mt", "sd", "min", "max", "speedup_s"), \(x) sprintf("%6.2f", x)) %>% 
      mutate(speedup_s = 
        case_match(
          categorize(speedup),
          "same"   ~ same(speedup_s),
          "faster" ~ faster(speedup_s),
          "slower" ~ slower(speedup_s)
        )
      )  %>% 
      glue_data("\t- {speedup_s}x {mt} ± {sd} ({min} ... {max}): {VM}") %>% 
      str_c(collapse = "\n")
    footer <- "\n"
    tibble(t=paste(header, res, footer, collapse = "\n"))
  }
    
  summ <- data %>%
    group_by(name, file) %>% 
    summarise(
      VM=str_c(VM[1], " [", file[1], "] (", compiler_options[1], ")"),
      mt=geom_mean(time),
      sd=sd(time),
      min=min(time),
      max=max(time),
      .groups = "drop"
    ) %>%
    group_by(name) %>% 
    do({
      df <- .
      baseline <- filter(df, str_starts(VM, "bc"))$mt
      s <- NA
      if (length(baseline) == 1) {
        s <- baseline/df$mt
      }
      mutate(df, speedup=s)
    }) %>% 
    ungroup()

  summ %>% 
    group_by(name) %>% 
    do(print_result(.)) %>% 
    pull(t) %>%
    str_c(collapse = "\n") %>% 
    cat("\n")
  
  summ %>% 
    filter(!str_starts(VM, "bc")) %>%
    mutate(speedup=categorize(speedup)) %>%
    count(VM, speedup) %>%
    pivot_wider(names_from=speedup, values_from=n) %>%
    arrange(desc(faster)) %>%
    knitr::kable()
}

do_save <- function(args) {
  if (length(args) != 2) {
    stop("Usage: save <output file> <benchmark directory>")
  }

  load_package("tidyverse")
  
  output_file <- args[1]
  input_dir   <- args[2]

  files <- list.files(path = input_dir, recursive = TRUE, pattern = "*\\.csv$", full.names = TRUE)

  map_dfr(files, function(file) {
    df <- read_csv(file, show_col_types = FALSE)
    if (ncol(df) < 9) {
      warning("File does not have at least 9 columns: ", file)
    }
    df
  }) %>%
  write_csv(output_file)

  cat("Merged", length(files), "into", output_file, "\n")
}

main <- function() {
  args <- commandArgs(trailingOnly = TRUE)

  if (length(args) < 1) {
    stop("No command provided. Usage: benchmark.R [save|result] [args...]")
  }

  cmd  <- args[1]
  rest <- if (length(args) > 1) args[-1] else character(0)

  switch(cmd,
    save   = do_save(rest),
    compare = do_compare(rest),
    stop(sprintf("Unknown command '%s'. Use 'save' or 'result'.", cmd))
  )
}

if (!interactive()) {
  main()
}
