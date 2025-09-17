execute <- function(size = 30000L) {
  f <- function(i) { a <- (i-10000):(i+10000); c(a[1],a[length(a)]) }
  g <- function(n) { b <- 0; for (i in 1:n) b <- b + f(i); b }
  g(size)
}