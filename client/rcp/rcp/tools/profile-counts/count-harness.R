#!/usr/bin/env Rscript
#
# Per-benchmark counting harness. Not run directly: the shared benchmark runner
# (rsh's inst/benchmarks/run-benchmarks.sh) drives it via the HARNESS_BIN
# override, so benchmark discovery, parallelism, per-run output files and
# pass/fail reporting are all reused from there. `make -C tools/profile-counts`
# wires it up.
#
# It compiles the benchmark's `execute` under RCP with runtime per-instruction
# counting enabled (rcp_count_enable), runs it, and writes <name>.csv with
# columns instruction,call_count into --output-dir. Counting is a runtime option,
# so no special RCP build is needed. run-benchmarks.sh launches one R process per
# benchmark, so the counters start at zero and the CSV reflects only this
# benchmark.
#
# Invoked (by run-benchmarks.sh) as:
#   count-harness.R --output-dir DIR --name NAME [--rcp] --runs N <benchmark-without-ext>

suppressPackageStartupMessages(library(rcp))

# Counts are large integers; render them in full, not scientific notation.
options(scipen = 999)

# Match harness.R's compilation settings so the counted code matches benchmarks.
RCP_OPTS <- list(optimize = 3L, cache = FALSE, cc_opt = 3L)

args <- commandArgs(trailingOnly = TRUE)
o <- list(output_dir = NA_character_, name = NA_character_, runs = 1L,
          benchmark = NA_character_, param = NA_integer_)
i <- 1L
while (i <= length(args)) {
  a <- args[i]
  if (a == "--output-dir") { i <- i + 1L; o$output_dir <- args[i] }
  else if (a == "--name")  { i <- i + 1L; o$name <- args[i] }
  else if (a == "--runs")  { i <- i + 1L; o$runs <- as.integer(args[i]) }
  # Benchmark-type flags from the shared runner: counting always uses RCP.
  else if (a %in% c("--rcp", "--bc", "--rsh")) { }
  else if (a == "--rsh-cc-opt") { i <- i + 1L }          # ignore its value too
  else if (startsWith(a, "--")) stop("Unknown option: ", a)
  else if (is.na(o$benchmark)) o$benchmark <- a
  else if (is.na(o$param)) o$param <- as.integer(a)
  i <- i + 1L
}
if (is.na(o$benchmark)) stop("Missing benchmark")
if (is.na(o$output_dir)) stop("Missing --output-dir")
if (is.na(o$name)) o$name <- basename(o$benchmark)

# Resolve the output dir to absolute now, before sourcing the benchmark setwd()s
# into its own directory (so any relative source()/data files there resolve).
out_dir <- normalizePath(o$output_dir, mustWork = FALSE)
setwd(dirname(o$benchmark))
source(paste0(basename(o$benchmark), ".R"))

if (is.na(o$param)) o$param <- formals(execute)[[1]]

# Enable counting before compiling so `execute' (and anything the RCP JIT
# compiles while it runs) is instrumented; reset so the vector starts at zero.
rcp::rcp_count_enable()
rcp::rcp_count_reset()

cf <- rcp::rcp_cmpfun(execute, options = RCP_OPTS)
attr(cf, "stats") <- NULL
for (k in seq_len(o$runs)) {
  gc(full = TRUE)
  set.seed(1)
  invisible(cf(o$param))
}

counts <- rcp::rcp_get_counts()
df <- data.frame(instruction = names(counts),
                 call_count = as.numeric(counts),
                 stringsAsFactors = FALSE)
# Keep only instructions this benchmark actually executed; the aggregator fills
# the rest with 0 when it builds the matrix.
df <- df[df$call_count > 0, , drop = FALSE]

out <- file.path(out_dir, paste0(o$name, ".csv"))
dir.create(dirname(out), recursive = TRUE, showWarnings = FALSE)
write.csv(df, out, row.names = FALSE)
