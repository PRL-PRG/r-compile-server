source("helpers.R")

# The self-modifying machinery itself: variant selection, re-selection when one
# STEPFOR site sees different types over time, and the recursion re-entry guard.
#
# STARTFOR installs a variant by memcpy over the live STEPFOR slot and caches
# which one is there. When the same site later runs a different type it must
# re-copy; when a recursive call installs a variant for an *inner* loop and the
# outer loop then resumes, the outer STEPFOR must notice the slot now holds a
# variant for a different loop (info->variant guard) and fall back rather than
# step the wrong type. These are the cases plain type-by-type tests cannot hit.

# --- one site, every reachable variant, within a single call -----------------
# The inner `for (e in s)` site is forced to install INT, REAL, LGL, CPLX, STR,
# RAW, VEC, LISTSXP and ALTREP-INT variants in sequence -- a re-copy per element
# of the outer list. .check_jit repeats this warm, so the memcpy/cached_type
# path is hammered.
.check_all("reselect.all.types.one.site",
  quote(function() {
    seqs <- list(
      c(1L, 2L, 3L),            # INTSXP direct
      c(1.5, 2.5),              # REALSXP
      c(TRUE, FALSE),           # LGLSXP
      c(1+1i, 2+2i),            # CPLXSXP
      c("a", "b", "c"),         # STRSXP
      as.raw(c(7, 8)),          # RAWSXP
      list("x", 9),             # VECSXP
      as.pairlist(list(4, 5)),  # LISTSXP
      1:4                       # ALTREP compact int -> INTSXP ALTREP
    )
    out <- list()
    for (s in seqs) {
      inner <- list()
      for (e in s) inner[[length(inner) + 1L]] <- e
      out[[length(out) + 1L]] <- inner
    }
    out
  }),
  list(
    list(1L, 2L, 3L),
    list(1.5, 2.5),
    list(TRUE, FALSE),
    list(1+1i, 2+2i),
    list("a", "b", "c"),
    list(as.raw(7), as.raw(8)),
    list("x", 9),
    list(4, 5),
    list(1L, 2L, 3L, 4L)
  ))

# --- generic (variant 0) selection interleaved with typed loops --------------
# NULL and empty sequences select the generic catch-all; a typed sequence at the
# same site must re-select away from it and back.
.check_all("generic.then.typed.one.site",
  quote(function() {
    f <- function(v) { n <- 0L; for (e in v) n <- n + 1L; n }
    c(f(NULL), f(c(1L, 2L, 3L)), f(character(0)), f(c("a", "b")), f(NULL))
  }),
  c(0L, 3L, 0L, 2L, 0L))

# --- ISQ direction re-selection at one site ----------------------------------
.check_all("isq.reselect.direction.one.site",
  quote(function() {
    f <- function(a, b) { acc <- integer(0); for (i in a:b) acc <- c(acc, i); acc }
    list(f(1L, 3L), f(3L, 1L), f(5L, 5L), f(1L, 4L))
  }),
  list(1:3, 3:1, 5L, 1:4))

# --- recursion re-entry: numeric -----------------------------------------------
# The one loop site alternates INTSXP (even depth) and REALSXP (odd depth) as it
# recurses mid-iteration. On unwinding, each frame resumes a loop whose variant
# was overwritten by the deeper call.
.check_all("recursion.reentry.numeric",
  quote(function() {
    f <- function(depth) {
      s <- if (depth %% 2L == 0L) c(1L, 2L, 3L) else c(10, 20, 30)
      tot <- 0
      for (e in s) {
        if (depth > 0L) tot <- tot + f(depth - 1L)
        tot <- tot + e
      }
      tot
    }
    f(3L)
  }),
  780)

# --- recursion re-entry: element types must stay correct across the guard ----
.check_all("recursion.reentry.types",
  quote(function() {
    h <- function(depth) {
      s <- if (depth %% 2L == 0L) c(1L, 2L) else c("x", "y")
      acc <- list()
      for (e in s) {
        if (depth > 0L) acc[[length(acc) + 1L]] <- h(depth - 1L)
        acc[[length(acc) + 1L]] <- e
      }
      acc
    }
    h(2L)
  }),
  list(list(list(1L, 2L), "x", list(1L, 2L), "y"), 1L,
       list(list(1L, 2L), "x", list(1L, 2L), "y"), 2L))

# --- nested loops of different types ------------------------------------------
.check_all("nested.real.outer.int.inner",
  quote(function() {
    tot <- 0
    for (a in c(1.0, 2.0)) for (b in c(10L, 20L, 30L)) tot <- tot + a * b
    tot
  }),
  180)

# Inner sequence re-read each outer iteration; outer sequence snapshotted.
.check_all("nested.mixed.mutation",
  quote(function() {
    outer <- c("a", "b")
    inner <- c(1L, 2L)
    acc <- list()
    for (i in outer) for (j in inner) {
      inner[1] <- 99L
      acc[[length(acc) + 1L]] <- list(i, j)
    }
    list(acc = acc, outer = outer)
  }),
  list(acc = list(list("a", 1L), list("a", 2L), list("b", 99L), list("b", 2L)),
       outer = c("a", "b")))

# --- break / next per type ----------------------------------------------------
.check_all("break.int",
  quote(function() {
    acc <- integer(0)
    for (e in c(1L, 2L, 3L, 4L)) { if (e > 2L) break; acc <- c(acc, e) }
    acc
  }),
  c(1L, 2L))

.check_all("next.str",
  quote(function() {
    acc <- character(0)
    for (e in c("a", "skip", "b")) { if (e == "skip") next; acc <- c(acc, e) }
    acc
  }),
  c("a", "b"))

.check_all("break.isq.decreasing",
  quote(function() {
    acc <- integer(0)
    for (i in 10:1) { if (i < 7L) break; acc <- c(acc, i) }
    acc
  }),
  10:7)

# --- stress: repeated re-selection across types -------------------------------
.check_all("reselect.stress",
  quote(function(n) {
    seqs <- list(c(1L, 2L), c(1.5, 2.5), c("a", "b"), c(TRUE, FALSE), as.raw(c(1, 2)))
    bad <- 0L
    for (k in seq_len(n)) {
      for (s in seqs) {
        cnt <- 0L
        for (e in s) cnt <- cnt + 1L
        if (cnt != 2L) bad <- bad + 1L
      }
    }
    bad
  }),
  0L,
  mkargs = function() list(300L))

.summary("04-specialization.R")
