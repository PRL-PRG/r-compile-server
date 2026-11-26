# Driver for `org.prlprg.snapshot.bench.SynergyBenchmarkQuery`.
#
# `bench.R` and `optbench.R` are prepended to this file, so `toCsv` is already defined.

# Log and return the table of results: the `<none>` baseline, one row per removed set, then the
# `<none> (rerun)` baseline.
#
# `removed`, `loc`, `time`, `same.as`, `size` and `expected` are parallel vectors. `slowdown` is
# relative to the first `<none>` row. `expected` is the product of the single-removal slowdowns of
# the set's members, so `synergy` above 1 means the members cover for each other: removing all of
# them costs more than removing each one does.
#
# The noise floor is the relative difference between the two `<none>` rows, which run the same
# code, but at least `noise.min`, because one pair of runs usually underestimates the noise.
# `significant` says whether `synergy` is farther from 1 than the floor.
reportSynergy <- function(removed, loc, time, same.as, size, expected, noise.min) {
  baseline <- time[1]
  measuredNoise <- abs(time[match("<none> (rerun)", removed)] / baseline - 1)
  noise <- max(measuredNoise, noise.min, na.rm = TRUE)
  slowdown <- time / baseline
  synergy <- slowdown / expected
  res <- data.frame(
    removed = removed,
    size = size,
    time = signif(time, 4),
    slowdown = round(slowdown, 3),
    expected = round(expected, 3),
    synergy = round(synergy, 3),
    significant = ifelse(size == 0, NA, abs(synergy - 1) > noise),
    same.as = same.as,
    loc = loc
  )

  # Log to console, the farthest synergy from 1 first (`NA`s sort last)
  cat("Noise floor: ", round(noise, 3), " (measured: ", round(measuredNoise, 3), ")\n", sep = "")
  print(res[order(-abs(res$synergy - 1)), ])

  toCsv(res)
}
