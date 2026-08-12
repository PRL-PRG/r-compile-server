#!/usr/bin/env Rscript
#
# Combine the two measurements into a throughput table:
#   * per-instruction execution counts  (make -C tools/profile-counts -> profiling/)
#   * geomean execution time per benchmark (make benchmark -> benchmarks/)
#
# For each benchmark, throughput = instructions executed in one run / geomean
# seconds per run, i.e. native instructions retired per second. Both inputs are
# per single execution (counting runs the benchmark once; each microbenchmark
# iteration times one execution), so the ratio is well-defined.
#
# Usage: throughput.R <profiling-dir> <benchmarks-dir> <output-csv>

options(scipen = 999)

args <- commandArgs(trailingOnly = TRUE)
if (length(args) != 3L) {
  cat("Usage: throughput.R <profiling-dir> <benchmarks-dir> <output-csv>\n")
  quit(status = 1L)
}
prof_dir <- args[1]
bench_dir <- args[2]
out_csv <- args[3]

# --- total instructions per benchmark (sum of per-opcode counts) ---
long_path <- file.path(prof_dir, "profile_long.csv")
if (!file.exists(long_path))
  stop("missing ", long_path, " -- run `make -C tools/profile-counts' first")
long <- read.csv(long_path, stringsAsFactors = FALSE)
tot <- tapply(long$call_count, long$benchmark, sum)
instr <- data.frame(benchmark = names(tot), instructions = as.numeric(tot),
                    stringsAsFactors = FALSE)

# --- geomean execution time (seconds) per benchmark ---
# microbenchmark stores one row per timed iteration with `time` in nanoseconds.
geomean <- function(x) exp(mean(log(x)))
root <- normalizePath(bench_dir, mustWork = TRUE)
bfiles <- list.files(root, pattern = "\\.csv$", recursive = TRUE, full.names = TRUE)
times <- do.call(rbind, lapply(bfiles, function(f) {
  d <- read.csv(f, stringsAsFactors = FALSE)
  if (!("time" %in% names(d)) || nrow(d) == 0L) return(NULL)
  label <- sub("\\.csv$", "", substring(normalizePath(f), nchar(root) + 2L))
  data.frame(benchmark = label, time_s = geomean(d$time) / 1e9,
             stringsAsFactors = FALSE)
}))
if (is.null(times))
  stop("no benchmark timing CSVs found in ", root, " -- run `make benchmark' first")

# --- join + throughput ---
df <- merge(instr, times, by = "benchmark")
if (nrow(df) == 0L)
  stop("no benchmarks common to the counts and the timings")
df$throughput_insns_per_s <- df$instructions / df$time_s
df <- df[order(-df$throughput_insns_per_s), , drop = FALSE]

dir.create(dirname(normalizePath(out_csv, mustWork = FALSE)),
           recursive = TRUE, showWarnings = FALSE)
write.csv(df, out_csv, row.names = FALSE)
cat(sprintf("Wrote throughput for %d benchmark(s) to %s\n", nrow(df), out_csv))
