# A compiled S3 method reads `substitute(x)` after `UseMethod`, which forced the promise of `x`. The
# method still sees the caller's expression: GNU-R gives "obj" in both calls.
m <- function(x, ...) UseMethod("m")
m.probe <- function(x, ...) deparse(substitute(x))
d <- function(x, ...) deparse(substitute(x))
obj <- structure(list(), class = "probe")
for (i in 1:12) { m(obj); d(obj) }
list(m(obj), d(obj))
