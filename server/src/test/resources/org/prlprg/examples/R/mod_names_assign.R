f <- function(x, l) {
  r <- vector("list", 4L)
  names(x) <- c("a", "b", "c")
  r[[1L]] <- x
  names(x) <- c("p", "q")
  r[[2L]] <- x
  names(x) <- NULL
  r[[3L]] <- x
  names(l) <- c("u", "v")
  r[[4L]] <- l
  r
}

f(c(1, 2, 3), vector("list", 2L))
