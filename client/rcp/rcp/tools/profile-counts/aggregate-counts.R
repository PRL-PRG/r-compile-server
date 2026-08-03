#!/usr/bin/env Rscript
#
# Combine the per-benchmark count CSVs that count-harness.R wrote (one
# <group>/<name>.csv per benchmark, via run-benchmarks.sh) into the final export:
#
#   profile_counts.csv  benchmark x instruction matrix of execution counts
#   profile_long.csv    tidy long form: benchmark,instruction,call_count
#
# All sorting/ordering happens here (rcp_get_counts returns counts unsorted in
# opcode order); the C side does no post-processing.
#
# Usage: aggregate-counts.R <results-dir>

options(scipen = 999)

args <- commandArgs(trailingOnly = TRUE)
dir <- if (length(args) >= 1L) args[1] else "."

root <- normalizePath(dir, mustWork = TRUE)
files <- list.files(root, pattern = "\\.csv$", recursive = TRUE, full.names = TRUE)
# Exclude our own aggregate outputs in case the dir is reused.
files <- files[!grepl("/profile_(counts|long)\\.csv$", files)]
if (length(files) == 0L) {
  cat("No per-benchmark count CSVs found in", root, "\n")
  quit(status = 1L)
}

long <- do.call(rbind, lapply(files, function(f) {
  d <- read.csv(f, stringsAsFactors = FALSE,
                colClasses = c(instruction = "character", call_count = "numeric"))
  if (nrow(d) == 0L) return(NULL)
  # Benchmark label = path relative to the results root, minus the .csv.
  label <- sub("\\.csv$", "", substring(normalizePath(f), nchar(root) + 2L))
  data.frame(benchmark = label, instruction = d$instruction,
             call_count = d$call_count, stringsAsFactors = FALSE)
}))

# Tidy long form, sorted for stable diffs.
long <- long[order(long$benchmark, -long$call_count), , drop = FALSE]
write.csv(long, file.path(root, "profile_long.csv"), row.names = FALSE)

# Pivot to a benchmark x instruction matrix; absent pairs are 0. Instruction
# columns ordered by total executions (busiest first) for readability.
benchmarks <- sort(unique(long$benchmark))
inst_totals <- tapply(long$call_count, long$instruction, sum)
instructions <- names(sort(inst_totals, decreasing = TRUE))

counts <- matrix(0, nrow = length(benchmarks), ncol = length(instructions),
                 dimnames = list(benchmarks, instructions))
counts[cbind(match(long$benchmark, benchmarks),
             match(long$instruction, instructions))] <- long$call_count
counts_df <- cbind(benchmark = rownames(counts),
                   as.data.frame(counts, check.names = FALSE))
write.csv(counts_df, file.path(root, "profile_counts.csv"), row.names = FALSE)

cat(sprintf("Wrote counts for %d benchmark(s) x %d instruction(s) to %s\n",
            length(benchmarks), length(instructions), root))
cat("  profile_counts.csv  (benchmark x instruction matrix)\n")
cat("  profile_long.csv    (tidy long form)\n")
