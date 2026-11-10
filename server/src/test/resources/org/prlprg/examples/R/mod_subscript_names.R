f <- function(x, l) {
  r <- vector("list", 10L)
  names(x) <- c("a", "b", "c")
  r[[1L]] <- x["b"]
  r[[2L]] <- x[["c"]]
  r[[3L]] <- x[2L]
  r[[4L]] <- x["z"]
  x["a"] <- x["a"] + x["c"]
  r[[5L]] <- x
  x[["b"]] <- 7
  x["d"] <- 8
  r[[6L]] <- x
  names(l) <- c("u", "v")
  r[[7L]] <- l["v"]
  r[[8L]] <- l[["u"]]
  l[["w"]] <- 3
  r[[9L]] <- l
  y <- c(1, 2)
  y["p"] <- 3
  r[[10L]] <- y
  r
}

f(c(1, 2, 3), list(1L, "s"))
