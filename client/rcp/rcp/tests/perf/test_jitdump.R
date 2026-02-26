library(rcp)

stopifnot(.Call("rcp_perf_jit_support", PACKAGE = "rcp"))

fac <- function(n) {
  if (n <= 1) return(1)
  n * fac(n - 1)
}

fac <- rcp::rcp_cmpfun(fac, list(name = "fac"))
stopifnot(rcp::rcp_is_compiled(fac))

for (i in 1:1000000) fac(10)

cat("R test OK\n")
