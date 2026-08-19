source("helpers.R")

# Branch-free bodies. Every instruction runs exactly once per call, so the
# expected count vector is the static opcode histogram of the compiled body
# times the number of calls -- an oracle that comes from R's own compiler and
# never from a previous rcp run. .model_straight refuses a body that stopped
# being branch-free, so a case that the bytecode compiler rewrites into
# something with a jump fails loudly instead of quietly testing nothing.
#
# The point of the sweep is coverage of *stencil shapes*, not of R semantics:
# each family below puts a different kind of stencil (arith fast path, call
# sequence, dispatch-free subset, self-modifying MAKEPROM, ...) in front of the
# counter plugin, and the plugin has to fit and count regardless.

rcp_count_enable()

straight <- function(label, fexpr, args = list(list()), ncalls = NULL) {
  d <- .decode(eval(fexpr, parent.frame()))
  n <- if (is.null(ncalls)) length(args) else ncalls
  .check(label, fexpr, .model_straight(d, n), args, env = parent.frame())
}

# --- one call ---------------------------------------------------------------

straight("const", quote(function() 1))
straight("arith", quote(function(x) x + 1), list(list(1)))
straight("arith.chain", quote(function(x, y) x * y - x / y + 1),
         list(list(6, 3)))
straight("unary", quote(function(x) -x), list(list(2)))
straight("compare", quote(function(x, y) x < y), list(list(1, 2)))
straight("math1", quote(function(x) sqrt(x)), list(list(4)))
straight("logbase", quote(function(x) log(x, 2)), list(list(8)))
straight("colon", quote(function(n) 1:n), list(list(3)))
straight("seq_along", quote(function(x) seq_along(x)), list(list(1:4)))
straight("assign", quote(function(x) { y <- x + 1; y * 2 }), list(list(1)))
straight("closure.call", quote(function(x) length(x)), list(list(1:3)))
straight("builtin.dots", quote(function(x, y) sum(x, y)), list(list(1, 2)))
straight("nested.call", quote(function(x) length(as.numeric(x))),
         list(list(1:3)))
straight("subset", quote(function(x, i) x[i]), list(list(1:5, 2L)))
straight("subset2", quote(function(x, i) x[[i]]), list(list(list(1, 2), 2L)))
straight("subassign", quote(function(x, i) { x[i] <- 0; x }),
         list(list(1:5, 2L)))
straight("promise", quote(function(x) identity(x + 1)), list(list(1)))
straight("dots", quote(function(...) c(...)), list(list(1, 2, 3)))
straight("string", quote(function(s) paste0(s, "!")), list(list("hi")))
straight("attr", quote(function(x) { names(x) <- "a"; x }), list(list(1)))
straight("invisible", quote(function(x) invisible(x)), list(list(1)))
straight("null", quote(function() NULL))
straight("logical", quote(function() TRUE))

# --- repeated calls ---------------------------------------------------------
#
# Counts accumulate across calls of the same compiled function: n calls means
# exactly n times the single-call vector, with no per-call preamble of its own.

straight("repeat.calls.5", quote(function(x) x + 1),
         rep(list(list(1)), 5L))
straight("repeat.calls.100", quote(function(x, y) x * y),
         rep(list(list(2, 3)), 100L))

# Same function, different arguments: the instruction stream does not depend on
# the values, so the count does not either.
straight("varying.args", quote(function(x) x * 2),
         list(list(1L), list(2.5), list(1:3), list(c(a = 1))))

# --- optimize level 3 -------------------------------------------------------
#
# Level 3 assumes base functions are not shadowed, so the BASEGUARD in front of
# every inlined base call disappears and the instruction stream (and with it the
# stencil sequence the counter plugins are threaded through) is a different one.
# Both sides switch together: `.OPTIMIZE` is what the oracle disassembles with
# *and* what rcp byte-compiles with.

local({
  .OPTIMIZE <<- 3L
  on.exit(.OPTIMIZE <<- 2L, add = TRUE)

  .expect_true("opt3.drops.baseguard",
               !("BASEGUARD_OP" %in% .decode(function(x) sqrt(x))$op))
  straight("opt3.math1", quote(function(x) sqrt(x)), list(list(4)))
  straight("opt3.call", quote(function(x) length(x)), list(list(1:3)))
  straight("opt3.subset", quote(function(x, i) x[i]), list(list(1:5, 2L)))
})

# --- accumulation across functions ------------------------------------------
#
# One counter vector is shared by every function compiled while counting is on,
# so two functions' counts add up.

local({
  fa <- quote(function(x) x + 1)
  fb <- quote(function(x) x * 2)
  da <- .decode(eval(fa))
  db <- .decode(eval(fb))

  a <- rcp_cmpfun(eval(fa), options = list(name = "accum_a", optimize = 2L))
  b <- rcp_cmpfun(eval(fb), options = list(name = "accum_b", optimize = 2L))
  rcp_count_reset()
  for (i in 1:3) a(1)
  for (i in 1:2) b(1)
  .expect_counts("two.functions.accumulate", .snapshot(),
                 .model_straight(da, 3L) + .model_straight(db, 2L))
})

# --- inner closures ---------------------------------------------------------
#
# rcp_cmpfun compiles the MAKECLOSURE constants recursively, so an inner
# closure created and called at run time is counted too -- its instructions
# land in the same vector as the outer function's.

local({
  outer <- quote(function() { g <- function(y) y * 2; g(21) })
  inner <- quote(function(y) y * 2)
  d_out <- .decode(eval(outer))
  d_in <- .decode(eval(inner))
  # The outer body is branch-free apart from MAKECLOSURE, which .model_straight
  # rejects on principle, so build its histogram directly: every instruction of
  # the outer body runs once, and the inner closure's body runs once per call.
  want <- .hist(d_out) + .hist(d_in)
  r <- .run(outer, list(list()), name = "inner_closure")
  .expect_counts("inner.closure", r$counts, want)
  .expect("inner.closure [value]", r$values, list(42))
})

# --- callees that are not compiled ------------------------------------------
#
# Only code rcp compiled while counting was enabled is instrumented. A callee
# that is still bytecode runs in bcEval and contributes nothing, which is what
# makes a count attributable to the function under test.

local({
  h <- function(z) z + z + z + z
  caller <- quote(function() h(1))
  d <- .decode(eval(caller))
  r <- .run(caller, list(list()), name = "uncompiled_callee")
  .expect_counts("uncompiled.callee", r$counts, .model_straight(d, 1L))
  .expect("uncompiled.callee [value]", r$values, list(4))
})

# Promise bodies are their own bytecode objects, so whether forcing one is
# counted follows whether rcp compiled it: with compile_promises off (what
# helpers.R pins, and what a release build defaults to) the body runs in bcEval
# and contributes nothing, while the caller's MAKEPROM is still counted.

local({
  force_it <- function(a) a
  caller <- quote(function(x, y) force_it(x * y * y * y))
  d <- .decode(eval(caller))
  r <- .run(caller, list(list(2, 3)), name = "promise_body")
  .expect_counts("promise.body.not.counted", r$counts, .model_straight(d, 1L))
  .expect("promise.body.not.counted [value]", r$values, list(54))
  .expect_true("promise.body.has.no.mul",
               r$counts[["MUL_OP"]] == 0L && r$counts[["MAKEPROM_OP"]] >= 1L)
})

# The other half of that switch. With compile_promises on, the promise body is
# copy-and-patched like any other bytecode object, so the counter plugin has to
# be threaded through it too -- and the expected vector grows by exactly the
# body's own histogram, once, because the promise is forced once. This is the
# case that a plugin emitted only for the top-level body would fail.

local({
  old <- options(rcp.cmpfun.compile_promises = TRUE)
  on.exit(options(old), add = TRUE)

  force_it <- function(a) a
  caller <- quote(function(x, y) force_it(x * y * y * y))
  d <- .decode(eval(caller))
  prom <- .prom_hist(d)
  # x * y * y * y: 4 GETVARs, 3 MULs and the promise's own RETURN. Guards
  # against .prom_hist silently returning zeros, which would make the counts
  # check below identical to the one above.
  .expect_counts("promise.body.histogram", prom,
                 .vec(GETVAR_OP = 4L, MUL_OP = 3L, RETURN_OP = 1L))

  r <- .run(caller, list(list(2, 3)), name = "promise_body_compiled")
  .expect_counts("promise.body.counted", r$counts, .model_straight(d, 1L) + prom)
  .expect("promise.body.counted [value]", r$values, list(54))
})

.summary("01-straight-line.R")
