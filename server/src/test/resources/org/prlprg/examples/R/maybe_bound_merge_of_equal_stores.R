# `x` is bound only in the `c2` arm, so it is maybe bound at the guard of `count` after the outer
# join, and its promotion stores it back. The inner join of the two equal stores has one origin
# and no phi, but the join of `c0` merges 0 and 1, so it needs one.
count <- 0
f <- function(c2, c0, c1) {
  r <- 5
  if (c2) {
    x <- 0
    if (c0) {
      if (c1) x <- 1 else x <- 1
      count <<- count + 1
    }
    r <- x
  }
  count <<- count + 1
  r
}

# warmup
for (i in 1:12) {
  f(TRUE, TRUE, TRUE)
  f(TRUE, TRUE, FALSE)
  f(TRUE, FALSE, TRUE)
  f(FALSE, TRUE, TRUE)
}

f(TRUE, TRUE, TRUE)
