# `.Internal(f(...))` calls the internal `f`, never the base closure named `f`. `stop` and
# `warning` have other parameters than their internals, and the internal `parent.frame` counts from
# the closure that calls it, which the base closure would shift by one frame. GNU-R gives "boom",
# "careful", and TRUE (the frame above `caller`).
st <- function(m) tryCatch(.Internal(stop(FALSE, m)), error = function(e) conditionMessage(e))
wa <- function(m) {
  tryCatch(.Internal(warning(FALSE, FALSE, FALSE, m)), warning = function(w) conditionMessage(w))
}
pf <- function() .Internal(parent.frame(1))
caller <- function() pf()
outer <- function() identical(caller(), environment())
for (i in 1:12) { st("boom"); wa("careful"); outer() }
list(st("boom"), wa("careful"), outer())
