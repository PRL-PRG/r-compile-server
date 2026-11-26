# `...` elements that are promises, passed to an eager builtin.
m <- function(...) { dots <- list(...); dots[[1L]][[1L]] }
m(c(10, 20), 30)
