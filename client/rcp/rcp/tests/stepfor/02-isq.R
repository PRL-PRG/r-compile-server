source("helpers.R")

# Compact integer sequence (ISQSXP): `for (i in a:b)` never allocates a vector;
# STEPFOR computes each element from (n1, n2, index). It is specialized on the
# iteration direction (increasing vs decreasing), decided once in STARTFOR from
# n1 <= n2. Both directions, the single-element and reversed-through-zero cases,
# and the classic `1:0` gotcha (length 2, not empty) must all match GNU R.

.check_all("isq.increasing",
  quote(function() { acc <- integer(0); for (i in 1:5) acc <- c(acc, i); acc }),
  1:5)

.check_all("isq.decreasing",
  quote(function() { acc <- integer(0); for (i in 5:1) acc <- c(acc, i); acc }),
  5:1)

.check_all("isq.single",
  quote(function() { acc <- integer(0); for (i in 7:7) acc <- c(acc, i); acc }),
  7L)

.check_all("isq.through.zero.up",
  quote(function() { acc <- integer(0); for (i in -3:3) acc <- c(acc, i); acc }),
  -3:3)

.check_all("isq.through.zero.down",
  quote(function() { acc <- integer(0); for (i in 3:-3) acc <- c(acc, i); acc }),
  3:-3)

# `1:0` is the well-known R gotcha: it is c(1L, 0L), a decreasing range of
# length 2, not an empty sequence.
.check_all("isq.one.to.zero",
  quote(function() { acc <- integer(0); for (i in 1:0) acc <- c(acc, i); acc }),
  c(1L, 0L))

.check_all("isq.negative.block",
  quote(function() { acc <- integer(0); for (i in -1:-4) acc <- c(acc, i); acc }),
  -1:-4)

.check_all("isq.value.after.loop.up",
  quote(function() { for (i in 1:5) NULL; i }),
  5L)

.check_all("isq.value.after.loop.down",
  quote(function() { for (i in 5:1) NULL; i }),
  1L)

# The value object handed to each iteration must not be aliased across
# iterations: capturing it must snapshot, not track the reused slot.
.check_all("isq.value.escapes.up",
  quote(function() {
    keep <- NULL
    for (i in 1:5) if (is.null(keep)) keep <- i
    keep
  }),
  1L)

.check_all("isq.value.escapes.all.down",
  quote(function() {
    out <- list()
    for (i in 5:1) out[[length(out) + 1L]] <- i
    unlist(out)
  }),
  5:1)

# Rebinding the loop variable in the body must not corrupt the range walk.
.check_all("isq.rebind.in.body",
  quote(function() {
    acc <- integer(0)
    for (i in 1:5) { i <- i * 10L; acc <- c(acc, i) }
    acc
  }),
  c(10L, 20L, 30L, 40L, 50L))

# Direction is resolved from the *runtime* endpoints, so a range whose
# direction depends on an argument must pick the right variant each call.
.check_all("isq.dynamic.direction",
  quote(function(a, b) { acc <- integer(0); for (i in a:b) acc <- c(acc, i); acc }),
  10:6,
  mkargs = function() list(10L, 6L))

# Larger ranges, both directions (kept modest so the suite stays fast).
.check_all("isq.stress.up",
  quote(function() { s <- 0L; for (i in 1:2000) s <- s + i; s }),
  sum(1:2000))

.check_all("isq.stress.down",
  quote(function() { s <- 0L; for (i in 2000:1) s <- s + i; s }),
  sum(1:2000))

.summary("02-isq.R")
