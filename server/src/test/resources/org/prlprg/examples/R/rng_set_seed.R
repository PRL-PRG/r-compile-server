# The RNG after `set.seed`, at top level and in a function.
draw <- function(n) {
  x <- runif(n, 1, 10)
  y <- rnorm(n)
  i <- sample(n)
  j <- sample.int(10L, n, replace = TRUE)
  s <- 0
  for (k in 1:n) {
    s <- s + x[[i[[k]]]] * y[[k]] + j[[k]]
  }
  s
}

set.seed(42)
top <- c(runif(2), rnorm(2), sample(5), sample.int(5L, 3L))
total <- 0
for (r in 1:12) {
  total <- total + draw(5L)
}
c(top, total)
