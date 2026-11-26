# `sapply` calls `f` and `h` from R, so through `applyClosure` and the from-R entry.
# `g` has `...`, so `h`'s call `g(i)` has fewer arguments than formals, and
# `Fir_call_dynamic` also goes through the from-R entry. A `UseMethod` or a caught
# error then skips the from-R entry's exit. (A direct `f(1L)` in `main` doesn't:
# the optimizer calls `f`'s version statically.)
# `f` dispatches to `rev.default`, since `UseMethod` doesn't see `main`'s locals.
f <- function(x, ...) UseMethod("rev")
g <- function(x, ...) stop("boom")
h <- function(i) tryCatch(g(i), error = function(e) -1L)
sapply(1:2, f)
sapply(1:3, h)
