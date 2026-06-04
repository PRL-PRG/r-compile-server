# Shared helpers for the promise test suite. Sourced by every NN-*.R test file;
# deliberately excluded from the Makefile's test list (it is not a test itself).

library(rcp)

# Force compilation of promise bodies on, regardless of how the package was
# built (DEBUG=1 turns it on by default; release builds default it off). The
# whole point of this suite is to exercise the compiled-promise machinery.
options(rcp.cmpfun.compile_promises = TRUE)

# Compile `f` and assert it really became native code.
.cmp <- function(f) {
  g <- rcp::rcp_cmpfun(f)
  stopifnot(rcp::rcp_is_compiled(g))
  g
}

# Oracle: a nullary, self-contained function must produce an identical result
# whether interpreted or compiled-with-promises. Use for value/semantics tests
# that own all their state (no shared side effects across the two calls).
.same0 <- function(f, label = deparse(substitute(f))) {
  ref <- f()
  got <- .cmp(f)()
  if (!identical(ref, got))
    stop(sprintf("MISMATCH [%s]:\n  interpreted: %s\n  compiled:    %s",
                 label, paste(deparse(ref), collapse = " "),
                 paste(deparse(got), collapse = " ")))
  invisible(TRUE)
}

# Oracle for functions with arguments: compare interpreted vs compiled over a
# list of argument-lists. Arguments are evaluated once and reused for both, so
# do not use this for laziness tests (use direct calls there).
.same <- function(f, arglists, label = deparse(substitute(f))) {
  g <- .cmp(f)
  for (a in arglists) {
    ref <- do.call(f, a)
    got <- do.call(g, a)
    if (!identical(ref, got))
      stop(sprintf("MISMATCH [%s] args=%s:\n  interpreted: %s\n  compiled:    %s",
                   label, paste(deparse(a), collapse = " "),
                   paste(deparse(ref), collapse = " "),
                   paste(deparse(got), collapse = " ")))
  }
  invisible(TRUE)
}

# self-check that the helpers themselves work when this file is sourced
local({
  stopifnot(.same0(function() 1 + 1))
  .same(function(x) x * 2, list(list(3), list(10)))
})
