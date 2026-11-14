# `getter` captures `mk`'s frame, which holds the unforced promise of `C` in `prom`'s frame. The
# setter changes `C` before `getter()` forces the promise, so `prom(1)` is `c(99, 99)`.
mk <- function(a) function() a
prom <- function(n) {
  C <- c(1, 2, 3) + n
  getter <- mk(C)
  C[1] <- 99
  c(getter()[1], C[1])
}
for (i in 1:12) prom(i)
prom(1)
