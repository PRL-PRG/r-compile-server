source("helpers.R")

# Nested loop contexts.
#
# `break`/`next` always target the *innermost* enclosing loop, so with two live
# contexts the jump must land in the inner one and leave the outer one intact
# and still usable for the rest of the outer iteration. Under copy-and-patch
# each live context also owns a C frame, so this is where "the trampoline frame
# is popped when the loop ends" is actually load-bearing: get it wrong and
# either the outer loop resumes in the wrong place or the frames pile up.

# --- two contexts, jump targets the inner one --------------------------------

.check_all("nested.break.targets.inner",
  quote(function() {
    bail <- quote(break)
    acc <- integer(0)
    for (i in 1:4) {
      j <- 0L
      while (TRUE) { j <- j + 1L; if (j >= i) eval(bail) }
      acc <- c(acc, j)
    }
    acc
  }),
  1:4)

.check_all("nested.next.targets.inner",
  quote(function() {
    nx <- quote(next); bail <- quote(break)
    acc <- integer(0)
    for (i in 1:4) {
      j <- 0L; s <- 0L
      while (TRUE) {
        j <- j + 1L
        if (j > 4L) eval(bail)
        if (j %% 2L == 0L) eval(nx)
        s <- s + j
      }
      acc <- c(acc, s)
    }
    acc
  }),
  rep(1L + 3L, 4L))

# The outer loop's own context still works after the inner one has come and
# gone -- i.e. ending the inner context restored the outer one, it did not
# clobber or consume it.
.check_all("outer.context.survives.inner",
  quote(function() {
    bail <- quote(break)
    acc <- integer(0)
    for (i in 1:6) {
      while (TRUE) eval(bail)      # inner context: entered and left
      if (i == 4L) eval(bail)      # outer context: must still be live
      acc <- c(acc, i)
    }
    acc
  }),
  1:3)

.check_all("outer.next.after.inner.loop",
  quote(function() {
    nx <- quote(next); bail <- quote(break)
    acc <- integer(0)
    for (i in 1:6) {
      while (TRUE) eval(bail)
      if (i %% 2L == 0L) eval(nx)
      acc <- c(acc, i)
    }
    acc
  }),
  c(1L, 3L, 5L))

# --- three deep ---------------------------------------------------------------

.check_all("nested.three.deep",
  quote(function() {
    bail <- quote(break)
    total <- 0L
    for (i in 1:3) {
      for (j in 1:3) {
        k <- 0L
        while (TRUE) { k <- k + 1L; if (k > 2L) eval(bail) }
        total <- total + i * j * k
      }
      if (i == 3L) eval(bail)
    }
    total
  }),
  108L)

# --- mixing contexted and context-free loops ---------------------------------

# The inner loop breaks with a plain `break`, which the compiler resolves to a
# jump and gives no context; the outer one is contexted. The plain jump must
# not disturb the outer context.
.check_all("plain.inner.break.inside.contexted.outer",
  quote(function() {
    bail <- quote(break)
    acc <- integer(0)
    for (i in 1:5) {
      j <- 0L
      while (TRUE) { j <- j + 1L; if (j >= 3L) break }
      if (i == 4L) eval(bail)
      acc <- c(acc, i * j)
    }
    acc
  }),
  c(3L, 6L, 9L))

# The other way round: contexted inner loop, plain outer loop.
.check_all("contexted.inner.inside.plain.outer",
  quote(function() {
    bail <- quote(break)
    acc <- integer(0)
    for (i in 1:4) {
      j <- 0L
      while (TRUE) { j <- j + 1L; if (j >= i) eval(bail) }
      acc <- c(acc, j)
      if (i == 3L) break
    }
    acc
  }),
  1:3)

# --- a context in a callee, i.e. a separate compiled body ---------------------

# Each call to the callee runs its own loop context, nested inside the caller's
# live one on the C stack but belonging to a different invocation entirely.
.check_all("context.in.callee.inside.contexted.loop",
  quote(function() {
    bail <- quote(break)
    countdown <- function(n) {
      b <- quote(break)
      k <- 0L
      while (TRUE) { k <- k + 1L; if (k >= n) eval(b) }
      k
    }
    acc <- integer(0)
    for (i in 1:5) {
      if (i == 5L) eval(bail)
      acc <- c(acc, countdown(i))
    }
    acc
  }),
  1:4)

# --- entering the inner loop many times --------------------------------------

# The regression guard in value terms: 2000 entries of an inner loop context
# nested in an outer one. If leaving a loop did not pop its frame this is
# already several hundred KB of C stack; 04-stack-growth.R measures that
# directly, this just pins the answer.
.check_all("nested.many.entries",
  quote(function(n) {
    bail <- quote(break); nx <- quote(next)
    total <- 0L
    for (i in seq_len(n)) {
      j <- 0L
      while (TRUE) { j <- j + 1L; if (j > 2L) eval(bail) }
      if (i %% 2L == 0L) eval(nx)
      total <- total + j
    }
    total
  }),
  3000L,
  mkargs = function() list(2000L))

.summary("02-nesting.R")
