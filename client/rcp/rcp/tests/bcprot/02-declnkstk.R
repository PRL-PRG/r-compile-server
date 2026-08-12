source("helpers.R")

# INCLNKSTK / DECLNKSTK and the R_BCProtCommitted invariant.
#
# The compiler wraps every *non-top-level* complex assignment in
# INCLNKSTK ... DECLNKSTK (cmp.R cmpComplexAssign), which raises R_BCProtTop
# over the enclosing expression's operands and then lowers it again.
#
# The dangerous case is an AST-interpreted complex assignment running *inside*
# that window with no bcEval/rcpEval frame in between: applydefine() commits the
# link counts and, unlike bcEval, does not restore R_BCProtCommitted on the way
# out -- it leaves it equal to the window's R_BCProtTop. DECLNKSTK is then the
# only thing that brings it back down. A DECLNKSTK that lowers R_BCProtTop
# without lowering R_BCProtCommitted inverts the invariant
# (Committed <= Top) and produces two distinct failures for the rest of the
# frame:
#
#   * every later INCLNK_stack_commit becomes a no-op for the live part of the
#     frame, so stack protection is silently off (the .protect cases below);
#   * every later closure return runs GNU R's DECLNK_stack over slots that were
#     never incremented, so live values lose refcounts and stop being seen as
#     shared (the .alias cases below).
#
# Two independent routes get an AST-coded promise forced inside the window:
# delayedAssign() (works anywhere), and an ordinary argument promise from a
# call site that is itself AST-evaluated (the top-level section at the end).
#
# `sum(z[1] <- a)` is the carrier: it compiles to
#   GETBUILTIN sum; INCLNKSTK; GETVAR a; STARTASSIGN z; ...; ENDASSIGN; DECLNKSTK
# so forcing `a` happens with R_BCProtTop already raised.

# --- route 1: delayedAssign --------------------------------------------------

# Spurious decrement: `y` aliases `x`, so `x[1] <- 99` must duplicate.
.check_all("poison.alias",
  quote(function() {
    yy <- c(0, 0)
    delayedAssign("a", { yy[1] <- 7; 7 })
    z <- c(1, 2)
    sum(z[1] <- a)
    x <- c(1, 2)
    y <- x
    x + identity(0)   # closure return -> DECLNK_stack over the poisoned range
    x[1] <- 99
    list(y = y, x = x, z = z, yy = yy)
  }),
  list(y = c(1, 2), x = c(99, 2), z = c(7, 2), yy = c(7, 0)))

# Protection lost: a later complex assignment must still protect the stack.
.check_all("poison.protect",
  quote(function() {
    yy <- c(0, 0)
    delayedAssign("a", { yy[1] <- 7; 7 })
    z <- c(1, 2)
    sum(z[1] <- a)
    x <- c(1, 2)
    v <- x + { x[1] <- 99; 0 }
    list(v = v, x = x, z = z)
  }),
  list(v = c(1, 2), x = c(99, 2), z = c(7, 2)))

# ... and through a callee frame (STARTASSIGN2).
.check_all("poison.protect.superassign",
  quote(function() {
    yy <- c(0, 0)
    delayedAssign("a", { yy[1] <- 7; 7 })
    z <- c(1, 2)
    sum(z[1] <- a)
    x <- c(1, 2)
    h <- function() { x[1] <<- 99; 0 }
    v <- x + h()
    list(v = v, x = x, z = z)
  }),
  list(v = c(1, 2), x = c(99, 2), z = c(7, 2)))

# The window sits inside a closure argument rather than a builtin argument.
.check_all("poison.closure.arg",
  quote(function() {
    yy <- c(0, 0)
    delayedAssign("a", { yy[1] <- 7; 7 })
    z <- c(1, 2)
    identity(identity(z[1] <- a))
    x <- c(1, 2)
    v <- x + { x[1] <- 99; 0 }
    list(v = v, x = x, z = z)
  }),
  list(v = c(1, 2), x = c(99, 2), z = c(7, 2)))

# Poisoning inside the *inner* of two nested windows: the outer DECLNKSTK has
# to cope with a R_BCProtCommitted left above its own base.
.check_all("poison.nested.windows",
  quote(function() {
    yy <- c(0, 0)
    delayedAssign("a", { yy[1] <- 7; 7 })
    z <- c(1, 2)
    w <- c(1, 2)
    sum(w[1] <- sum(z[1] <- a))
    x <- c(1, 2)
    y <- x
    v <- x + { x[1] <- 99; 0 }
    list(v = v, x = x, y = y, z = z, w = w)
  }),
  list(v = c(1, 2), x = c(99, 2), y = c(1, 2), z = c(7, 2), w = c(7, 2)))

# Poisoning inside a for-loop body: the loop state sits between the frame base
# and the window, so a stale R_BCProtCommitted makes every closure return in
# the loop decrement the sequence and the loop variable.
.check_all("poison.in.for.body",
  quote(function() {
    yy <- c(0, 0)
    s <- c(1, 2, 3)
    t <- s
    acc <- numeric(0)
    for (e in s) {
      delayedAssign("a", { yy[1] <- 7; 7 })
      z <- c(1, 2)
      sum(z[1] <- a)
      identity(0)
      acc <- c(acc, e)
    }
    list(acc = acc, s = s, t = t)
  }),
  list(acc = c(1, 2, 3), s = c(1, 2, 3), t = c(1, 2, 3)))

# Stress: repeat the poisoning so a per-iteration refcount drift accumulates
# past whatever slack a single run happens to have.
.check_all("poison.stress",
  quote(function(n) {
    yy <- c(0, 0)
    bad <- 0L
    for (i in seq_len(n)) {
      delayedAssign("a", { yy[1] <- 7; 7 })
      z <- c(1, 2)
      sum(z[1] <- a)
      x <- c(1, 2)
      y <- x
      x + identity(0)
      x[1] <- 99
      if (!identical(y, c(1, 2))) bad <- bad + 1L
      if (!identical(x, c(99, 2))) bad <- bad + 1L
    }
    bad
  }),
  0L,
  mkargs = function() list(200L))

# A single value carried across many poisoned iterations: if each iteration
# leaks one decrement, `keep` eventually stops looking shared.
.check_all("poison.stress.carried",
  quote(function(n) {
    yy <- c(0, 0)
    keep <- c(1, 2)
    mirror <- keep
    for (i in seq_len(n)) {
      delayedAssign("a", { yy[1] <- 7; 7 })
      z <- c(1, 2)
      sum(z[1] <- a)
      keep + identity(0)
    }
    keep[1] <- 99
    list(keep = keep, mirror = mirror)
  }),
  list(keep = c(99, 2), mirror = c(1, 2)),
  mkargs = function() list(200L))

# --- route 2: an argument promise from an AST call site ----------------------
# `.check` cannot express this: do.call() passes already-evaluated values, and
# a compiled call site would give the promise bytecode (which would enter
# bcEval and restore R_BCProtCommitted, hiding the bug). So drive it by hand
# from the top level of this script, with R's JIT off so the call site really
# is AST-interpreted.

local({
  src <- quote(function(a) {
    z <- c(1, 2)
    sum(z[1] <- a)
    x <- c(1, 2)
    y <- x
    x + identity(0)
    x[1] <- 99
    list(y = y, x = x, z = z)
  })
  expected <- list(y = c(1, 2), x = c(99, 2), z = c(7, 2))

  old <- compiler::enableJIT(0)
  on.exit(compiler::enableJIT(old), add = TRUE)

  engines <- list(ast = eval(src), bc = compiler::cmpfun(eval(src)))
  nat <- .rcp(eval(src), "poison.argpromise")
  if (!is.null(nat)) engines$rcp <- nat

  for (nm in names(engines)) {
    yy <- c(0, 0)
    # The argument expression is a complex assignment; because this call is
    # AST-evaluated the promise carries the LANGSXP, so forcing it inside the
    # callee's INCLNKSTK window reaches applydefine() directly.
    got <- engines[[nm]](yy[1] <- 7)
    .expect("poison.argpromise", nm, got, expected)
    .expect("poison.argpromise.side", nm, yy, c(7, 0))
  }
})

.summary("02-declnkstk.R")
