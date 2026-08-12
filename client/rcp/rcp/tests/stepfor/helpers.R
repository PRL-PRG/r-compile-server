# Shared helpers for the self-modifying STEPFOR suite. Sourced by every NN-*.R
# file; excluded from the Makefile's test list.
#
# What is under test: rcp specializes the STEPFOR bytecode instruction with a
# self-modifying-code site. STARTFOR picks a per-(type x axis) variant and
# memcpy's it over the live STEPFOR slot; the variant is specialized on the
# sequence type and one runtime axis -- ALTREP-ness for element sequences,
# iteration direction for compact integer ranges (ISQ). The machinery lives in
# client/rcp/rcp/src/stencils/stencils_bc.c (variant table + STARTFOR selection)
# and the shared stepper Rsh_DoStepFor in client/rsh/src/bc2c/opcodes.h. A wrong
# variant selection, a wrong element accessor (e.g. an ALTREP method used on a
# plain vector or a direct data pointer used on an ALTREP), or a botched
# self-modifying re-copy on recursion shows up as a silently wrong loop result,
# not a crash.
#
# The oracle is differential: run the same source under GNU R's AST interpreter,
# under GNU R's bytecode interpreter, and under rcp, and require all three to
# agree with a hand-checked expected value. This mirrors the bcprot suite.
#
# Engine selection: STEPFOR_ENGINE=rcp (default) | rsh | none. STEPFOR_NO_RCP=1
# drops the native engine and only validates the expected values against GNU R
# -- useful when adding a case, useless as a regression test for rcp.
.engine <- Sys.getenv("STEPFOR_ENGINE", "rcp")
if (nzchar(Sys.getenv("STEPFOR_NO_RCP"))) .engine <- "none"

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
  stop("unknown STEPFOR_ENGINE: ", .engine))

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

.expect <- function(label, engine, got, expected) {
  if (identical(got, expected)) .ok(label, engine) else .bad(label, engine, got, expected)
}

.note <- function(msg) {
  .results$notes <- c(.results$notes, msg)
  cat("NOTE:", msg, "\n")
}

# Is x an ALTREP object? Base R has no predicate, so read the first line of
# .Internal(inspect()) and look for the class annotation ALTREP objects print
# (e.g. "(compact)", "(wrapper)", "<deferred string conversion>").
.is_altrep <- function(x) {
  l1 <- capture.output(.Internal(inspect(x)))[1]
  grepl("\\(compact\\)|\\(wrapper\\)|deferred|<[A-Za-z]", l1)
}

# Assert (as a NOTE, engine-independent) that a value we intend to exercise the
# ALTREP variant with really is ALTREP. If a future R stops producing ALTREP
# here the case silently degrades to the direct path -- the note makes that
# coverage loss visible rather than a false pass.
.expect_altrep <- function(label, x) {
  if (!.is_altrep(x))
    .note(sprintf("%s: input is not ALTREP (coverage of the ALTREP variant lost)", label))
  invisible(x)
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
#   mkargs   returns a FRESH argument list per call
#
# R's own JIT is turned off for the duration so the `ast` engine really is the
# AST interpreter.
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
                                                  class = "stepfor_error"))
    if (identical(got, expected)) .ok(label, nm) else .bad(label, nm, got, expected)
  }
  invisible(NULL)
}

# Same case run with rcp's JIT hook active and repeated, so the site warms up:
# the first calls run as bytecode and the later ones as native code, and every
# call must agree with the expected value. This is where the self-modifying
# STEPFOR site is actually installed and re-copied.
.check_jit <- function(label, fexpr, expected, mkargs = function() list(),
                       warmup = 30L, env = parent.frame()) {
  if (.no_rcp) return(invisible(NULL))
  oldjit <- compiler::enableJIT(3)
  on.exit(compiler::enableJIT(oldjit), add = TRUE)
  .native$jit_enable()
  on.exit(.native$jit_disable(), add = TRUE)

  f <- eval(fexpr, env)
  bad <- 0L
  for (i in seq_len(warmup)) {
    got <- tryCatch(do.call(f, mkargs()),
                    error = function(e) structure(conditionMessage(e),
                                                  class = "stepfor_error"))
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

# Self-check: the three engines must really be three different engines.
local({
  old <- compiler::enableJIT(0)
  on.exit(compiler::enableJIT(old), add = TRUE)
  src <- quote(function() 1 + 1)
  ast <- eval(src)
  bc <- compiler::cmpfun(eval(src))
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
