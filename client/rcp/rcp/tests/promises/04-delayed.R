# delayedAssign() and makeActiveBinding() -- promises created explicitly rather
# than through argument passing. delayedAssign is defined as
#   .Internal(delayedAssign(x, substitute(value), eval.env, assign.env))
# so it stresses the substitute()/promise-expression path directly.
source("helpers.R")

## 1. Basic value correctness -------------------------------------------------
.same0(function() { delayedAssign("z", 6 * 7); z })

## 2. Laziness: the expression is not evaluated until the binding is touched ---
local({
  st <- new.env(); st$hit <- FALSE
  f <- function(e) { delayedAssign("z", { e$hit <- TRUE; 1 }); 99 }  # z untouched
  g <- .cmp(f)
  stopifnot(g(st) == 99)
  stopifnot(isFALSE(st$hit))
})

## 3. Evaluated exactly once --------------------------------------------------
local({
  st <- new.env(); st$n <- 0L
  f <- function(e) { delayedAssign("z", { e$n <- e$n + 1L; e$n }); z + z + z }
  g <- .cmp(f)
  stopifnot(g(st) == 3L)               # 1 + 1 + 1
  stopifnot(st$n == 1L)                # forced once
})

## 4. Lazy capture sees mutation before forcing -------------------------------
.same0(function() {
  a <- 10
  delayedAssign("z", a * 2)
  a <- 999
  z                                    # 1998: a==999 at force time
})

## 5. Explicit eval.env / assign.env ------------------------------------------
.same0(function() {
  e <- new.env(); assign("k", 21, envir = e)
  delayedAssign("doubled", k * 2, eval.env = e, assign.env = environment())
  doubled
})

## 6. delayedAssign whose expression is a closure-builder ---------------------
.same0(function() {
  delayedAssign("mkfun", function(x) x + 1)
  mkfun(41)
})

## 7. makeActiveBinding with a compiled accessor function ----------------------
local({
  f <- function(e) {
    makeActiveBinding("ab", function() { e$calls <- e$calls + 1L; 7L }, environment())
    ab + ab                            # active binding: evaluated on each access
  }
  g <- .cmp(f)
  e <- new.env(); e$calls <- 0L
  stopifnot(g(e) == 14L)
  stopifnot(e$calls == 2L)             # unlike promises, re-evaluated each read
})

cat("OK\n")
