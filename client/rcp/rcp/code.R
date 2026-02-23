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

library(rcp)
f <- function(x) {
  y <- x + 1 
  if(y > 0){
    z <- x - 1
  }
  else {
    z <- x + 1
  }
  y <- z / y
  z
}
f = rcp::rcp_cmpfun(f, list(name="f"))
f(14)
print(rcp::rcp_get_types_df("f"))

library(rcp)

g <- function(x, y) {
  cat(x, y, "\n")
  x
}
g = rcp::rcp_cmpfun(g, list(name = "g"))
g(34, "hello")
g(1L, "world!")
g("Nope", 456)
print(rcp::rcp_get_types_df("g"))

library(rcp)
h <- function(a, ...) {
  cat(a, ..., "\n")
}
h = rcp::rcp_cmpfun(h, list(name = "h"))
h(1, "hello")
h("world", 4, "three")
print(rcp::rcp_get_types_df("h"))