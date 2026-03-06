library(rcp)

# Factorial: fac(3) -> fac(2) -> fac(1) -> returns 6
fac <- function(x) {
  if (x <= 1) {
    return(1)
  } else {
    return(x * fac(x - 1))
  }
}

cat("Compiling recursive function...\n")
fac <- rcp::rcp_cmpfun(fac, list(name="fac"))

cat("Executing recursive function...\n")
res <- fac(3)
stopifnot(res == 6)
cat("Result:", res, "\n")
