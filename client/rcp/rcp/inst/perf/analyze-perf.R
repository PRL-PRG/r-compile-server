#!/usr/bin/env Rscript
#' Analyze perf.jit.data: categorize time by JIT R code, GC, alloc, C code, etc.
#'
#' Usage: Rscript analyze-perf.R <perf.jit.data> [--benchmark-only] [--top N]

suppressPackageStartupMessages({
  library(tidyverse)
  library(stringr)
})

# ---------------------------------------------------------------------------
# Category definitions (data-driven, order = priority)
# ---------------------------------------------------------------------------

CATEGORY_RULES <- tribble(
  ~category,          ~patterns,
  "gc",               list(c("R_gc_internal", "do_gc", "AgeNodeAndChildren",
                             "TryToReleasePages*", "mark_phase", "RunGenCollect")),
  "alloc",            list(c("Rf_allocVector*", "CONS_NR", "GetNewPage", "Rf_mkPROMISE",
                             "_int_malloc", "_int_free*", "malloc", "free", "calloc", "realloc")),
  "env-lookup",       list(c("Rf_findVarInFrame*", "findVarLocInFrame*", "R_findVar*",
                             "Rf_findFun*", "GET_BINDING_CELL", "R_envHasNoSpecialSymbols")),
  "arg-matching",     list(c("Rf_matchArgs*", "Rf_checkArityCall")),
  "call-trampoline",  list(c("Rsh_Call", "Rsh_closure_call_args", "Rsh_builtin_call_args",
                             "rcpEval", "rcpCallNative*")),
  "bc-interpreter",   list(c("bcEval*")),
  "r-vm",             list(c("Rf_eval", "forcePromise", "R_execClosure", "applyClosure*",
                             "R_cmpfun*", "Rf_ReplIteration")),
  "context-mgmt",     list(c("Rf_begincontext", "Rf_endcontext", "Rf_NewEnvironment",
                             "make_applyClosure_env", "R_BCRelPC", "R_BCVersionOK")),
)

# Flatten patterns into regex for each category (glob -> regex)
glob_to_regex <- function(pat) {
  # Use glob2rx from utils, which handles fnmatch-style * and ? correctly
  # glob2rx("foo*") -> "^foo" (with trimhead/trimtail defaults)
  # We want full anchored regex like fnmatch
  utils::glob2rx(pat)
}

CATEGORY_RULES <- CATEGORY_RULES |>
  mutate(
    patterns = map(patterns, ~ .x[[1]]),
    regex = map_chr(patterns, ~ paste0(map_chr(.x, glob_to_regex), collapse = "|"))
  )

ALL_CATEGORIES <- c(
  "jit-r-code", "jit-unresolved", "gc", "alloc", "env-lookup",
  "arg-matching", "call-trampoline", "bc-interpreter", "r-vm",
  "context-mgmt", "rcp-runtime", "c-builtins", "system", "unmatched"
)

INFRA_PACKAGES <- c(
  "base", "utils", "stats", "methods", "grDevices", "graphics",
  "datasets", "tools", "compiler", "grid", "parallel", "splines",
  "stats4", "tcltk"
)

# ---------------------------------------------------------------------------
# DSO helpers (vectorized)
# ---------------------------------------------------------------------------

is_r_binary <- function(dso) grepl("(/R$|/R\\.bin$)", dso)
is_jitted   <- function(dso) grepl("jitted-", dso, fixed = TRUE) & grepl("\\.so$", dso)
is_rcp_so   <- function(dso) grepl("rcp\\.so$", dso)

is_system_dso <- function(dso) {
  dso == "[unknown]" |
    grepl("libc\\.so|libm\\.so|libpthread|ld-linux|libdeflate|\\[kernel|libgcc|libstdc\\+\\+|\\[vdso\\]|libdl", dso)
}

# ---------------------------------------------------------------------------
# Vectorized parsing of perf script output
# ---------------------------------------------------------------------------

parse_perf_script <- function(perf_data_file) {
  # Check if a cached perf script text file exists
  txt_file <- sub("\\.[^.]+$", ".txt", perf_data_file)
  if (file.exists(txt_file)) {
    message("Reading cached perf script output from ", txt_file, " ...")
    lines <- readLines(txt_file)
  } else {
    message("Running perf script on ", perf_data_file, " ...")
    lines <- system2("perf", c("script", "-i", perf_data_file),
                     stdout = TRUE, stderr = FALSE)
    # Cache for reproducibility
    message("Caching perf script output to ", txt_file, " ...")
    writeLines(lines, txt_file)
  }
  message("Read ", length(lines), " lines, parsing ...")

  # Identify header lines vs frame lines
  # Header lines: non-empty, don't start with space/tab
  n <- length(lines)
  empty <- nchar(lines) == 0L
  first_char <- substr(lines, 1, 1)
  is_header <- !empty & first_char != " " & first_char != "\t"

  # Parse frame lines
  is_frame <- !empty & !is_header
  frame_idx <- which(is_frame)
  frame_matches <- str_match(lines[frame_idx], "^\\s+(\\S+)\\s+(.+)\\s+\\((.+)\\)\\s*$")

  valid <- !is.na(frame_matches[, 1])
  frame_idx <- frame_idx[valid]
  frame_addr <- frame_matches[valid, 2]
  frame_sym  <- sub("\\+0x[0-9a-fA-F]+$", "", str_trim(frame_matches[valid, 3]))
  frame_dso  <- frame_matches[valid, 4]

  # Assign each line to a sample_id: cumsum of header lines
  header_cumsum <- cumsum(is_header)
  frame_sample_id <- header_cumsum[frame_idx]

  # Build frames tibble
  frames_tbl <- tibble(
    sample_id = frame_sample_id,
    sym = frame_sym,
    dso = frame_dso,
    addr = frame_addr
  )

  # Frame position within each sample (1 = leaf)
  frames_tbl <- frames_tbl |>
    group_by(sample_id) |>
    mutate(frame_pos = row_number()) |>
    ungroup()

  # Extract headers and timestamps
  header_idx <- which(is_header)
  headers <- lines[header_idx]
  ts_match <- str_match(headers, "\\s(\\d+\\.\\d+):")
  timestamps <- as.numeric(ts_match[, 2])

  samples <- tibble(
    sample_id = seq_along(headers),
    header = headers,
    timestamp = timestamps
  )

  # Only keep samples that have frames
  samples_with_frames <- unique(frames_tbl$sample_id)
  samples <- samples |> filter(sample_id %in% samples_with_frames)

  list(samples = samples, frames = frames_tbl)
}

# ---------------------------------------------------------------------------
# Classification (vectorized where possible, row-wise where needed)
# ---------------------------------------------------------------------------

classify_samples <- function(samples, frames) {
  # Get leaf frame for each sample
  leaf <- frames |>
    filter(frame_pos == 1) |>
    select(sample_id, leaf_sym = sym, leaf_dso = dso)

  samples <- samples |> left_join(leaf, by = "sample_id")

  # Step 1: DSO-based classification
  samples <- samples |>
    mutate(
      is_jit = is_jitted(leaf_dso),
      is_unknown = leaf_dso == "[unknown]",
      is_r = is_r_binary(leaf_dso) | leaf_dso == "inlined" | is_rcp_so(leaf_dso),
      is_sys = is_system_dso(leaf_dso),
      is_rcp = is_rcp_so(leaf_dso)
    )

  # For [unknown] DSO samples, check if JIT caller or Rsh_Call in stack
  unknown_ids <- samples$sample_id[samples$is_unknown]
  if (length(unknown_ids) > 0) {
    caller_frames <- frames |>
      filter(sample_id %in% unknown_ids, frame_pos > 1)

    jit_context_unknown <- caller_frames |>
      group_by(sample_id) |>
      summarise(
        has_jit_caller = any(is_jitted(dso)),
        has_rsh_caller = any(grepl("Rsh_Call", sym, fixed = TRUE)),
        .groups = "drop"
      )

    samples <- samples |>
      left_join(jit_context_unknown, by = "sample_id") |>
      mutate(
        has_jit_caller = replace_na(has_jit_caller, FALSE),
        has_rsh_caller = replace_na(has_rsh_caller, FALSE)
      )
  } else {
    samples <- samples |>
      mutate(has_jit_caller = FALSE, has_rsh_caller = FALSE)
  }

  # Step 2: Symbol-based matching for R/rcp/inlined DSOs
  # Build category column for symbol-based matches
  sym_category <- rep(NA_character_, nrow(samples))
  for (i in seq_len(nrow(CATEGORY_RULES))) {
    matched <- grepl(CATEGORY_RULES$regex[i], samples$leaf_sym) & samples$is_r & is.na(sym_category)
    sym_category[matched] <- CATEGORY_RULES$category[i]
  }

  # Also check alloc patterns for system DSOs
  alloc_regex <- CATEGORY_RULES$regex[CATEGORY_RULES$category == "alloc"]
  sys_alloc <- grepl(alloc_regex, samples$leaf_sym) & samples$is_sys

  # Final category assignment
  samples <- samples |>
    mutate(
      sym_cat = sym_category,
      category = case_when(
        is_jit ~ "jit-r-code",
        is_unknown & (has_jit_caller | has_rsh_caller) ~ "jit-unresolved",
        is_unknown ~ "system",
        is_r & !is.na(sym_cat) ~ sym_cat,
        is_r & is_rcp ~ "rcp-runtime",
        is_r ~ "c-builtins",
        is_sys & sys_alloc ~ "alloc",
        is_sys ~ "system",
        TRUE ~ "unmatched"
      )
    )

  # Find JIT context: first jitted frame in each sample's stack
  jit_frames <- frames |>
    filter(is_jitted(dso)) |>
    group_by(sample_id) |>
    slice_min(frame_pos, n = 1, with_ties = FALSE) |>
    ungroup() |>
    select(sample_id, jit_context = sym)

  samples <- samples |>
    left_join(jit_frames, by = "sample_id") |>
    mutate(
      package = case_when(
        is.na(jit_context) ~ "<no-jit-context>",
        grepl("::", jit_context, fixed = TRUE) ~ sub("::.*", "", jit_context),
        TRUE ~ "<unknown>"
      )
    )

  # Clean up temp columns
  samples |>
    select(sample_id, timestamp, leaf_sym, leaf_dso, category, jit_context, package)
}

# ---------------------------------------------------------------------------
# Benchmark-only detection
# ---------------------------------------------------------------------------

detect_benchmark_range <- function(samples, frames) {
  jit_frames <- frames |> filter(is_jitted(dso))

  if (nrow(jit_frames) == 0) return(c(NA_real_, NA_real_))

  user_jit <- jit_frames |>
    mutate(
      pkg = if_else(grepl("::", sym, fixed = TRUE), sub("::.*", "", sym), sym)
    ) |>
    filter(!(pkg %in% INFRA_PACKAGES))

  if (nrow(user_jit) == 0) return(c(NA_real_, NA_real_))

  user_sample_ids <- unique(user_jit$sample_id)
  ts <- samples$timestamp[samples$sample_id %in% user_sample_ids]
  ts <- ts[!is.na(ts)]

  if (length(ts) == 0) return(c(NA_real_, NA_real_))
  c(min(ts), max(ts))
}

# ---------------------------------------------------------------------------
# Output formatting
# ---------------------------------------------------------------------------

print_table <- function(headers, df, col_widths = NULL) {
  mat <- as.matrix(df)
  if (is.null(col_widths)) {
    col_widths <- vapply(seq_along(headers), function(i) {
      max(nchar(headers[i]), max(nchar(mat[, i]), na.rm = TRUE)) + 2L
    }, integer(1))
  }

  header_line <- ""
  for (i in seq_along(headers)) {
    if (i == 1) {
      header_line <- paste0(header_line, str_pad(headers[i], col_widths[i], "right"))
    } else {
      header_line <- paste0(header_line, str_pad(headers[i], col_widths[i], "left"))
    }
  }
  cat(header_line, "\n")
  cat(strrep("\u2500", nchar(header_line)), "\n")

  for (r in seq_len(nrow(mat))) {
    line <- ""
    for (i in seq_along(headers)) {
      val <- mat[r, i]
      if (i == 1) {
        line <- paste0(line, str_pad(val, col_widths[i], "right"))
      } else {
        line <- paste0(line, str_pad(val, col_widths[i], "left"))
      }
    }
    cat(line, "\n")
  }
}

# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

main <- function() {
  args <- commandArgs(trailingOnly = TRUE)

  perf_data <- NULL
  benchmark_only <- FALSE
  top_n <- 30L

  i <- 1L
  while (i <= length(args)) {
    if (args[i] == "--benchmark-only") {
      benchmark_only <- TRUE
    } else if (args[i] == "--top") {
      i <- i + 1L
      top_n <- as.integer(args[i])
    } else if (is.null(perf_data)) {
      perf_data <- args[i]
    } else {
      stop("Unexpected argument: ", args[i])
    }
    i <- i + 1L
  }

  if (is.null(perf_data)) {
    cat("Usage: Rscript analyze-perf.R <perf.jit.data> [--benchmark-only] [--top N]\n",
        file = stderr())
    quit(status = 1)
  }

  if (!file.exists(perf_data)) {
    cat("Error:", perf_data, "not found\n", file = stderr())
    quit(status = 1)
  }

  perf_dir <- dirname(perf_data)

  # Parse
  parsed <- parse_perf_script(perf_data)
  all_samples <- parsed$samples
  all_frames  <- parsed$frames
  message("Parsed ", nrow(all_samples), " samples")

  # Benchmark-only filtering
  if (benchmark_only) {
    range <- detect_benchmark_range(all_samples, all_frames)
    if (is.na(range[1])) {
      message("Warning: no user JIT functions found, showing all samples")
    } else {
      message(sprintf("Benchmark range: %.6f - %.6f (%.3fs)",
                      range[1], range[2], range[2] - range[1]))
      keep_ids <- all_samples$sample_id[
        !is.na(all_samples$timestamp) &
        all_samples$timestamp >= range[1] &
        all_samples$timestamp <= range[2]
      ]
      all_samples <- all_samples |> filter(sample_id %in% keep_ids)
      all_frames  <- all_frames  |> filter(sample_id %in% keep_ids)
    }
  }

  total <- nrow(all_samples)
  message("Samples after filtering: ", total)

  if (total == 0) {
    cat("No samples found.\n")
    quit(status = 0)
  }

  # Classify
  message("Classifying ...")
  samples <- classify_samples(all_samples, all_frames)

  # ── CSV output ──
  write_csv(samples, file.path(perf_dir, "samples.csv"))

  # ── Table 1: Category breakdown ──
  cat("\n")
  cat(strrep("=", 60), "\n")
  cat(" Category Breakdown\n")
  cat(strrep("=", 60), "\n")

  cat_counts <- samples |>
    count(category) |>
    mutate(pct = sprintf("%.1f%%", 100 * n / total))

  cat_order <- tibble(category = ALL_CATEGORIES, ord = seq_along(ALL_CATEGORIES))
  cat_display <- cat_counts |>
    left_join(cat_order, by = "category") |>
    mutate(ord = if_else(is.na(ord), 999L, as.integer(ord))) |>
    arrange(ord) |>
    filter(n > 0) |>
    select(category, n, pct) |>
    bind_rows(tibble(category = "TOTAL", n = total, pct = "100.0%"))

  print_table(c("Category", "Samples", "%"),
              cat_display |> mutate(n = as.character(n)))
  cat("\n")

  write_csv(cat_display |> filter(category != "TOTAL"),
            file.path(perf_dir, "category_summary.csv"))

  # ── Table 2: By R Package ──
  display_cats <- intersect(ALL_CATEGORIES, unique(samples$category))

  cat(strrep("=", 60), "\n")
  cat(" By R Package\n")
  cat(strrep("=", 60), "\n")

  pkg_summary <- samples |>
    count(package, category) |>
    pivot_wider(names_from = category, values_from = n, values_fill = 0)

  pkg_summary <- pkg_summary |>
    mutate(Total = rowSums(across(where(is.numeric)))) |>
    arrange(desc(Total))

  for (cc in display_cats) {
    if (!(cc %in% names(pkg_summary))) pkg_summary[[cc]] <- 0L
  }

  pkg_out <- pkg_summary |>
    select(Package = package, all_of(display_cats), Total) |>
    mutate(across(where(is.numeric), ~ if_else(.x == 0, "", as.character(.x))))

  print_table(names(pkg_out), pkg_out)
  cat("\n")

  # ── Table 3: Top R Functions ──
  cat(strrep("=", 60), "\n")
  cat(sprintf(" Top %d R Functions (by total samples)\n", top_n))
  cat(strrep("=", 60), "\n")

  func_summary <- samples |>
    mutate(jit_context = if_else(is.na(jit_context), "<no-jit-context>", jit_context)) |>
    count(jit_context, category) |>
    pivot_wider(names_from = category, values_from = n, values_fill = 0)

  func_summary <- func_summary |>
    mutate(Total = rowSums(across(where(is.numeric)))) |>
    arrange(desc(Total)) |>
    slice_head(n = top_n)

  for (cc in display_cats) {
    if (!(cc %in% names(func_summary))) func_summary[[cc]] <- 0L
  }

  func_out <- func_summary |>
    mutate(`%` = sprintf("%.1f%%", 100 * Total / total)) |>
    select(`R Function` = jit_context, all_of(display_cats), Total, `%`) |>
    mutate(across(where(is.numeric), ~ if_else(.x == 0, "", as.character(.x))))

  print_table(names(func_out), func_out)
  cat("\n")

  # ── Table 4: C-builtins detail ──
  cbuiltins <- samples |>
    filter(category == "c-builtins") |>
    count(leaf_sym, sort = TRUE) |>
    mutate(pct = sprintf("%.1f%%", 100 * n / sum(n)))

  if (nrow(cbuiltins) > 0) {
    cat(strrep("=", 60), "\n")
    cat(" C-Builtins Detail (leaf symbols)\n")
    cat(strrep("=", 60), "\n")
    cbuiltins_out <- cbuiltins |>
      slice_head(n = top_n) |>
      mutate(n = as.character(n))
    print_table(c("Symbol", "Samples", "%"), cbuiltins_out)
    cat("\n")

    write_csv(cbuiltins, file.path(perf_dir, "cbuiltins_detail.csv"))
  }

  # ── Table 5: Unmatched detail ──
  unmatched <- samples |>
    filter(category == "unmatched") |>
    count(leaf_dso, leaf_sym, sort = TRUE)

  if (nrow(unmatched) > 0) {
    cat(strrep("=", 60), "\n")
    cat(" Unmatched Samples (unknown DSO/symbol)\n")
    cat(strrep("=", 60), "\n")
    unmatched_out <- unmatched |>
      slice_head(n = top_n) |>
      mutate(n = as.character(n))
    print_table(c("DSO", "Symbol", "Samples"), unmatched_out)
    cat("\n")
  }

  message("CSV files written to ", perf_dir)
}

main()
