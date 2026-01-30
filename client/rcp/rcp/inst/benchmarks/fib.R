fib <- function(x) {
  if (x == 0) 0
  else if (x == 1) 1
  else fib(x-2) + fib(x-1)
}

# library(rcp)

fib <- rcp::rcp_cmpfun(fib, list(name="fib"))

fib(30)
