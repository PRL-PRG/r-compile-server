f <- function(x, y) {
  names(x) <- c("a", "b")
  names(y) <- "p"
  r <- vector("list", 8L)
  r[[1L]] <- x + y
  r[[2L]] <- y - x
  r[[3L]] <- 2 * y
  r[[4L]] <- x["b"] > y
  r[[5L]] <- -y
  r[[6L]] <- abs(x["a"] - 9)
  r[[7L]] <- x["b"] / y
  r[[8L]] <- y["p"] + x["a"]
  r
}

f(c(1, 2), 5)
