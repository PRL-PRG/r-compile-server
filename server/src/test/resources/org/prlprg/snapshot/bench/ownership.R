# Driver for `org.prlprg.snapshot.bench.OwnershipBenchmarkQuery`.
#
# `bench.R` and `optbench.R` are prepended to this file, so `report` is already defined.

# `report`, with the copy counts of each row as extra columns, and `dups.ratio`: each row's `dups`
# relative to the first (`<none>`) row's.
reportOwnership <- function(removed, loc, time, same.as, dups, fir.dups, fir.dups.shallow) {
  report(
    removed, loc, time, same.as,
    dups = dups,
    fir.dups = fir.dups,
    fir.dups.shallow = fir.dups.shallow,
    dups.ratio = if (is.na(dups[1]) || dups[1] == 0) NA else round(dups / dups[1], 3)
  )
}
