f <- function(n) {
  r <- vector("list", 11L)
  r[[1L]] <- matrix(nrow = n, ncol = n)
  r[[2L]] <- matrix(1:6, nrow = 2)
  r[[3L]] <- matrix(c(1.5, 2.5), ncol = 4)
  r[[4L]] <- matrix("s", 2, 1)
  r[[5L]] <- matrix(1:3)
  r[[6L]] <- matrix(nrow = 0, ncol = n)
  m <- matrix(nrow = n, ncol = 2)
  m[[2, 1]] <- 5
  m[[n, 2]] <- 7L
  r[[7L]] <- m
  r[[8L]] <- m[[2, 1]]
  r[[9L]] <- m[n, 2]
  m[1, 2] <- 4
  r[[10L]] <- m
  r[[11L]] <- `[[<-`(m, 1, 1, value = 3)
  r
}

f(3)
