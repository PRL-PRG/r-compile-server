f <- function(x, s) {
  r <- vector("list", 3L)
  r[[1L]] <- list(x, s, NULL)
  r[[2L]] <- list(x, b = s)
  r[[3L]] <- list()
  r
}

f(c(1, 2), "a")
