library(rcp)

# Enable the RCP JIT (hooks into R's JIT mechanism)
rcp_jit_enable()

# Test 1: global function gets JIT-compiled when called
my_add <- function(x, y) x + y
stopifnot(!rcp_is_compiled(my_add))
for (i in 1:10) my_add(1L, 2L)
stopifnot(rcp_is_compiled(my_add))
stopifnot(my_add(3, 4) == 7)

rcp_jit_disable()

# Test 2: after disabling, new functions should not be JIT-compiled
new_fun <- function(x) x * 3
for (i in 1:10) new_fun(1L)
stopifnot(!rcp_is_compiled(new_fun))

cat("OK\n")
