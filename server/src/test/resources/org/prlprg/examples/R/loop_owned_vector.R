# Loops that write a vector in place. Each function also reads the vector where a write to a shared
# copy would show.

# An element read before the inner loop and used after it.
f1 <- function(n) {
  v <- rep(0L, n)
  acc <- 0L
  for (i in 1:n) {
    before <- v[i]
    j <- i
    while (j <= n) {
      v[j] <- v[j] + i
      j <- j + i
    }
    acc <- acc * 3L + before + v[i]
  }
  list(acc, v)
}

# An alias made in the loop.
f2 <- function(n) {
  v <- rep(0L, n)
  old <- v
  for (i in 1:n) {
    old <- v
    j <- i
    while (j <= n) {
      v[j] <- i
      j <- j + 1L
    }
  }
  list(old, v)
}

# A deopt in the middle of the loop: an element becomes real.
f4 <- function(n) {
  v <- rep(0L, n)
  for (i in 1:n) {
    j <- i
    while (j <= n) {
      v[j] <- v[j] + i
      if (i == 3L && j == n) v[1] <- 0.5
      j <- j + i
    }
  }
  v
}

for (k in 1:12) {
  f1(6)
  f2(4)
  f4(2)
}

list(f1(7), f2(5), f4(6), f4(2))
