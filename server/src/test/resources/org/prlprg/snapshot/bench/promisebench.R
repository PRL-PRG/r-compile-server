# Driver for `org.prlprg.snapshot.bench.PromiseBenchmarkQuery`, and for the copy counts of
# `OwnershipBenchmarkQuery`.
#
# `bench.R` is prepended to this file, so `cc` (load a compiled module, run the example's warmup,
# then `timeCall` in it) is already defined. The modules are compiled with `-DFIR_STATS`, so they
# have the runtime's `Fir_stats_get` and `Fir_stats_reset`.

# `bench.R`'s `timeCall`, but returns the runtime statistics of one call instead of its time.
timeCall <- function(env) {
  .Call("Fir_stats_reset")
  tryCatch(eval(call, env), error = function(e) warning(e))
  .Call("Fir_stats_get")
}

# The `counters` (names of `Fir_stats_get`'s statistics) of one call in the compiled module in
# `path`, in that order (`NA` for one the runtime doesn't have).
statsOne <- function(call, path, counters) {
  call <<- substitute(call)
  as.numeric(cc(path)[counters])
}

# Log and return the table of statistics: one row per module in `...` (each a path to a compiled
# module, or `NA` if it didn't compile).
run <- function(call, ...) {
  call <<- substitute(call)

  paths <- list(...)
  rows <- lapply(paths, function(path) {
    if (is.na(path)) NULL else tryCatch(cc(path), error = function(e) { warning(e); NULL })
  })
  counters <- names(Find(Negate(is.null), rows))
  if (is.null(counters)) {
    stop("no module ran")
  }
  res <- as.data.frame(do.call(rbind, lapply(rows, function(row) {
    if (is.null(row)) setNames(rep(NA_real_, length(counters)), counters) else row
  })))
  res <- cbind(module = names(paths), res)

  ratio <- function(x, y) ifelse(is.na(y) | y == 0, NA, round(x / y, 4))
  res$ratio.may.reflect <- ratio(res$created.may.reflect, res$created)
  res$ratio.reflected <- ratio(res$reflected, res$created.may.reflect)
  res$ratio.unforced <- 1 - ratio(res$forced, res$created)

  # Log to console
  print(res, row.names = FALSE)

  # Return CSV
  csvConn <- textConnection("csv", "w")
  write.csv(res, file = csvConn, row.names = FALSE)
  close(csvConn)
  csv
}
