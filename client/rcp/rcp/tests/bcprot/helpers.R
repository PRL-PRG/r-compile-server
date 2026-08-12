# Shared helpers for the node-stack protection ("bcprot") suite. Sourced by
# every NN-*.R file; excluded from the Makefile's test list.
#
# Background: R/doc/notes/bcstkprot.md. Values living on the node stack are not
# reference-counted, so a complex assignment could mutate a value another part
# of the expression is still holding. GNU R fixes that with a deferred
# link-count scheme (R_BCProtTop / R_BCProtCommitted, INCLNK_stack_commit,
# DECLNK_stack, and the INCLNKSTK/DECLNKSTK instructions). Every one of those
# pieces has to be mirrored by rcp, and when a piece is missing the symptom is
# never a crash -- it is a silently wrong value, usually several statements
# later. So the oracle here is differential: run the same source under GNU R's
# AST interpreter, under GNU R's bytecode interpreter, and under rcp, and
# require all three to agree with a hand-checked expected value.

# The machinery under test lives in client/rsh/src/bc2c/{opcodes,
# opcodes_internals}.h, which rcp and rsh share. The suite lives in the rcp
# tree because that is where the test harness is, but the native engine is
# selectable: BCPROT_ENGINE=rsh runs exactly the same cases through rsh
# (needs a compile server, see rsh::init_client). BCPROT_NO_RCP=1 (or
# BCPROT_ENGINE=none) drops the native engine entirely and only validates the
# expected values against GNU R -- useful when adding a case, useless as a
# regression test.
.engine <- Sys.getenv("BCPROT_ENGINE", "rcp")
if (nzchar(Sys.getenv("BCPROT_NO_RCP"))) .engine <- "none"

.native <- switch(.engine,
  rcp = { library(rcp)
          list(name = "rcp", cmpfun = rcp::rcp_cmpfun,
               is_compiled = rcp::rcp_is_compiled,
               jit_enable = rcp::rcp_jit_enable,
               jit_disable = rcp::rcp_jit_disable) },
  rsh = { library(rsh)
          list(name = "rsh", cmpfun = rsh::rsh_cmpfun,
               is_compiled = rsh::is_compiled,
               jit_enable = rsh::rsh_jit_enable,
               jit_disable = rsh::rsh_jit_disable) },
  none = NULL,
  stop("unknown BCPROT_ENGINE: ", .engine))

.no_rcp <- is.null(.native)

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

# For cases the .check runner cannot express (e.g. ones that need the call site
# itself to be AST-evaluated, so the argument promise carries a LANGSXP).
.expect <- function(label, engine, got, expected) {
  if (identical(got, expected)) .ok(label, engine) else .bad(label, engine, got, expected)
}

.note <- function(msg) {
  .results$notes <- c(.results$notes, msg)
  cat("NOTE:", msg, "\n")
}

# Compile natively and confirm it really became native code. Returns NULL (and
# notes it) if the engine declined, so a case the engine cannot handle shows up
# as reduced coverage rather than as a silent pass.
.rcp <- function(f, label) {
  if (.no_rcp) return(NULL)
  g <- tryCatch(.native$cmpfun(f), error = function(e) {
    .note(sprintf("%s: %s cmpfun failed: %s", label, .native$name,
                  conditionMessage(e)))
    NULL
  })
  if (is.null(g)) return(NULL)
  if (!.native$is_compiled(g)) {
    .note(sprintf("%s: %s cmpfun produced a non-native closure", label,
                  .native$name))
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
#   mkargs   returns a FRESH argument list per call -- these tests are about
#            values leaking between calls, so arguments must not be shared
#
# R's own JIT is turned off for the duration so the `ast` engine really is the
# AST interpreter (at the default jit level R compiles every closure before its
# first call). That also means inner closures stay interpreted here; the
# `.check_jit` runner below covers the all-native case.
.check <- function(label, fexpr, expected, mkargs = function() list(),
                   env = parent.frame()) {
  old <- compiler::enableJIT(0)
  on.exit(compiler::enableJIT(old), add = TRUE)

  engines <- list()
  engines$ast <- eval(fexpr, env)
  engines$bc <- compiler::cmpfun(eval(fexpr, env))
  nat <- .rcp(eval(fexpr, env), label)
  if (!is.null(nat)) engines[[.native$name]] <- nat

  for (nm in names(engines)) {
    got <- tryCatch(do.call(engines[[nm]], mkargs()),
                    error = function(e) structure(conditionMessage(e),
                                                  class = "bcprot_error"))
    if (identical(got, expected)) .ok(label, nm) else .bad(label, nm, got, expected)
  }
  invisible(NULL)
}

# Same case run with rcp's JIT hook active, so callees and inner closures
# created at run time also become native code. Several of these bugs live in
# the *callee* frame (STARTASSIGN2 for `<<-`), which .check cannot reach.
# The result is checked on every warm-up call, not just the last: the first
# calls run as bytecode and the later ones as native code, and both must agree.
.check_jit <- function(label, fexpr, expected, mkargs = function() list(),
                       warmup = 30L, env = parent.frame()) {
  if (.no_rcp) return(invisible(NULL))
  # rcp_jit_enable hooks R's own JIT, so it needs R's JIT on. .check leaves it
  # at whatever it found, but be explicit rather than depend on that.
  oldjit <- compiler::enableJIT(3)
  on.exit(compiler::enableJIT(oldjit), add = TRUE)
  .native$jit_enable()
  on.exit(.native$jit_disable(), add = TRUE)

  f <- eval(fexpr, env)
  bad <- 0L
  for (i in seq_len(warmup)) {
    got <- tryCatch(do.call(f, mkargs()),
                    error = function(e) structure(conditionMessage(e),
                                                  class = "bcprot_error"))
    if (!identical(got, expected)) {
      if (bad == 0L) .bad(sprintf("%s (call %d)", label, i), "jit", got, expected)
      bad <- bad + 1L
    }
  }
  if (bad == 0L) {
    .ok(label, "jit")
    if (!.native$is_compiled(f))
      .note(sprintf("%s: still not native after %d calls (jit coverage lost)",
                    label, warmup))
  }
  invisible(NULL)
}

# Run both runners.
.check_all <- function(label, fexpr, expected, mkargs = function() list(),
                       env = parent.frame()) {
  .check(label, fexpr, expected, mkargs, env)
  .check_jit(label, fexpr, expected, mkargs, env = env)
  invisible(NULL)
}

# Self-check: the three engines must really be three different engines. A
# silent regression here (e.g. R's JIT compiling the "ast" closure anyway)
# would turn every case below into a comparison of bytecode against bytecode.
local({
  old <- compiler::enableJIT(0)
  on.exit(compiler::enableJIT(old), add = TRUE)
  src <- quote(function() 1 + 1)
  ast <- eval(src)
  bc <- compiler::cmpfun(eval(src))
  # body() deparses a compiled closure back to source, so ask for the real
  # body slot instead.
  bodyslot <- function(f) typeof(.Internal(bodyCode(f)))
  if (bodyslot(ast) == "bytecode")
    stop("harness broken: the 'ast' engine is byte-compiled")
  if (bodyslot(bc) != "bytecode")
    stop("harness broken: the 'bc' engine is not byte-compiled")
  if (!.no_rcp) {
    nat <- .native$cmpfun(eval(src))
    if (!.native$is_compiled(nat))
      stop("harness broken: the '", .native$name, "' engine is not native")
  }
  # and the oracle itself must be able to fail
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
