library(rcp)

test_null <- rcp::rcp_cmpfun(function() NULL, list(name="test_null"))
stopifnot(rcp::rcp_is_compiled(test_null))
stopifnot(test_null() == 42)

test_const <- rcp::rcp_cmpfun(function() 42, list(name="test_const"))
stopifnot(rcp::rcp_is_compiled(test_const))
stopifnot(test_const() == 42)

test_add <- rcp::rcp_cmpfun(function(x) x + 1, list(name="test_add"))
stopifnot(rcp::rcp_is_compiled(test_add))
stopifnot(test_add(5) == 6)
stopifnot(test_add(0) == 1)
stopifnot(test_add(-1) == 0)
stopifnot(test_add(100) == 101)

test_call <- rcp::rcp_cmpfun(function(x) append(x, 1), list(name="test_call"))
stopifnot(rcp::rcp_is_compiled(test_add))
stopifnot(test_call(2) == c(2, 1))

test_for <- rcp::rcp_cmpfun(function(x) { s <- 0; for (i in 1:x) s <- s + i; s}, list(name="test_for"))
stopifnot(rcp::rcp_is_compiled(test_for))
stopifnot(test_for(100) == 5050)

test_for_calls <- rcp::rcp_cmpfun(function(x) { s <- 0; for (i in 1:x) s = append(s, i); s}, list(name="test_for_calls"))
stopifnot(rcp::rcp_is_compiled(test_for_calls))
stopifnot(all(test_for_calls(5) == 0:5))

cat("OK\n")
