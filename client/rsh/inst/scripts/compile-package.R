#!/usr/bin/env Rscript

# Script to compile a package and store compilation results to CSV

args <- commandArgs(trailingOnly = TRUE)

package_name <- NULL
output_csv <- NULL
use_cache <- FALSE
output_dir <- NULL

i <- 1
while (i <= length(args)) {
  arg <- args[i]
  if (arg == "--cache") {
    use_cache <- TRUE
  } else if (arg == "--keep-output") {
    if (i + 1 > length(args)) {
      cat("Error: --keep-output requires a directory argument\n")
      quit(status = 1)
    }
    i <- i + 1
    output_dir <- args[i]
  } else if (is.null(package_name)) {
    package_name <- arg
  } else if (is.null(output_csv)) {
    output_csv <- arg
  } else {
    cat("Error: Unknown argument:", arg, "\n")
    quit(status = 1)
  }
  i <- i + 1
}

if (is.null(package_name) || is.null(output_csv)) {
  cat("Usage: Rscript compile_package.R <package_name> <output_csv> [--cache] [--keep-output <dir>]\n")
  cat("  package_name:      Name of the package to compile\n")
  cat("  output_csv:        Path to the output CSV file\n")
  cat("  --cache:           Enable caching (default: disabled)\n")
  cat("  --keep-output <dir>: Keep compiled artifacts in the specified directory\n")
  quit(status = 1)
}

# Load rsh package
if (!requireNamespace("rsh", quietly = TRUE)) {
  stop("rsh package is not installed")
}

library(rsh)

cat("Compiling package:", package_name, "\n")
cat("Output file:", output_csv, "\n")
cat("Caching:", if (use_cache) "enabled" else "disabled", "\n")
if (!is.null(output_dir)) {
  cat("Output directory:", output_dir, "\n")
}

options <- list(cache = use_cache)
if (!is.null(output_dir)) {
  options$output_dir <- output_dir
}

tryCatch({
  results <- rsh_cmppkg(package_name, options = options, quiet = FALSE)

  write.csv(results, file = output_csv, row.names = FALSE)

  cat("\nResults written to:", output_csv, "\n")

  n_success <- sum(is.na(results$error))
  n_error <- sum(!is.na(results$error))
  cat("Summary: ", n_success, " compiled, ", n_error, " failed\n", sep = "")

}, error = function(e) {
  cat("Error compiling package:", e$message, "\n")
  quit(status = 1)
})
