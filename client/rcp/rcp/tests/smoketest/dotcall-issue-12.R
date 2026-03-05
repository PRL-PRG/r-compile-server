# Test DOTCALL: .Call with NativeSymbolInfo (issue #12)

library(rcp)

test_dotcall <- rcp::rcp_cmpfun(
    function(x) .Call(rcp:::C_rcp_is_compiled, x),
    list(name="test_dotcall"))
stopifnot(rcp::rcp_is_compiled(test_dotcall))
# test_dotcall itself is compiled, so passing it should return TRUE
stopifnot(isTRUE(test_dotcall(test_dotcall)))
# A non-compiled function should return FALSE
stopifnot(isFALSE(test_dotcall(function() 1)))

# Test .Call with string (CALLBUILTIN path) — should already work
test_dotcall_str <- rcp::rcp_cmpfun(
    function(x) .Call("rcp_is_compiled", x, PACKAGE = "rcp"),
    list(name="test_dotcall_str"))
stopifnot(isTRUE(test_dotcall_str(test_dotcall)))
stopifnot(isFALSE(test_dotcall_str(function() 1)))

# Test DOTCALL with 0 args
test_dotcall_0 <- rcp::rcp_cmpfun(
    function() .Call(rcp:::C_rcp_dwarf_support),
    list(name="test_dotcall_0"))
stopifnot(is.logical(test_dotcall_0()))

cat("OK\n")
