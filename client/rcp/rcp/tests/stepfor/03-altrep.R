source("helpers.R")

# ALTREP STEPFOR variants.
#
# For element sequences STARTFOR picks between a direct-data-pointer variant and
# an ALTREP-element-method variant based on ALTREP(seq). The ALTREP variant must
# fetch through ALT<TYPE>_ELT; if the *direct* variant were wrongly installed
# for an ALTREP vector it would read the standard-vector data pointer of an
# object that has none, silently returning garbage -- which the differential
# oracle catches on the very first element.
#
# Base R only manufactures two ALTREP kinds we can reach from R: compact integer
# sequences (`1:n`, once bound to a variable so the loop sees an INTSXP rather
# than the unboxed ISQ) and deferred string conversions (`as.character(<compact
# int>)`). REAL/LGL/CPLX/RAW/VEC/EXPR ALTREP variants are not constructible in
# base R, so they are exercised only for correct *selection* here (via the
# direct path in 01-types.R) -- noted below so the gap is explicit.
.note("ALTREP variants for REALSXP/LGLSXP/CPLXSXP/RAWSXP/VECSXP/EXPRSXP are not reachable from base R (no base ALTREP constructor); only INTSXP and STRSXP ALTREP paths are covered")

# Guard: confirm the inputs really are ALTREP, else the cases below silently
# fall back to the direct path.
.expect_altrep("int.altrep.input", 1:200)
.expect_altrep("str.altrep.input", as.character(1:50))

# --- ALTREP INTSXP: `x <- 1:n` bound to a variable, iterated as INTSXP --------

.check_all("altrep.int.values",
  quote(function() {
    x <- 1:8            # compact_intseq ALTREP, stored as INTSXP
    acc <- integer(0)
    for (i in x) acc <- c(acc, i)
    acc
  }),
  1:8)

.check_all("altrep.int.sum",
  quote(function() {
    x <- 1:2000
    s <- 0L
    for (i in x) s <- s + i
    s
  }),
  sum(1:2000))

.check_all("altrep.int.value.escapes",
  quote(function() {
    x <- 1:5
    out <- list()
    for (i in x) out[[length(out) + 1L]] <- i
    unlist(out)
  }),
  1:5)

.check_all("altrep.int.after.loop",
  quote(function() { x <- 1:6; for (i in x) NULL; i }),
  6L)

# Passed in as an argument -- still ALTREP, still selects the ALTREP variant.
.check_all("altrep.int.as.argument",
  quote(function(x) { acc <- integer(0); for (i in x) acc <- c(acc, i); acc }),
  1:10,
  mkargs = function() list(1:10))

# --- ALTREP STRSXP: deferred string conversion -------------------------------

.check_all("altrep.str.values",
  quote(function() {
    s <- as.character(1:5)   # deferred_string ALTREP
    acc <- character(0)
    for (e in s) acc <- c(acc, e)
    acc
  }),
  as.character(1:5))

.check_all("altrep.str.value.escapes",
  quote(function() {
    s <- as.character(10:13)
    out <- list()
    for (e in s) out[[length(out) + 1L]] <- e
    unlist(out)
  }),
  as.character(10:13))

.check_all("altrep.str.after.loop",
  quote(function() { s <- as.character(1:4); for (e in s) NULL; e }),
  "4")

# --- selection must switch when the same site sees ALTREP then non-ALTREP -----
# One call site, two INTSXP shapes: the first argument is an ALTREP compact
# sequence, the second a materialized integer vector. Whichever runs first
# installs its variant; the other must force a re-selection, not reuse it.

.check_all("altrep.then.plain.same.site",
  quote(function(a, b) {
    f <- function(v) { acc <- integer(0); for (e in v) acc <- c(acc, e); acc }
    list(f(a), f(b))
  }),
  list(1:4, c(9L, 8L, 7L)),
  mkargs = function() list(1:4, c(9L, 8L, 7L)))

.check_all("plain.then.altrep.same.site",
  quote(function(a, b) {
    f <- function(v) { acc <- integer(0); for (e in v) acc <- c(acc, e); acc }
    list(f(a), f(b))
  }),
  list(c(9L, 8L, 7L), 1:4),
  mkargs = function() list(c(9L, 8L, 7L), 1:4))

.summary("03-altrep.R")
