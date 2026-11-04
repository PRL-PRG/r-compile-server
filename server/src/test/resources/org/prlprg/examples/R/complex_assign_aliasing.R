# Each case modifies a vector that something else also holds, which must not see the change.
alias_local <- function() {
  x <- c(1, 2, 3)
  y <- x
  x[1] <- 10
  c(x, y)
}

modify_param <- function(v) {
  v[1] <- 20
  v[[2]] <- 21
  v
}
alias_param <- function() {
  x <- c(1, 2, 3)
  r <- modify_param(x)
  c(x, r)
}

keep_param <- function(v) {
  w <- v
  w[1] <- 0
  c(v, w)
}

saved <- NULL
save_and_index <- function(v) {
  saved <<- v
  1
}
alias_in_index <- function() {
  x <- c(1, 2, 3)
  x[save_and_index(x)] <- 30
  c(x, saved)
}

alias_closure <- function() {
  x <- c(1, 2, 3)
  reads_binding <- function() x
  holds_value <- (function(a) {
    force(a)
    function() a
  })(x)
  x[2] <- 40
  c(reads_binding(), holds_value())
}

alias_in_loop <- function(n) {
  x <- c(0, 0, 0)
  y <- 0
  for (i in 1:n) {
    x[i] <- i
    if (i == 1) y <- x
  }
  c(x, y)
}

super_assign <- function() {
  x <- c(1, 2, 3)
  y <- x
  f <- function() x[1] <<- 50
  f()
  c(x, y)
}

fresh_each_call <- function() {
  x <- 1:3
  x[1] <- 60L
  y <- c(1, 2, 3)
  y[[2]] <- 61
  c(x, y)
}

returned <- function() {
  make <- function() {
    v <- c(1, 2)
    v
  }
  a <- make()
  b <- a
  b[1] <- 70
  c(a, b)
}

self_value <- function() {
  x <- c(1, 2)
  x[c(2, 1)] <- x
  l <- list(1, 2)
  l[[1]] <- l
  list(x, l)
}

all_cases <- function() {
  list(
    alias_local(),
    alias_param(),
    keep_param(c(1, 2)),
    alias_in_index(),
    alias_in_loop(3),
    super_assign(),
    fresh_each_call(),
    returned(),
    self_value(),
    alias_closure()
  )
}

# warmup
for (i in 1:12) {
  r <- all_cases()
}
stopifnot(identical(r, all_cases()))
r
