library(rcp)

# Non-JIT wrapper that calls .Call (avoids issue #12 with .Call from JIT code)
throw_exc <- function() .Call("__rcp_throw_exception")

# One JIT frame: g calls throw_exc (non-JIT)
g <- function() throw_exc()
g <- rcp::rcp_cmpfun(g, list(name = "g"))

result <- .Call("__rcp_test_catch", quote(g()), .GlobalEnv)
stopifnot(isTRUE(result))

# Two JIT frames: f (JIT) -> g (JIT) -> throw_exc (non-JIT)
f <- function() g()
f <- rcp::rcp_cmpfun(f, list(name = "f"))

result <- .Call("__rcp_test_catch", quote(f()), .GlobalEnv)
stopifnot(isTRUE(result))

cat("OK\n")
