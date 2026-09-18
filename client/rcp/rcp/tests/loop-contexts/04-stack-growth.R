source("helpers.R")

# The C stack must not grow with the number of loop-context *entries*, or with
# the number of `next` jumps through one.
#
# This is the failure mode the differential tests in 01-03 cannot see. Under
# copy-and-patch a live loop context owns a C frame (Rsh_RunLoopCntxt in
# src/stencils-runtime.c, whose job is to still be there when the siglongjmp
# lands). Every answer stays correct whether or not that frame is ever
# reclaimed -- the only symptom of leaking it is "C stack usage is too close to
# the limit", thousands of iterations later, in whatever unrelated code happens
# to be running when the stack finally runs out.
#
# It leaks easily and silently. Both the entry and the exit path have to stay
# *sibling* calls; hand a stencil local's address to a helper and GCC quietly
# demotes the closing jump to a plain call, which leaks ~100 bytes per loop
# entry with no other visible effect.
#
# So measure it directly, from inside the loop, rather than by trying to
# exhaust the stack: Cstack_info()[["current"]] read on the first and the last
# entry must be the same, because entering a loop pushes exactly one frame and
# leaving it pops exactly one.

.depth <- function() as.numeric(Cstack_info()[["current"]])

# Only the native engine is measured. The AST interpreter's own frames differ
# between the first and last iteration for reasons that have nothing to do with
# loop contexts, so it has no stable baseline to compare against; bytecode is
# not what is under test here.
.measure <- function(label, fexpr, n) {
  if (.no_rcp) {
    .note(sprintf("%s: skipped (no rcp engine)", label))
    return(invisible(NULL))
  }
  f <- eval(fexpr, parent.frame())
  if (!.has_loop_cntxt(f))
    stop(sprintf("%s: no STARTLOOPCNTXT in the compiled body -- ", label),
         "this case no longer exercises loop contexts, rewrite it")
  g <- .rcp(f, label)
  if (is.null(g)) return(invisible(NULL))
  grew <- g(n)
  # Exactly 0 is what a correct implementation gives (same frame, same depth).
  # Allow a small slack so an unrelated change in how the probe itself is
  # compiled cannot turn this into a flake, while still catching a per-entry
  # leak: the leak this guards against is ~100 bytes * n.
  if (grew <= 512) {
    .ok(label, "rcp")
  } else {
    .bad(sprintf("%s: C stack grew %.0f bytes over %d iterations (%.1f/iter)",
                 label, grew, n, grew / n),
         "rcp", grew, 0)
  }
  invisible(NULL)
}

# Entering and leaving a loop context n times. Pre-fix this leaked one
# trampoline frame per entry.
.measure("entries.do.not.grow.stack",
  quote(function(n) {
    bail <- quote(break)
    d0 <- 0; d1 <- 0
    for (i in seq_len(n)) {
      while (TRUE) {
        if (i == 1L) d0 <- .depth()
        if (i == n) d1 <- .depth()
        eval(bail)
      }
    }
    d1 - d0
  }),
  2000L)

# n `next` jumps through a *single* context. Each one re-enters the loop
# through the same landing pad; if that re-entry stacked a frame instead of
# reusing the one that is already there, this grows.
.measure("next.jumps.do.not.grow.stack",
  quote(function(n) {
    nx <- quote(next)
    d0 <- 0; d1 <- 0; i <- 0L
    while (i < n) {
      i <- i + 1L
      if (i == 1L) d0 <- .depth()
      if (i == n) d1 <- .depth()
      if (i < n) eval(nx)
    }
    d1 - d0
  }),
  2000L)

# Nested contexts: the inner loop is entered n times inside one live outer
# context, so the inner frame has to be reclaimed while the outer one stays.
.measure("nested.entries.do.not.grow.stack",
  quote(function(n) {
    bail <- quote(break)
    d0 <- 0; d1 <- 0; i <- 0L
    while (TRUE) {
      i <- i + 1L
      while (TRUE) {
        if (i == 1L) d0 <- .depth()
        if (i == n) d1 <- .depth()
        eval(bail)
      }
      if (i >= n) eval(bail)
    }
    d1 - d0
  }),
  2000L)

# Entries that end by unwinding rather than by ENDLOOPCNTXT: the longjmp has to
# reclaim the abandoned trampoline frames too.
.measure("error.unwound.entries.do.not.grow.stack",
  quote(function(n) {
    bail <- quote(break)
    d0 <- 0; d1 <- 0
    for (i in seq_len(n)) {
      tryCatch(
        while (TRUE) {
          if (i == 1L) d0 <- .depth()
          if (i == n) d1 <- .depth()
          if (i %% 2L == 0L) stop("unwind")
          eval(bail)
        },
        error = function(e) NULL)
    }
    d1 - d0
  }),
  2000L)

# Belt and braces: the probe above measures the frame, this one just has to
# survive. A leak of the size the probe is tuned for would need ~80k entries to
# exhaust an 8 MB stack, so this alone is not a sufficient guard -- but it does
# catch a leak an order of magnitude larger, and it exercises the paths for
# real rather than through a measurement.
.check("many.entries.complete",
  quote(function(n) {
    bail <- quote(break); nx <- quote(next)
    s <- 0L
    for (i in seq_len(n)) {
      while (TRUE) eval(bail)
      if (i %% 2L == 0L) eval(nx)
      s <- s + 1L
    }
    s
  }),
  50000L,
  mkargs = function() list(100000L))

.summary("04-stack-growth.R")
