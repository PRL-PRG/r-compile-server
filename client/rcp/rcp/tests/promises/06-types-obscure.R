# Return-value type fidelity from forced promises (including the unboxed
# scalar fast paths in rcpEval) plus a grab-bag of obscure-but-valid usages.
source("helpers.R")

## 1. Forcing a promise yields a correctly typed/valued result for every type -
.same(function(x) x, list(
  list(42L),                         # INTSXP scalar (unboxed path)
  list(3.14),                        # REALSXP scalar (unboxed path)
  list(TRUE),                        # LGLSXP scalar (unboxed path)
  list(NA), list(NA_integer_), list(NA_real_),
  list("hello"),                     # STRSXP
  list(1+2i),                        # CPLXSXP
  list(as.raw(255)),                 # RAWSXP
  list(NULL),                        # NULL
  list(1:1000),                      # long vector
  list(list(a = 1, b = list(2, 3))), # nested list
  list(c(x = 1, y = 2))              # named vector
))

## 2. Promise body computing each scalar type (exercises boxing in rcpEval) ---
.same0(function() (function(p) p)(1L + 2L))        # int
.same0(function() (function(p) p)(1.5 + 2.5))      # real
.same0(function() (function(p) p)(3L > 2L))        # logical
.same0(function() (function(p) p)(1:5 * 2L))       # int vector
.same0(function() (function(p) p)(seq_len(4)))     # ISQ/int seq

## 3. Promise evaluating to an invisible value ---------------------------------
.same0(function() {
  f <- function(p) p
  v <- f(invisible(99))
  v + 1
})

## 4. Promise body with rich control flow -------------------------------------
.same(function(x) {
  g <- function(p) {
    if (p > 0) {
      s <- 0
      for (i in seq_len(p)) s <- s + i
      s
    } else if (p == 0) {
      0L
    } else {
      r <- p; while (r < -1) r <- r + 1; r
    }
  }
  g(x)
}, list(list(5L), list(0L), list(-4L)))

## 5. switch() driven by a lazily-forced argument -----------------------------
.same(function(key) {
  pick <- function(k) switch(k, a = "alpha", b = "beta", "default")
  pick(key)
}, list(list("a"), list("b"), list("zzz")))

## 6. Promise that writes to an enclosing environment via <<- ------------------
.same0(function() {
  acc <- 0
  f <- function(p) p                 # forcing p runs the <<- side effect
  f({ acc <<- acc + 10; acc })
  acc
})

## 7. eval()/evalq() forcing a constructed expression -------------------------
.same0(function() {
  e <- new.env()
  assign("q", 6, e)
  eval(quote(q * 7), e)
})

## 8. Reduce / Filter / Map forwarding values through promises ----------------
.same0(function() Reduce(`+`, 1:10, accumulate = FALSE))
.same0(function() Filter(function(x) x %% 2 == 0, 1:10))
.same0(function() unlist(Map(function(a, b) a * b, 1:3, 4:6)))

## 9. Loop-variable capture semantics must match the interpreter --------------
.same0(function() {
  fns <- vector("list", 3)
  for (i in 1:3) {
    local({
      j <- i
      fns[[j]] <<- function() j
    })
  }
  vapply(fns, function(f) f(), numeric(1))     # c(1, 2, 3)
})

## 10. Promise body that itself defines a closure capturing a promise ----------
.same0(function() {
  outer <- function(p) {
    inner <- function() p + 1        # closes over the (yet unforced) promise p
    inner()
  }
  outer(40 + 1)
})

## 11. Deeply nested argument promises ----------------------------------------
.same0(function() {
  id <- function(x) x
  id(id(id(id(id(7L)))))
})

## 12. Promise used as a condition in if / while ------------------------------
.same(function(x) { f <- function(c) if (c) "yes" else "no"; f(x > 0) },
      list(list(5), list(-5)))

## 13. missing() detection through a compiled function ------------------------
.same(function(x, y) { g <- function(a, b) if (missing(b)) a else a + b; g(x, y) },
      list(list(1, 2), list(10)))   # 2nd: y missing -> g(b) missing

cat("OK\n")
