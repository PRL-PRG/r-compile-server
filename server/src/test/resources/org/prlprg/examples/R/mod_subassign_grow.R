f <- function(l, x, s) {
  r <- vector("list", 6L)
  l[[1L]] <- 1
  l[[3L]] <- "c"
  r[[1L]] <- l
  x[[4L]] <- 4L
  r[[2L]] <- x
  x[6L] <- 6
  r[[3L]] <- x
  names(s) <- c("a", "b")
  s[[4L]] <- "d"
  r[[4L]] <- s
  m <- list()
  for (i in 1:3) m[[i]] <- i
  r[[5L]] <- m
  m[5] <- list(5)
  r[[6L]] <- m
  r
}

f(list(), c(1L, 2L), c("x", "y"))
