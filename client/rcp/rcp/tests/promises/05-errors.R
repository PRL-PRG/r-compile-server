# Error / condition / non-local-exit behaviour when forcing compiled promises.
# Forcing a promise can jump out of the JIT'd frame (error, condition, restart),
# so the compiled code must unwind cleanly.
source("helpers.R")

## 1. An error raised while forcing a promise propagates and is catchable ------
local({
  f <- function(x) x + 1
  g <- .cmp(f)
  err <- tryCatch(g(stop("boom")), error = function(e) conditionMessage(e))
  stopifnot(identical(err, "boom"))
})

## 2. Error only fires if the promise is actually forced -----------------------
local({
  f <- function(x, y) y                # x never forced
  g <- .cmp(f)
  stopifnot(g(stop("never"), 5) == 5)  # no error: x stayed a promise
})

## 3. Recursive default-argument reference -> R's self-reference error ---------
local({
  f <- function(x = x) x               # default refers to itself
  g <- .cmp(f)
  msg <- tryCatch(g(), error = function(e) conditionMessage(e))
  stopifnot(grepl("promise already under evaluation|recursive", msg))
})

## 4. tryCatch around a forcing site that errors -> handler value ------------
.same0(function() {
  bad <- function(p) tryCatch(p, error = function(e) "caught")
  bad(stop("inner"))
})

## 5. withCallingHandlers + a warning raised while forcing, then muffled ------
.same0(function() {
  f <- function(p) p
  withCallingHandlers(
    f({ warning("w1"); 42 }),
    warning = function(w) invokeRestart("muffleWarning")
  )
})

## 6. on.exit expression (itself a promise-like deferred expr) runs on unwind --
local({
  f <- function(e) { on.exit(e$ran <- TRUE); 1 }
  g <- .cmp(f)
  e <- new.env(); e$ran <- FALSE
  stopifnot(g(e) == 1)
  stopifnot(isTRUE(e$ran))
})

## 7. on.exit still runs when the body errors ----------------------------------
local({
  f <- function(e) { on.exit(e$ran <- TRUE); stop("fail") }
  g <- .cmp(f)
  e <- new.env(); e$ran <- FALSE
  tryCatch(g(e), error = function(x) NULL)
  stopifnot(isTRUE(e$ran))
})

## 8. A restart established outside, invoked while forcing a promise ----------
.same0(function() {
  withRestarts(
    { f <- function(p) p; f(invokeRestart("skip")) },
    skip = function() "skipped"
  )
})

cat("OK\n")
