#!/usr/bin/env Rscript

SAME_TRESHOLD <- .03
DEFAULT_WARMUP <- 5
DEFAULT_RESULT_FILE <- "result.csv"

geom_mean <- function(xs) {
  exp(mean(log(na.omit(xs))))
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
        commit=as.character(commit),
        time=time/1e6,
        timestamp=as_datetime(timestamp),
        file=f
      ) %>%
      slice(-(1:warmup))

    if (ncol(df) < 8) {
      warning("File does not have at least 8 columns: ", f)
    }
    df
  })

  slower <- Vectorize(red $ bold)
  faster <- Vectorize(green $ bold)
  same <- Vectorize(yellow $ bold)

  categorize <- Vectorize(function(x) {
      d <- x - 1
      if (is.na(d)) {
        NA_character_
      } else if (abs(d) <= SAME_TRESHOLD) {
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
          "slower" ~ slower(speedup_s),
          .default = NA
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
      mt=mean(time),
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

  overall_summ <- summ %>%
    group_by(VM) %>%
    summarise(
       gmean=geom_mean(speedup),
       min=min(speedup),
       max=max(speedup)
    )

  summ %>%
    filter(!str_starts(VM, "bc")) %>%
    mutate(speedup=categorize(speedup)) %>%
    count(VM, speedup) %>%
    pivot_wider(names_from=speedup, values_from=n) %>%
    left_join(overall_summ, by="VM") %>%
    arrange(desc(gmean)) %>%
    knitr::kable(digits=2)
}

read_timev <- function(path) {
  lines <- readr::read_lines(path)
  
  a <- tibble(raw = lines) %>%
    mutate(raw = str_replace(raw, "\\(h:mm:ss or m:ss\\)", "")) %>%
    separate(raw,
             into  = c("key", "value"),
             sep   = ":", extra = "merge", fill = "right") %>%
    mutate(
      key   = str_trim(key),
      value = str_trim(value)
    ) %>%
    pivot_wider(names_from = key, values_from = value) %>%
    rename(
      cmd       = `Command being timed`,
      user      = `User time (seconds)`,
      sys       = `System time (seconds)`,
      cpu       = `Percent of CPU this job got`,
      elapsed   = `Elapsed (wall clock) time`,
      txt_kb    = `Average shared text size (kbytes)`,
      data_kb   = `Average unshared data size (kbytes)`,
      stack_kb  = `Average stack size (kbytes)`,
      total_kb  = `Average total size (kbytes)`,
      max_rss   = `Maximum resident set size (kbytes)`,
      avg_rss   = `Average resident set size (kbytes)`,
      maj_pf    = `Major (requiring I/O) page faults`,
      min_pf    = `Minor (reclaiming a frame) page faults`,
      vcs       = `Voluntary context switches`,
      ics       = `Involuntary context switches`,
      swaps     = `Swaps`,
      fs_in     = `File system inputs`,
      fs_out    = `File system outputs`,
      sock_sent = `Socket messages sent`,
      sock_recv = `Socket messages received`,
      signals   = `Signals delivered`,
      pg_size   = `Page size (bytes)`,
      status    = `Exit status`
    ) %>%
    mutate(cpu = str_replace(cpu, "%", "")) %>%
    mutate(
      across(c(user, sys, cpu,
               txt_kb, data_kb, stack_kb, total_kb,
               max_rss, avg_rss,
               maj_pf, min_pf,
               vcs, ics,
               swaps, fs_in, fs_out,
               sock_sent, sock_recv,
               signals, pg_size, status),
             as.numeric),
      elapsed = {
        parts <- str_split(elapsed, ":", simplify = TRUE)
        secs <- if (ncol(parts) == 3) {
          as.numeric(parts[,1]) * 3600 +
          as.numeric(parts[,2]) * 60 +
          as.numeric(parts[,3])
        } else {
          as.numeric(parts[,1]) * 60 +
          as.numeric(parts[,2])
        }
        secs
      }
    )
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
    if (ncol(df) < 8) {
      warning("File does not have at least 8 columns: ", file)
    }
    timev_file <- str_replace(file, "\\.csv$", ".time")
    if (file.exists(timev_file)) {
      timev <- read_timev(timev_file) %>% select(-cmd)
      df <- bind_cols(df, timev)
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
