library(rcp)

# Test: compile base package and verify functions work
stopifnot(!rcp_is_compiled(base::Reduce))
stopifnot(!rcp_is_compiled(base::Filter))
stopifnot(!rcp_is_compiled(base::Map))

rcp_cmppkg("base")

stopifnot(rcp_is_compiled(base::Reduce))
stopifnot(rcp_is_compiled(base::Filter))
stopifnot(rcp_is_compiled(base::Map))

# Verify compiled base functions still work correctly
stopifnot(Reduce("+", 1:5) == 15)
stopifnot(identical(Filter(is.numeric, list(1, "a", 2)), list(1, 2)))
stopifnot(identical(Map("+", 1:3, 4:6), list(5L, 7L, 9L)))

cat("OK\n")
