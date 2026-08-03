# `...` handling under promise compilation. This is where the original bug
# lived: a `...`-forwarded promise whose expression is inspected (not forced)
# by NSE must yield its source expression, never the opaque compiled body --
# otherwise the promise gets force-evaluated by accident.
source("helpers.R")

## 1. Plain forwarding and collection of ... ----------------------------------
.same(function(...) list(...), list(list(1, 2, 3), list(a = 1, b = "x"), list()))
.same(function(...) sum(...), list(list(1, 2, 3), list(1L, 2L, 3L, 4L)))
.same(function(...) c(...), list(list(1, 2), list("a", "b", "c")))

## 2. ..1 / ..2 and ...length() / ...elt() ------------------------------------
.same(function(...) ..1 + ..2, list(list(10, 20), list(1L, 2L)))
.same(function(...) ...length(), list(list(), list(1), list(1, 2, 3)))
.same(function(...) ...elt(2), list(list(9, 8, 7), list("a", "b")))

## 3. Mixing named and positional dots ----------------------------------------
.same(function(first, ...) list(first = first, rest = list(...)),
      list(list(1, 2, 3), list("a", b = "B", c = "C")))

## 4. CRITICAL: capturing ... expressions must NOT force them -----------------
# match.call(expand.dots = FALSE) reads the *expressions* of the dots. If
# promise compilation wrongly causes forcing, the unforced `stop(...)` below
# would abort. This is the base-R analogue of rlang's `!!!`/list2 failure.
local({
  capture <- function(...) match.call(expand.dots = FALSE)[["..."]]
  g <- .cmp(capture)
  out <- g(stop("must not be forced"), 1 + 1, sqrt(-1))
  stopifnot(length(out) == 3)
  stopifnot(identical(out[[1]], quote(stop("must not be forced"))))
  stopifnot(identical(out[[2]], quote(1 + 1)))
})

## 5. substitute() on a single ... element gives source expression ------------
# Called directly (not via the eager .same oracle) so the expression is never
# evaluated -- substitute must read it without forcing.
local({
  f <- function(...) deparse(substitute(...))
  g <- .cmp(f)
  stopifnot(identical(f(a + b * 2), g(a + b * 2)))
  stopifnot(identical(g(a + b * 2), "a + b * 2"))
})

## 6. The exact reported failure: rlang `!!!` splice (if rlang is available) ---
if (requireNamespace("rlang", quietly = TRUE)) {
  f <- function(...) {
    dots <- list(...)
    dots <- dots[!vapply(dots, is.null, logical(1))]
    rlang::list2(!!!dots)
  }
  g <- .cmp(f)
  stopifnot(identical(g(1, 2, NULL, 3), list(1, 2, 3)))

  # also exercise enquos/quasiquotation expression capture
  h <- .cmp(function(...) rlang::enexprs(...))
  ex <- h(x + 1, foo(bar))
  stopifnot(identical(ex[[1]], quote(x + 1)),
            identical(ex[[2]], quote(foo(bar))))
}

## 7. Real-world: stringr::str_c uses vctrs/rlang `!!!` internally ------------
if (requireNamespace("stringr", quietly = TRUE)) {
  sc <- rcp::rcp_cmpfun(stringr::str_c)
  environment(sc) <- environment(stringr::str_c)
  stopifnot(rcp::rcp_is_compiled(sc))
  stopifnot(identical(sc("a", "b", NULL, "c", sep = "-"), "a-b-c"))
  stopifnot(identical(sc(c("x", "y"), "_", c("1", "2")), c("x_1", "y_2")))
}

## 8. Lazy ... : an unused dot is not forced ----------------------------------
local({
  st <- new.env(); st$hit <- FALSE
  f <- function(...) ..1                      # only first dot used
  g <- .cmp(f)
  stopifnot(g(5, { st$hit <- TRUE; 6 }) == 5)
  stopifnot(isFALSE(st$hit))
})

## 9. do.call forwarding through ... ------------------------------------------
.same0(function() {
  wrapper <- function(...) do.call(paste, list(..., sep = "-"))
  wrapper("a", "b", "c")
})

cat("OK\n")
