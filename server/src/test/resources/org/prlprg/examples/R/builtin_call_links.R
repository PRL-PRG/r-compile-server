# A builtin call counts the registers that outlive it and passes its arguments in cells that don't
# count them (`Fir_call_builtin`), so the builtin writes into an operand that nothing else
# references. Each function reads a value that such a write would change if it were live. Each
# runs at length 1 and 3. `rep.int`, as `rep(1.5, len)` fails in optimized code (a known defect).

# An operand that is read after the call.
read_after <- function(n, len) {
  x <- rep.int(1.5, len)
  s <- 0
  for (k in 1:n) {
    y <- x + 1
    s <- s + x[[1L]] * 10 + y[[len]]
  }
  list(x, s)
}

# A live alias of a dead operand: `as.numeric` returns its argument.
alias_as_numeric <- function(n, len) {
  s <- 0
  for (k in 1:n) {
    x <- rep.int(1.5, len)
    a <- as.numeric(x)
    y <- x * 2
    s <- s + a[[1L]] * 10 + y[[len]]
  }
  s
}

# A live alias of a dead operand through a loop phi.
alias_phi <- function(n, len) {
  x <- rep.int(1.5, len)
  old <- x
  for (k in 1:n) {
    old <- x
    x <- x + 1
  }
  list(old, x)
}

# A parameter as operand: the caller reads its vector after the call.
param_inner <- function(v) v * 2 + 1
param_outer <- function(n, len) {
  s <- 0
  for (k in 1:n) {
    v <- rep.int(1.5, len)
    w <- param_inner(v)
    s <- s + v[[1L]] * 10 + w[[len]]
  }
  s
}

# A vector and constants: a write into a constant changes the second call.
const_loop <- function(n, len) {
  x <- rep.int(1.5, len)
  for (k in 1:n) x <- x * 2 + 1
  x
}

# A lazy argument that the callee forces late: the caller reads `x` after the call.
lazy_inner <- function(a, b) {
  b
  a
}
lazy_outer <- function(n, len) {
  s <- 0
  for (k in 1:n) {
    x <- rep.int(1.5, len)
    y <- lazy_inner(x * 2, x[[1L]])
    s <- s + x[[1L]] * 10 + y[[len]]
  }
  s
}

# Unary minus, `sqrt` and `abs` of values that are read afterwards.
unary <- function(n, len) {
  s <- 0
  for (k in 1:n) {
    x <- rep.int(2.25, len)
    a <- -x
    b <- sqrt(x)
    m <- abs(a)
    s <- s + x[[1L]] * 1000 + a[[len]] * 100 + b[[1L]] * 10 + m[[len]]
  }
  s
}

# The same register two times, dead after the call.
same_twice <- function(n, len) {
  s <- 0
  for (k in 1:n) {
    x <- rep.int(1.5, len)
    y <- x * x
    z <- y + y
    s <- s + z[[1L]] + z[[len]]
  }
  s
}

# A dead register that is two arguments: both cells count it, so `names<-` doesn't give the vector
# its own names. Only builtin calls, so that `x` is only in a register, and nothing after the call,
# so that `x` is dead there.
named_self <- function(len) {
  x <- as.character(seq_len(len))
  `names<-`(x, x)
}
self_names <- function(len) names(names(named_self(len)))

run <- function(len) {
  list(
    read_after(3L, len), alias_as_numeric(3L, len), alias_phi(3L, len), param_outer(3L, len),
    const_loop(3L, len), const_loop(3L, len), lazy_outer(3L, len), unary(3L, len),
    same_twice(3L, len), self_names(len)
  )
}

for (i in 1:12) {
  run(1L)
  run(3L)
}
# The check stops, as the unoptimized oracle has registers too.
got <- list(run(1L), run(3L))
if (!is.null(got[[1L]][[10L]]) || !is.null(got[[2L]][[10L]])) stop("self_names: names have names")
got
