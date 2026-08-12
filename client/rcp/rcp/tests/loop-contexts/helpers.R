# Shared helpers for the loop-context suite. Sourced by every NN-*.R file;
# excluded from the Makefile's test list.
#
# Background. A loop whose body might see a *non-local* `break`/`next` -- one
# that goes through eval(), a closure, browser(), ... rather than being a plain
# jump the compiler can resolve -- gets an RCNTXT, and the bytecode compiler
# brackets it with STARTLOOPCNTXT / ENDLOOPCNTXT. findcontext() reaches that
# loop by siglongjmp()ing into the context's cjmpbuf, so whichever C frame did
# the setjmp has to still be alive when the jump lands.
#
# bcEval gets that for free (the SETJMP is inline in the interpreter loop) and
# so does the rsh C backend (Rsh_StartLoopCntxt is static and inlines into the
# generated function). Copy-and-patch cannot: every stencil is its own
# function, so the setjmp has to live in a trampoline that stays on the stack
# for as long as the context does -- Rsh_RunLoopCntxt in
# src/stencils-runtime.c. Get that wrong and the failure modes are
#
#   * jumping back into a frame that has already returned and been overwritten
#     -> garbage in the node-stack register, a stale return address, SIGSEGV;
#   * a trampoline frame that is never popped -> C stack exhaustion on a hot
#     nested loop, with no wrong answer anywhere to point at it.
#
# The first is covered differentially (01-03): run each case under GNU R's AST
# interpreter, under its bytecode interpreter, and under rcp, and require all
# three to agree with a hand-checked value. The second needs its own probe, in
# 04-stack-growth.R.

# LOOPCNTXT_NO_RCP=1 drops the native engine and only validates the expected
# values against GNU R -- useful when adding a case, useless as a regression
# test. `make gnur` does this.
.no_rcp <- nzchar(Sys.getenv("LOOPCNTXT_NO_RCP"))
if (!.no_rcp) library(rcp)

.results <- new.env(parent = emptyenv())
.results$pass <- 0L
.results$fail <- 0L
.results$notes <- character(0)

.fmt <- function(x) paste(deparse(x, width.cutoff = 500L), collapse = " ")

.ok <- function(label, engine) {
  .results$pass <- .results$pass + 1L
  invisible(TRUE)
}

.bad <- function(label, engine, got, want) {
  .results$fail <- .results$fail + 1L
  cat(sprintf("FAIL [%s / %s]\n  expected: %s\n  actual:   %s\n",
              label, engine, .fmt(want), .fmt(got)))
  invisible(FALSE)
}

.expect <- function(label, engine, got, expected) {
  if (identical(got, expected)) .ok(label, engine) else .bad(label, engine, got, expected)
}

.note <- function(msg) {
  .results$notes <- c(.results$notes, msg)
  cat("NOTE:", msg, "\n")
}

# Does the byte-compiled closure actually contain a loop context?
#
# This is the guard that keeps the suite honest. Every case below is written so
# the compiler *has* to emit STARTLOOPCNTXT, but that depends on the compiler's
# own analysis of what can break non-locally. If that analysis ever gets
# sharper -- or a case gets edited into something it can prove is safe -- the
# case keeps passing while testing nothing at all. So assert it, per case.
.has_loop_cntxt <- function(f) {
  # disassemble() prints its result as a side effect as well as returning it,
  # and it already expands nested code objects (promise bodies, inner loops)
  # in the constant pool into the same list(.Code, ops, consts) shape -- so a
  # plain recursive scan of the result covers them too. Only lists are walked:
  # constants that are language objects are left alone, which is also what
  # keeps a source expression from ever being mistaken for an opcode.
  d <- NULL
  invisible(capture.output(d <- compiler::disassemble(compiler::cmpfun(f))))
  seen <- FALSE
  scan <- function(x) {
    if (seen) return(invisible(NULL))
    if (is.name(x)) {
      if (identical(as.character(x), "STARTLOOPCNTXT.OP")) seen <<- TRUE
    } else if (is.list(x)) {
      for (e in x) scan(e)
    }
    invisible(NULL)
  }
  scan(d)
  seen
}

# Compile natively and confirm it really became native code. Returns NULL (and
# notes it) if rcp declined, so a case rcp cannot handle shows up as reduced
# coverage rather than as a silent pass.
.rcp <- function(f, label) {
  if (.no_rcp) return(NULL)
  g <- tryCatch(rcp::rcp_cmpfun(f), error = function(e) {
    .note(sprintf("%s: rcp_cmpfun failed: %s", label, conditionMessage(e)))
    NULL
  })
  if (is.null(g)) return(NULL)
  if (!rcp::rcp_is_compiled(g)) {
    .note(sprintf("%s: rcp_cmpfun produced a non-native closure", label))
    return(NULL)
  }
  g
}

# The core oracle.
#
#   label    identifies the case in failure output
#   fexpr    a *quoted* `function(...)`, re-evaluated once per engine so no
#            engine ever sees a body another engine compiled
#   expected the hand-checked correct result
#   mkargs   returns a FRESH argument list per call
#
# R's own JIT is turned off for the duration so the `ast` engine really is the
# AST interpreter (at the default jit level R compiles every closure before its
# first call).
.check <- function(label, fexpr, expected, mkargs = function() list(),
                   env = parent.frame()) {
  old <- compiler::enableJIT(0)
  on.exit(compiler::enableJIT(old), add = TRUE)

  if (!.has_loop_cntxt(eval(fexpr, env)))
    stop(sprintf("%s: no STARTLOOPCNTXT in the compiled body -- ",
                 label),
         "this case no longer exercises loop contexts, rewrite it")

  engines <- list()
  engines$ast <- eval(fexpr, env)
  engines$bc <- compiler::cmpfun(eval(fexpr, env))
  nat <- .rcp(eval(fexpr, env), label)
  if (!is.null(nat)) engines$rcp <- nat

  for (nm in names(engines)) {
    got <- tryCatch(do.call(engines[[nm]], mkargs()),
                    error = function(e) structure(conditionMessage(e),
                                                  class = "loopcntxt_error"))
    if (identical(got, expected)) .ok(label, nm) else .bad(label, nm, got, expected)
  }
  invisible(NULL)
}

# Same case with rcp's JIT hook active, so callees and inner closures created
# at run time become native too -- a loop context inside a *callee* is a
# different code path from one in the top-level compiled function. The result
# is checked on every warm-up call: the first calls run as bytecode and the
# later ones as native code, and both must agree.
.check_jit <- function(label, fexpr, expected, mkargs = function() list(),
                       warmup = 30L, env = parent.frame()) {
  if (.no_rcp) return(invisible(NULL))
  oldjit <- compiler::enableJIT(3)
  on.exit(compiler::enableJIT(oldjit), add = TRUE)
  rcp::rcp_jit_enable()
  on.exit(rcp::rcp_jit_disable(), add = TRUE)

  f <- eval(fexpr, env)
  bad <- 0L
  for (i in seq_len(warmup)) {
    got <- tryCatch(do.call(f, mkargs()),
                    error = function(e) structure(conditionMessage(e),
                                                  class = "loopcntxt_error"))
    if (!identical(got, expected)) {
      if (bad == 0L) .bad(sprintf("%s (call %d)", label, i), "jit", got, expected)
      bad <- bad + 1L
    }
  }
  if (bad == 0L) {
    .ok(label, "jit")
    if (!rcp::rcp_is_compiled(f))
      .note(sprintf("%s: still not native after %d calls (jit coverage lost)",
                    label, warmup))
  }
  invisible(NULL)
}

.check_all <- function(label, fexpr, expected, mkargs = function() list(),
                       env = parent.frame()) {
  .check(label, fexpr, expected, mkargs, env)
  .check_jit(label, fexpr, expected, mkargs, env = env)
  invisible(NULL)
}

# Self-check: the engines must really be different engines, .has_loop_cntxt
# must really discriminate, and the oracle itself must be able to fail. Without
# this a silent regression in the harness turns every case below into a
# comparison of bytecode against bytecode.
local({
  old <- compiler::enableJIT(0)
  on.exit(compiler::enableJIT(old), add = TRUE)
  src <- quote(function() 1 + 1)
  bodyslot <- function(f) typeof(.Internal(bodyCode(f)))
  if (bodyslot(eval(src)) == "bytecode")
    stop("harness broken: the 'ast' engine is byte-compiled")
  if (bodyslot(compiler::cmpfun(eval(src))) != "bytecode")
    stop("harness broken: the 'bc' engine is not byte-compiled")
  if (!.no_rcp && !rcp::rcp_is_compiled(rcp::rcp_cmpfun(eval(src))))
    stop("harness broken: the 'rcp' engine is not native")

  # A loop with a non-local break needs a context; a plain one must not, or the
  # per-case assertion is vacuous.
  if (!.has_loop_cntxt(function() { b <- quote(break); while (TRUE) eval(b) }))
    stop("harness broken: .has_loop_cntxt misses a real loop context")
  if (.has_loop_cntxt(function() { s <- 0; for (i in 1:3) s <- s + i; s }))
    stop("harness broken: .has_loop_cntxt fires on a context-free loop")

  n <- .results$fail
  suppressWarnings(capture.output(.expect("self-check", "x", 1, 2)))
  if (.results$fail != n + 1L) stop("harness broken: .expect does not fail")
  .results$fail <- n
})

.summary <- function(file) {
  cat(sprintf("\n%s: %d passed, %d failed\n", file, .results$pass, .results$fail))
  if (length(.results$notes))
    cat(sprintf("  %d note(s)\n", length(.results$notes)))
  if (.results$fail > 0L) stop(sprintf("%s: %d check(s) failed", file, .results$fail))
  invisible(TRUE)
}
