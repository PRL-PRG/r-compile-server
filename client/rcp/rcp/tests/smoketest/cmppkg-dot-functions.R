library(rcp)
library(splines)

ns <- asNamespace("splines")
all_names <- ls(ns, all.names = TRUE)
dot_funs <- Filter(
  function(nm) startsWith(nm, ".") && is.function(get(nm, envir = ns)),
  all_names
)

stopifnot(length(dot_funs) >= 1L)

target <- ".onUnload"
if (!target %in% dot_funs) {
  target <- dot_funs[[1L]]
}

before <- rcp::rcp_is_compiled(get(target, envir = ns))
res <- rcp::rcp_cmppkg("splines")
after <- rcp::rcp_is_compiled(get(target, envir = ns))

stopifnot(is.list(res))
stopifnot(res$compiled >= 1L)
stopifnot(isFALSE(before) || isTRUE(before))
stopifnot(after)

cat("OK\n")