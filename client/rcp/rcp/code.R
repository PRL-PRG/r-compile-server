options(rcp.cmpfun.entry_exit_hooks = TRUE)
library(rcp)
fib <- function(x) {
  if (x == 0) 0
  else if (x == 1) 1
  else fib(x-2) + fib(x-1)
}

fib = rcp::rcp_cmpfun(fib, list(name="fib"))
fib(10)
print(rcp::rcp_get_types_df("fib"))

library(rcp)
test <- function(x) {
  if (x == 0) x=10
  else x=11
  x
}

test =rcp::rcp_cmpfun(test);
test(1)

exec <- function(x) {
 1
}


tmp = rcp::rcp_cmpfun(exec)



exec <- function(x) {
repeat {
                              next
                      }
}