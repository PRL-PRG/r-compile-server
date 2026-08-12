# Coverage instrumentation must survive promise compilation. In particular, a
# delayedAssign()'d expression is captured via substitute() (which yields the
# source expression, not the compiled body); do_delayed() recovers the compiled
# body from the unforced `value` promise so that forcing the lazy binding runs
# the rcp native code and its embedded coverage counters actually fire.
#
# Regression guard for the interaction of:
#   * R_PromiseExpr returning the *source* expression (needed by rlang/NSE), and
#   * delayedAssign still running the compiled (instrumented) promise body.
source("helpers.R")

if (!requireNamespace("covr", quietly = TRUE)) {
  cat("covr not available -- skipping coverage tests\n")
  cat("OK\n")
} else {

  options(rcp.cmpfun.coverage = TRUE)   # implies compile_promises = TRUE
  counters <- covr:::.counters

  # Parse with srcrefs explicitly so the test does not depend on the harness's
  # keep.source default, then compile with coverage and run.
  compile_run <- function(src, ...) {
    rm(list = ls(counters, all.names = TRUE), envir = counters)  # reset
    f <- eval(parse(text = src, keep.source = TRUE)[[1]], envir = globalenv())
    g <- rcp::rcp_cmpfun(f)
    stopifnot(rcp::rcp_is_compiled(g))
    res <- g(...)
    list(res = res, counters = as.list(counters))
  }

  # Counter value for the srcref whose source text is *exactly* `needle`.
  # Exact (not substring) matching matters: the enclosing statement
  # `delayedAssign("lazy", { x * 2 })` contains "x * 2" as a substring but is a
  # different counter, so a substring match would conflate the two.
  hits <- function(ctrs, needle) {
    v <- 0
    for (k in names(ctrs)) {
      txt <- tryCatch(paste(as.character(ctrs[[k]]$srcref), collapse = " "),
                      error = function(e) "")
      if (identical(trimws(txt), needle)) v <- max(v, ctrs[[k]]$value)
    }
    v
  }

  ## 1. delayedAssign body coverage (THE fix) ---------------------------------
  out <- compile_run("function(x) { delayedAssign(\"lazy\", { x * 2 }); lazy + 1 }", 5)
  stopifnot(out$res == 11)
  stopifnot(hits(out$counters, "x * 2") >= 1)        # compiled promise body ran

  ## 2. delayedAssign body that is never forced stays uncounted ---------------
  out <- compile_run("function(x) { delayedAssign(\"lazy\", { x * 2 }); 99 }", 5)
  stopifnot(out$res == 99)
  stopifnot(hits(out$counters, "x * 2") == 0)        # not forced -> not covered

  ## 3. Ordinary argument-promise body coverage -------------------------------
  out <- compile_run("function(x) { id <- function(p) p; id({ x + 100 }) }", 7)
  stopifnot(out$res == 107)
  stopifnot(hits(out$counters, "x + 100") >= 1)      # forced arg promise covered

  options(rcp.cmpfun.coverage = NULL)
  cat("OK\n")
}
