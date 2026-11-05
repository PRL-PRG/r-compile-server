f <- function(x, l, k) {
  g <- function(e, k) e * k
  r <- vector("list", 3L)
  r[[1L]] <- lapply(x, g, k)
  names(x) <- c("a", "b", "c")
  r[[2L]] <- lapply(x, g, k = 2L)
  r[[3L]] <- lapply(l, function(e) e)
  r
}

f(1:3, vector("list", 2L), 1.5)
