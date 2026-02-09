library(rcp)

test_add <- rcp::rcp_cmpfun(function(x) x + 1, list(name="test_add"))

stopifnot(rcp::is_compiled(test_add))
stopifnot(test_add(5) == 6)
stopifnot(test_add(0) == 1)
stopifnot(test_add(-1) == 0)
stopifnot(test_add(100) == 101)

cat("OK\n")
