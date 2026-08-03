library(rcp)

if (!isTRUE(.Call("rcp_s3_generics_deactivated", PACKAGE = "rcp"))) {
  cat("SKIP: DEACTIVATE_S3_GENERICS is not enabled in this build\n")
  quit(status = 0)
}

if (!requireNamespace("splines", quietly = TRUE)) {
  cat("SKIP: package 'splines' is not installed\n")
  quit(status = 0)
}

contains_usemethod <- function(expr) {
  if (is.call(expr)) {
    if (identical(expr[[1L]], as.name("UseMethod"))) {
      return(TRUE)
    }
    for (i in seq_along(expr)) {
      if (contains_usemethod(expr[[i]])) {
        return(TRUE)
      }
    }
  }

  if (is.expression(expr) || is.pairlist(expr)) {
    for (i in seq_along(expr)) {
      if (contains_usemethod(expr[[i]])) {
        return(TRUE)
      }
    }
  }

  FALSE
}

suppressWarnings(try(unloadNamespace("splines"), silent = TRUE))
library(splines)

ns <- asNamespace("splines")
all_names <- ls(ns, all.names = TRUE)
all_functions <- Filter(function(nm) is.function(get(nm, envir = ns)), all_names)

generic_names <- Filter(
  function(nm) contains_usemethod(body(get(nm, envir = ns))),
  all_functions
)

stopifnot(length(generic_names) >= 1L)

before_generic <- vapply(
  generic_names,
  function(nm) rcp::rcp_is_compiled(get(nm, envir = ns)),
  logical(1L)
)
stopifnot(!any(before_generic))

res <- rcp::rcp_cmppkg("splines")
stopifnot(is.list(res))
stopifnot(res$compiled >= 1L)

after_generic <- vapply(
  generic_names,
  function(nm) rcp::rcp_is_compiled(get(nm, envir = ns)),
  logical(1L)
)
stopifnot(!any(after_generic))

cat("OK\n")
