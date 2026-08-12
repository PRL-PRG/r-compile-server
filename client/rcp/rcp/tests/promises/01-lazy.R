# Core lazy-evaluation semantics of compiled promises:
# laziness, single-forcing (memoization), evaluation order, force(),
# default arguments (which are promises), and environment capture.
source("helpers.R")

## 1. An unused argument must NOT be forced ------------------------------------
local({
  flag <- new.env(); flag$hit <- FALSE
  f <- function(x, y) x                 # y never referenced
  g <- .cmp(f)
  stopifnot(g(1, { flag$hit <- TRUE; 2 }) == 1)
  stopifnot(isFALSE(flag$hit))          # promise for y stayed unforced
})

## 2. A forced argument is evaluated exactly once (memoization) ----------------
local({
  st <- new.env(); st$n <- 0L
  f <- function(x) x + x + x            # reference x three times
  g <- .cmp(f)
  r <- g({ st$n <- st$n + 1L; 7L })
  stopifnot(r == 21L)
  stopifnot(st$n == 1L)                 # evaluated once despite 3 uses
})

## 3. Left-to-right forcing order ---------------------------------------------
local({
  st <- new.env(); st$ord <- character()
  f <- function(a, b, c) a + b + c
  g <- .cmp(f)
  g({ st$ord <- c(st$ord, "a"); 1 },
    { st$ord <- c(st$ord, "b"); 2 },
    { st$ord <- c(st$ord, "c"); 3 })
  stopifnot(identical(st$ord, c("a", "b", "c")))
})

## 4. Laziness lets the value reflect mutation that happens before forcing -----
# The promise captures the *expression*, evaluated at force time.
.same0(function() {
  a <- 10
  k <- (function(z) { a <<- 999; z })(a + 1)  # mutate a, THEN force z
  c(a, k)                                      # k must be 11 (a was 10 at force)
})

## 5. Default arguments are promises evaluated in the function's own frame -----
.same(function(x, y = x + 1, z = y * 2) c(x, y, z),
      list(list(1), list(5), list(2, 100), list(2, 3, 4)))

## 6. Default argument referring to a local defined later in the body ----------
.same0(function() {
  f <- function(n = m * 2) { m <- 21; n }    # n's default sees m at force time
  f()
})

## 7. force() materialises the value early (classic factory pattern) ----------
local({
  f <- function(x) { force(x); function() x }
  g <- .cmp(f)
  h <- g(42)
  stopifnot(h() == 42)
  # even if a same-named binding changes afterwards, the captured value stands
  mk <- function(x) { force(x); function() x }
  mkc <- .cmp(mk)
  fns <- lapply(1:3, mkc)
  stopifnot(identical(vapply(fns, function(f) f(), numeric(1)), c(1, 2, 3)))
})

## 8. Promise body that is itself a call returning a closure -------------------
.same0(function() {
  g <- function(p) p                        # p forced -> returns a function
  f <- g(function(a) a + 1)
  f(41)
})

## 9. Nested promises: an argument whose value is another lazy call -----------
.same0(function() {
  inner <- function(a) a * 2
  outer <- function(b) b + 1
  outer(inner(inner(5)))                    # 5*2*2 + 1 = 21
})

## 10. Recursive function relying on lazy arg evaluation -----------------------
.same(function(n) {
  fib <- function(k) if (k < 2) k else fib(k - 1) + fib(k - 2)
  fib(n)
}, list(list(0), list(1), list(10), list(15)))

cat("OK\n")
