# `h` elides its frame. `lapply` calls `catch` from R, and its `tryCatch` catches an error of `b`,
# whose elided frame has a different parent. After `k` returns, `h` loads `x` from its own parent
# (1), not from `b`'s (100).
make_b <- function() {
  x <- 100
  function(n) if (n > 10) stop("too big") else n + x
}
for (i in 1:12) b <- make_b()
x <- 1
catch <- function(n) tryCatch(b(n), error = function(e) 0)
k <- function() lapply(20, catch)[[1]]
h <- function(n, test) if (test) k() + x else b(n) + x

for (i in 1:12) {
  h(i - 10, FALSE)
}

c(h(1, FALSE), h(1, TRUE))
