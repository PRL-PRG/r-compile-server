# `for` over `a:b` that counts up, down, or once. The bodies are order-sensitive, so a wrong start
# or direction changes the result. `f` is trained on integer ranges, then given a real one
# (`1.5:4`), where the integer assumption fails.
f <- function(a, b) {
  acc <- 0L
  for (i in a:b) acc <- acc * 3L + i
  acc
}

# A real accumulator, over integer ranges and a real one (`1.5:4`).
h <- function(a, b) {
  acc <- 0
  for (i in a:b) acc <- acc * 3 + i
  acc
}

# Nested ranges that depend on the outer element, and a `next`.
g <- function(n) {
  acc <- 0L
  for (i in 1:n) {
    for (j in i:n) acc <- acc * 2L + j
    for (j in n:i) {
      if (j == 2L) next
      acc <- acc - j
    }
  }
  acc
}

for (k in 1:12) {
  f(1, 5)
  f(5, 1)
  h(1, 5)
  g(4)
}

list(
  f(1, 5), f(5, 1), f(1, 1), f(1, 0), f(-3, 2.5), f(2, -3), f(1.5, 4),
  h(1.5, 4), h(3, 1),
  g(4), g(1), g(0), g(-2)
)
