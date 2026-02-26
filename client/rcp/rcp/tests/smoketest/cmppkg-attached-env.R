library(rcp)
library(splines)

ns_env <- asNamespace("splines")
pkg_env <- as.environment("package:splines")

# sanity: attached binding and namespace binding start identical
stopifnot(identical(get("bs", envir = ns_env), get("bs", envir = pkg_env)))

res <- rcp::rcp_cmppkg("splines")
stopifnot(is.list(res))
stopifnot(res$compiled >= 1L)

ns_bs <- get("bs", envir = ns_env)
pkg_bs <- get("bs", envir = pkg_env)

# regression check: attached package binding is refreshed to the new namespace closure
stopifnot(identical(ns_bs, pkg_bs))
stopifnot(rcp::is_compiled(pkg_bs))

cat("OK\n")
