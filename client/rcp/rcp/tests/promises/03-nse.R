# Non-standard evaluation that inspects promise expressions rather than values.
# All of these depend on PREXPR()/R_PromiseExpr() returning the original source
# expression for a (possibly JIT-compiled) promise body.
source("helpers.R")

## 1. substitute() returns the source expression, not the compiled object -----
local({
  f <- function(x) substitute(x)
  g <- .cmp(f)
  stopifnot(identical(g(a + b * 2), quote(a + b * 2)))
  stopifnot(is.language(g(foo(bar, baz))))
})

## 2. deparse(substitute(x)) -- the canonical "label from expression" idiom ---
.same(function(x) deparse(substitute(x)),
      list(list(quote(hp / wt)), list(quote(some_var))))

## 3. match.arg() -- relies on the arg's promise + formals --------------------
.same(function(type = c("linear", "quadratic", "cubic")) match.arg(type),
      list(list(), list("quad"), list("cubic")))

## 4. sys.call() and match.call() ---------------------------------------------
local({
  f <- function(a, b) match.call()
  g <- .cmp(f)
  stopifnot(identical(g(1, b = 2), quote(g(a = 1, b = 2))) ||
            identical(g(1, b = 2)[["b"]], 2))   # arg recorded, call captured
  h <- .cmp(function(x) sys.call())
  cl <- h(1 + 1)
  stopifnot(is.call(cl))
})

## 5. quote() and bquote() unaffected by surrounding compiled promises --------
.same0(function() {
  v <- 5
  list(quote(x + y), bquote(z + .(v)))
})

## 6. cbind / rbind derive dim names from unevaluated `...` (via substitute) --
local({
  f <- function(p, q) cbind(p, q)
  g <- .cmp(f)
  environment(g) <- globalenv()
  m <- g(1:3, 4:6)
  stopifnot(identical(colnames(m), c("p", "q")))

  fr <- function(p, q) rbind(p, q)
  gr <- .cmp(fr); environment(gr) <- globalenv()
  mr <- gr(1:3, 4:6)
  stopifnot(identical(rownames(mr), c("p", "q")))
})

## 7. Functions that build a data.frame name columns from arg expressions -----
local({
  f <- function(aa, bb) data.frame(aa, bb)
  g <- .cmp(f); environment(g) <- globalenv()
  df <- g(1:2, c("x", "y"))
  stopifnot(identical(names(df), c("aa", "bb")))
})

## 8. eval(substitute(...)) round trip ----------------------------------------
.same(function(x) eval(substitute(x), list()), list(list(2 + 3), list(10 * 4)))

## 9. Recall() inside a compiled, recursively-promised function ---------------
.same(function(n) {
  if (n <= 1) return(1)
  n * Recall(n - 1)
}, list(list(1), list(5)))            # factorial via Recall

cat("OK\n")
