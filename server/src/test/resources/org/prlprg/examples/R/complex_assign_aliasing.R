# Each case modifies a vector that something else also holds, which must not see the change.
alias_local <- function() {
  x <- c(1, 2, 3)
  y <- x
  x[1] <- 10
  c(x, y)
}

# Like the former example `bench_simple_vector_for`, whose `x` the optimizer keeps in registers.
alias_registers <- function(n) {
  x <- vector(length=n)
  y <- x
  for (i in 1:n) {
    x[[i]] <- i
  }
  y
}
alias_registers_in_loop <- function(n) {
  x <- vector(length=n)
  y <- 0
  for (i in 1:n) {
    x[[i]] <- i
    if (i == 1) y <- x
  }
  y
}
# Like the former example `bench_ai_awf_sieve`, whose store the optimizer turns into a `dup` and a vector write.
alias_dup <- function(n) {
  x <- rep(TRUE, n)
  y <- x
  j <- 1
  while (j <= n) {
    x[j] <- FALSE
    j <- j + 1
  }
  c(x, y)
}
alias_dup_in_loop <- function(n) {
  x <- rep(TRUE, n)
  y <- 0
  j <- 1
  while (j <= n) {
    x[j] <- FALSE
    if (j == 1) y <- x
    j <- j + 1
  }
  c(x, y)
}

# Like `swap` of the former example `bench_ai_awf_permute`.
swap <- function(v, i, j) {
  t <- v[i]
  v[i] <- v[j]
  v[j] <- t
  v
}
alias_swap <- function(n) {
  x <- c(1L, 2L, n)
  r <- swap(x, 1, 3)
  c(x, r)
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
    alias_registers(3),
    alias_registers_in_loop(3),
    alias_dup(3),
    alias_dup_in_loop(3),
    alias_swap(3L),
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

# warmup (`alias_registers` first: the interpreter, which records the feedback, stops at the
# first case it doesn't support)
for (i in 1:12) {
  alias_registers(3)
  alias_registers_in_loop(3)
  alias_dup(3)
  alias_dup_in_loop(3)
  alias_swap(3L)
}
for (i in 1:12) {
  r <- all_cases()
}
stopifnot(identical(r, all_cases()))
r
