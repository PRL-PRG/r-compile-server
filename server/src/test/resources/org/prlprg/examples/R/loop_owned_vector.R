# Loops that write a vector in place. Each function also reads the vector where a write to a shared
# copy would show.

# An element read before the inner loop and used after it.
f1 <- function(n) {
  v <- rep(0L, n)
  # A write before the loop, so the vector that enters it is a copy that nothing else holds.
  v[1] <- 0L
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

# A deopt in the middle of the loop: in the last call, an element of `w` is real.
f4 <- function(n, w) {
  v <- rep(0L, n)
  v[1] <- 0L
  for (i in 1:n) {
    j <- i
    while (j <= n) {
      v[j] <- v[j] + w[[i]]
      j <- j + i
    }
  }
  v
}

# The loop's vector is the return value.
f5 <- function(n) {
  v <- rep(0L, n)
  v[1] <- 0L
  for (i in 1:n) v[i] <- i * 2L
  v
}

for (k in 1:12) {
  f1(6)
  f2(4)
  f4(3, list(1L, 2L, 3L))
  f5(3)
}

list(f1(7), f2(5), f4(6, list(1L, 2L, 0.5, 4L, 5L, 6L)), f4(3, list(1L, 2L, 3L)), f5(4))
