source("helpers.R")

# Non-local exits out of an open INCLNKSTK window.
#
# On a longjmp the DECLNKSTK that would have closed the window never runs.
# GNU R covers that from the context machinery: Rf_begincontext snapshots
# R_BCProtTop into cntxt->bcprottop and the unwinder calls
# R_BCProtReset(cntxt->bcprottop), which is DECLNK_stack. rcp inherits this for
# free -- but only if R_BCProtTop and R_BCProtCommitted were consistent when the
# context was entered, so a bug in DECLNKSTK shows up here as damage that
# outlives the jump.
#
# Every case therefore does two things: check the value the unwind produced,
# and then check that ordinary stack protection still works *afterwards* in the
# same frame.

.check_all("unwind.error.in.window",
  quote(function() {
    x <- c(1, 2)
    r <- tryCatch(x + { x[1] <- 99; stop("boom") },
                  error = function(e) conditionMessage(e))
    y <- c(1, 2)
    v <- y + { y[1] <- 42; 0 }
    list(r = r, x = x, v = v, y = y)
  }),
  list(r = "boom", x = c(99, 2), v = c(1, 2), y = c(42, 2)))

.check_all("unwind.error.in.callee.window",
  quote(function() {
    x <- c(1, 2)
    g <- function() x + { x[1] <<- 99; stop("boom") }
    r <- tryCatch(g(), error = function(e) conditionMessage(e))
    y <- c(1, 2)
    w <- y + { y[1] <- 42; 0 }
    list(r = r, x = x, w = w, y = y)
  }),
  list(r = "boom", x = c(99, 2), w = c(1, 2), y = c(42, 2)))

.check_all("unwind.return.from.window",
  quote(function() {
    g <- function(x) x + { x[1] <- 99; return("early") }
    r <- g(c(1, 2))
    y <- c(1, 2)
    v <- y + { y[1] <- 42; 0 }
    list(r = r, v = v, y = y)
  }),
  list(r = "early", v = c(1, 2), y = c(42, 2)))

.check_all("unwind.break.from.window",
  quote(function() {
    s <- c(1, 2, 3)
    acc <- numeric(0)
    for (e in s) {
      acc <- c(acc, e + { s[1] <- 99; 0 })
      if (e >= 2) break
    }
    y <- c(1, 2)
    v <- y + { y[1] <- 42; 0 }
    list(acc = acc, s = s, v = v, y = y)
  }),
  list(acc = c(1, 2), s = c(99, 2, 3), v = c(1, 2), y = c(42, 2)))

.check_all("unwind.error.out.of.for",
  quote(function() {
    s <- c(1, 2, 3)
    t <- s
    r <- tryCatch({
      for (e in s) { s[1] <- 99; if (e == 2) stop("boom") }
      "no error"
    }, error = function(e) conditionMessage(e))
    y <- c(1, 2)
    v <- y + { y[1] <- 42; 0 }
    list(r = r, s = s, t = t, v = v, y = y)
  }),
  list(r = "boom", s = c(99, 2, 3), t = c(1, 2, 3), v = c(1, 2), y = c(42, 2)))

# `next`/`break` from *inside* an open INCLNKSTK window. Note that any context
# which emits INCLNKSTK (make.argContext / make.promiseContext) also clears
# cntxt$loop$gotoOK, so these cannot compile to a plain GOTO -- they become a
# real CALLSPECIAL and the loop gets a STARTLOOPCNTXT, i.e. the window is
# unwound by R_BCProtReset rather than by DECLNKSTK. That is the only reason
# skipping the DECLNKSTK is survivable, so pin it down.
.check_all("unwind.next.out.of.open.window",
  quote(function() {
    s <- c(1, 2, 3)
    z <- c(1, 2)
    acc <- numeric(0)
    for (e in s) {
      sum(z[1] <- if (e == 2) next else e)
      acc <- c(acc, e + { s[1] <- 99; 0 })
    }
    list(acc = acc, s = s, z = z)
  }),
  list(acc = c(1, 3), s = c(99, 2, 3), z = c(3, 2)))

.check_all("unwind.break.out.of.open.window",
  quote(function() {
    s <- c(1, 2, 3)
    z <- c(1, 2)
    acc <- numeric(0)
    for (e in s) {
      sum(z[1] <- if (e == 3) break else e)
      acc <- c(acc, e + { s[1] <- 99; 0 })
    }
    y <- c(1, 2)
    v <- y + { y[1] <- 42; 0 }
    list(acc = acc, s = s, z = z, v = v, y = y)
  }),
  list(acc = c(1, 2), s = c(99, 2, 3), z = c(2, 2), v = c(1, 2), y = c(42, 2)))

# Unwind out of a *poisoned* window (see 02-declnkstk.R): applydefine has
# committed the link counts and the jump skips the DECLNKSTK, so the only thing
# left to restore R_BCProtCommitted is R_BCProtReset from the context.
.check_all("unwind.error.in.poisoned.window",
  quote(function() {
    yy <- c(0, 0)
    r <- tryCatch({
      delayedAssign("a", { yy[1] <- 7; stop("boom") })
      z <- c(1, 2)
      sum(z[1] <- a)
      "no error"
    }, error = function(e) conditionMessage(e))
    x <- c(1, 2)
    y <- x
    x + identity(0)
    x[1] <- 99
    v <- c(1, 2)
    w <- v + { v[1] <- 42; 0 }
    list(r = r, x = x, y = y, w = w, v = v, yy = yy)
  }),
  list(r = "boom", x = c(99, 2), y = c(1, 2), w = c(1, 2), v = c(42, 2),
       yy = c(7, 0)))

# Repeated unwinds: a per-jump leak or over-decrement accumulates.
.check_all("unwind.stress",
  quote(function(n) {
    bad <- 0L
    for (i in seq_len(n)) {
      x <- c(1, 2)
      tryCatch(x + { x[1] <- 99; stop("boom") }, error = function(e) NULL)
      y <- c(1, 2)
      z <- y
      v <- y + { y[1] <- 42; 0 }
      if (!identical(v, c(1, 2))) bad <- bad + 1L
      if (!identical(z, c(1, 2))) bad <- bad + 1L
    }
    bad
  }),
  0L,
  mkargs = function() list(200L))

.check_all("unwind.stress.poisoned",
  quote(function(n) {
    yy <- c(0, 0)
    bad <- 0L
    for (i in seq_len(n)) {
      tryCatch({
        delayedAssign("a", { yy[1] <- 7; stop("boom") })
        z <- c(1, 2)
        sum(z[1] <- a)
      }, error = function(e) NULL)
      x <- c(1, 2)
      y <- x
      x + identity(0)
      x[1] <- 99
      if (!identical(y, c(1, 2))) bad <- bad + 1L
    }
    bad
  }),
  0L,
  mkargs = function() list(200L))

.summary("04-unwind.R")
