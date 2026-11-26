# `quote(expr = )` returns the empty symbol: its argument is supplied, so it isn't dropped. `f`
# doesn't force `x`, so passing it is no error.
f <- function(x) 1
for (q in 1:12) f(2)
e <- quote(expr = )
f(e)
