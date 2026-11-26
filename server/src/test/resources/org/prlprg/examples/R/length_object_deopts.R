#? [opt.fir2c.opt.eval]crashes("deoptimization triggered")
# `length` of an object dispatches (`length.foo`), so the unboxed `length`, which doesn't, deopts
# (an error in C). It gave the length of the list.
length.foo <- function(x) 99L
n <- function(x) length(x)
for (i in 1:12) n(list(i, 2))
# The interpreter has no `$`, so the feedback stops here.
invisible(.Machine$integer.max)
n(structure(list(1, 2), class = "foo"))
