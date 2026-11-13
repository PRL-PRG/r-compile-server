# The RNG after `set.seed`, at top level and in a function, with named and computed arguments.
draw <- function(n, seed) {
  if (seed > 0) set.seed(seed)
  x <- runif(n * 2, min = -1, max = 1)
  y <- rnorm(n, mean = runif(1), sd = 2)
  i <- sample(1:n, n)
  j <- sample.int(10L, n, replace = TRUE)
  s <- 0
  for (k in 1:n) {
    s <- s + x[[i[[k]]]] * y[[k]] + j[[k]]
  }
  s
}

null_seed <- is.null(set.seed(42))
top <- c(runif(2), rnorm(2, 1, sd = 3), sample(5), sample.int(5L, 3L))
total <- 0
for (r in 1:12) {
  total <- total + draw(5L, r %% 2)
}
c(null_seed, top, total)
