source("helpers.R")

# for-loop state on the node stack.
#
# GNU R's STARTFOR raises R_BCProtTop over the loop state and ENDFOR /
# ENDLOOPCNTXT lower it again (eval.c). Per R/doc/notes/bcstkprot.md that pair
# is an optimisation -- it stops every commit inside the body from re-walking
# the loop data -- and it is only safe because the slot holding the loop
# variable's value is tagged NLNKSXP, so the link-count walks skip the one slot
# STEPFOR keeps rewriting.
#
# rcp does neither: it never raises R_BCProtTop over the loop state, and
# SET_SXP_NLNK_VAL is an alias of SET_SXP_VAL. Those two omissions cancel, and
# the assertions in Rsh_StartFor / Rsh_DoStepFor / Rsh_EndFor pin down exactly
# why. These tests cover the behaviour that has to survive whichever way that
# gets resolved: the sequence must not be mutated out from under the loop, and
# a loop-variable value that escapes the iteration must not be reused.

# --- the sequence must be protected for the whole loop -----------------------

.check_all("for.seq.mutated.in.body",
  quote(function() {
    s <- c(1, 2, 3)
    acc <- numeric(0)
    for (e in s) { s[1] <- 99; acc <- c(acc, e) }
    list(acc = acc, s = s)
  }),
  list(acc = c(1, 2, 3), s = c(99, 2, 3)))

.check_all("for.seq.mutated.aliased",
  quote(function() {
    s <- c(1, 2, 3)
    t <- s
    acc <- numeric(0)
    for (e in s) { s[1] <- 99; acc <- c(acc, e) }
    list(acc = acc, s = s, t = t)
  }),
  list(acc = c(1, 2, 3), s = c(99, 2, 3), t = c(1, 2, 3)))

# Non-top-level complex assignment in the body: INCLNKSTK/DECLNKSTK now open
# and close on every iteration, straddling the loop state.
.check_all("for.seq.mutated.nontoplevel",
  quote(function() {
    s <- c(1, 2, 3)
    acc <- numeric(0)
    for (e in s) acc <- c(acc, e + { s[1] <- 99; 0 })
    list(acc = acc, s = s)
  }),
  list(acc = c(1, 2, 3), s = c(99, 2, 3)))

.check_all("for.seq.superassigned.in.callee",
  quote(function() {
    s <- c(1, 2, 3)
    h <- function() { s[1] <<- 99; 0 }
    acc <- numeric(0)
    for (e in s) acc <- c(acc, e + h())
    list(acc = acc, s = s)
  }),
  list(acc = c(1, 2, 3), s = c(99, 2, 3)))

.check_all("for.list.seq.mutated",
  quote(function() {
    s <- list(1, 2, 3)
    acc <- numeric(0)
    for (e in s) { s[[1]] <- 99; acc <- c(acc, e) }
    list(acc = acc, s1 = s[[1]])
  }),
  list(acc = c(1, 2, 3), s1 = 99))

.check_all("for.character.seq.mutated",
  quote(function() {
    s <- c("a", "b")
    acc <- character(0)
    for (e in s) { s[1] <- "z"; acc <- c(acc, e) }
    list(acc = acc, s = s)
  }),
  list(acc = c("a", "b"), s = c("z", "b")))

# Pairlist sequences walk a cursor rather than the sequence slot, so the slot
# stays immutable for the whole loop and the INCREMENT_LINKS/DECREMENT_LINKS
# pair in StartFor/EndFor lands on the same head.
.check_all("for.pairlist.seq",
  quote(function() {
    s <- as.pairlist(list(1, 2, 3))
    acc <- numeric(0)
    for (e in s) acc <- c(acc, e)
    list(acc = acc, n = length(s))
  }),
  list(acc = c(1, 2, 3), n = 3L))

.check_all("for.pairlist.seq.rebound",
  quote(function() {
    s <- as.pairlist(list(1, 2, 3))
    acc <- numeric(0)
    for (e in s) acc <- c(acc, e + { s <- 0; 0 })
    list(acc = acc, s = s)
  }),
  list(acc = c(1, 2, 3), s = 0))

.check_all("for.pairlist.value.escapes",
  quote(function() {
    s <- as.pairlist(list(1, 2, 3))
    keep <- NULL
    acc <- numeric(0)
    for (e in s) {
      if (is.null(keep)) keep <- e
      acc <- c(acc, e)
    }
    list(keep = keep, acc = acc)
  }),
  list(keep = 1, acc = c(1, 2, 3)))

.check_all("for.pairlist.value.after.loop",
  quote(function() {
    for (e in as.pairlist(list(1, 2))) NULL
    e
  }),
  2)

# Compact integer sequence: the seq slot is unboxed (ISQSXP), so it must be
# skipped by the link-count walks rather than treated as a SEXP.
.check_all("for.compact.intseq",
  quote(function() {
    acc <- integer(0)
    for (e in 1:3) acc <- c(acc, e)
    acc
  }),
  1:3)

.check_all("for.compact.intseq.with.assign",
  quote(function() {
    x <- c(0, 0, 0)
    acc <- integer(0)
    for (e in 1:3) acc <- c(acc, e + { x[e] <- e; 0L })
    list(acc = acc, x = x)
  }),
  list(acc = 1:3, x = c(1, 2, 3)))

# --- the loop variable's value slot ------------------------------------------
# STEPFOR reuses the value object in place when it is unshared. Anything that
# escapes an iteration must therefore stop it being reused.

.check_all("for.value.escapes.first",
  quote(function() {
    keep <- NULL
    out <- numeric(0)
    for (e in c(1, 2, 3)) {
      if (is.null(keep)) keep <- e
      out <- c(out, e)
    }
    list(keep = keep, out = out)
  }),
  list(keep = 1, out = c(1, 2, 3)))

.check_all("for.value.escapes.all",
  quote(function() {
    out <- list()
    for (e in c(1, 2, 3)) out[[length(out) + 1L]] <- e
    unlist(out)
  }),
  c(1, 2, 3))

.check_all("for.value.escapes.all.int",
  quote(function() {
    out <- list()
    for (e in 1:3) out[[length(out) + 1L]] <- e
    unlist(out)
  }),
  1:3)

.check_all("for.value.escapes.via.closure",
  quote(function() {
    fs <- list()
    for (e in c(1, 2, 3)) {
      local({
        ee <- e
        fs[[length(fs) + 1L]] <<- function() ee
      })
    }
    vapply(fs, function(f) f(), numeric(1))
  }),
  c(1, 2, 3))

.check_all("for.value.rebound.in.body",
  quote(function() {
    acc <- numeric(0)
    for (e in c(1, 2, 3)) { e <- e * 10; acc <- c(acc, e) }
    acc
  }),
  c(10, 20, 30))

.check_all("for.value.after.loop",
  quote(function() {
    for (e in c(1, 2, 3)) NULL
    e
  }),
  3)

.check_all("for.empty.seq.value",
  quote(function() {
    e <- "before"
    for (e in numeric(0)) NULL
    e
  }),
  NULL)

# --- nesting, break / next ---------------------------------------------------

# The outer loop's sequence is snapshotted by its own STARTFOR, so `i` must
# still run 1, 2 even though `outer` is clobbered on the first iteration. The
# inner sequence, by contrast, is re-read from `inner` on each outer iteration
# and legitimately sees the mutation -- hence the 101.
.check_all("for.nested.mutating.outer.seq",
  quote(function() {
    outer <- c(1, 2)
    inner <- c(10, 20)
    acc <- numeric(0)
    for (i in outer) for (j in inner) {
      outer[1] <- 99
      inner[1] <- 99
      acc <- c(acc, i + j)
    }
    list(acc = acc, outer = outer, inner = inner)
  }),
  list(acc = c(11, 21, 101, 22), outer = c(99, 2), inner = c(99, 20)))

.check_all("for.break.from.window",
  quote(function() {
    s <- c(1, 2, 3)
    acc <- numeric(0)
    for (e in s) {
      if (e > 2) break
      acc <- c(acc, e + { s[1] <- 99; 0 })
    }
    x <- c(1, 2)
    v <- x + { x[1] <- 42; 0 }
    list(acc = acc, s = s, v = v, x = x)
  }),
  list(acc = c(1, 2), s = c(99, 2, 3), v = c(1, 2), x = c(42, 2)))

.check_all("for.next.from.window",
  quote(function() {
    s <- c(1, 2, 3)
    acc <- numeric(0)
    for (e in s) {
      if (e == 2) next
      acc <- c(acc, e + { s[1] <- 99; 0 })
    }
    list(acc = acc, s = s)
  }),
  list(acc = c(1, 3), s = c(99, 2, 3)))

.check_all("while.and.for.interleaved",
  quote(function() {
    s <- c(1, 2)
    acc <- numeric(0)
    i <- 0
    while (i < 2) {
      for (e in s) acc <- c(acc, e + { s[1] <- 99; 0 })
      i <- i + 1
    }
    list(acc = acc, s = s)
  }),
  list(acc = c(1, 2, 99, 2), s = c(99, 2)))

# --- stress ------------------------------------------------------------------

.check_all("for.stress",
  quote(function(n) {
    bad <- 0L
    for (i in seq_len(n)) {
      s <- c(1, 2, 3)
      t <- s
      acc <- numeric(0)
      keep <- NULL
      for (e in s) {
        if (is.null(keep)) keep <- e
        s[1] <- 99
        acc <- c(acc, e)
      }
      if (!identical(acc, c(1, 2, 3))) bad <- bad + 1L
      if (!identical(t, c(1, 2, 3))) bad <- bad + 1L
      if (!identical(keep, 1)) bad <- bad + 1L
    }
    bad
  }),
  0L,
  mkargs = function() list(200L))

.summary("03-for-loops.R")
