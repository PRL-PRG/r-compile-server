source("helpers.R")

# Leaving a loop context by something *other* than the loop ending.
#
# Under copy-and-patch the loop context owns a C frame that the compiled chain
# has to unwind back through, and a `return` inside the loop is the one exit
# that skips ENDLOOPCNTXT entirely: the chain returns straight past the
# trampoline, which must recognise that and keep propagating rather than
# resume at a stale "carry on after the loop" address. Errors and condition
# handling take the ordinary R longjmp route instead, but they still have to
# leave the context bookkeeping consistent -- which the *next* loop in the same
# function then depends on.

# --- return out of a loop context --------------------------------------------

.check_all("return.from.loop.body",
  quote(function() {
    nx <- quote(next)
    for (i in 1:10) {
      if (i == 3L) return(i * 7L)
      eval(nx)
    }
    -1L
  }),
  21L)

.check_all("return.after.break",
  quote(function() {
    bail <- quote(break)
    for (i in 1:10) { eval(bail); return(99L) }
    42L
  }),
  42L)

# `return` out of a doubly-nested pair of contexts: two trampoline frames to
# unwind past, not one.
.check_all("return.from.nested.loop",
  quote(function() {
    bail <- quote(break)
    for (i in 1:5) {
      j <- 0L
      while (TRUE) {
        j <- j + 1L
        if (i == 3L && j == 2L) return(i * 100L + j)
        if (j > 2L) eval(bail)
      }
    }
    -1L
  }),
  302L)

# A returned value that is a fresh allocation, so it has to survive the unwind
# through the trampoline rather than merely be a constant. The leading loop is
# entered and left first, so the return unwinds through a *second* entry to a
# context at the same nesting level.
.check_all("return.allocated.value",
  quote(function() {
    bail <- quote(break); nx <- quote(next)
    while (TRUE) { eval(bail) }
    for (i in 1:3) { if (i == 2L) return(list(a = seq_len(20L), b = "x")); eval(nx) }
    NULL
  }),
  list(a = seq_len(20L), b = "x"))

# --- errors ------------------------------------------------------------------

# The error is raised on the third iteration, so it unwinds a context that has
# already served two `next` jumps.
.check_all("error.propagates.out.of.loop",
  quote(function() {
    nx <- quote(next)
    r <- tryCatch({
      for (i in 1:5) { if (i == 3L) stop("boom"); eval(nx) }
      "no error"
    }, error = function(e) conditionMessage(e))
    r
  }),
  "boom")

# The loop after the one that errored must still work: the aborted context did
# not leave the bookkeeping wedged.
.check_all("loop.after.error.still.works",
  quote(function() {
    bail <- quote(break)
    tryCatch(for (i in 1:5) { stop("boom"); eval(bail) },
             error = function(e) NULL)
    s <- 0L
    for (i in 1:6) { if (i > 3L) eval(bail); s <- s + i }
    s
  }),
  6L)

# tryCatch *inside* the loop body: the handler runs, the loop continues, and
# the context is still there for the `next` that follows.
.check_all("trycatch.inside.loop.body",
  quote(function() {
    nx <- quote(next)
    s <- 0L
    for (i in 1:5) {
      s <- s + tryCatch({ if (i == 3L) stop("x"); i }, error = function(e) 100L)
      eval(nx)
      s <- s + 1000L        # unreachable
    }
    s
  }),
  1L + 2L + 100L + 4L + 5L)

# An error raised inside the eval() that would otherwise have broken.
.check_all("error.instead.of.break",
  quote(function() {
    boom <- quote(stop("nope"))
    tryCatch({ while (TRUE) eval(boom); "unreachable" },
             error = function(e) conditionMessage(e))
  }),
  "nope")

# --- on.exit / finally around the jump ---------------------------------------

# on.exit in a callee invoked from the loop body still runs when the loop
# breaks out from under it on a later iteration.
.check_all("on.exit.in.callee.runs",
  quote(function() {
    bail <- quote(break)
    log <- character(0)
    tick <- function(i) { on.exit(log <<- c(log, paste0("exit", i))); i }
    acc <- integer(0)
    for (i in 1:4) { if (i == 3L) eval(bail); acc <- c(acc, tick(i)) }
    list(acc = acc, log = log)
  }),
  list(acc = 1:2, log = c("exit1", "exit2")))

.check_all("finally.runs.on.break",
  quote(function() {
    bail <- quote(break)
    log <- character(0)
    for (i in 1:4) {
      tryCatch({ if (i == 3L) eval(bail) },
               finally = log <- c(log, paste0("f", i)))
    }
    log
  }),
  c("f1", "f2", "f3"))

# --- repeated unwinding -------------------------------------------------------

# Entering, erroring out of, and re-entering the same loop context many times.
# Every aborted entry abandons a trampoline frame; the longjmp has to reclaim
# it, or this drifts upward until the C stack is gone.
.check_all("repeated.error.unwind",
  quote(function(n) {
    bail <- quote(break)
    caught <- 0L
    for (i in seq_len(n)) {
      caught <- caught + tryCatch({
        while (TRUE) { if (i %% 2L == 0L) stop("odd one out"); eval(bail) }
        0L
      }, error = function(e) 1L)
    }
    caught
  }),
  500L,
  mkargs = function() list(1000L))

.summary("03-unwind.R")
