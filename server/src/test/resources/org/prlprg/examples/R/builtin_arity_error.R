#? crashes("arguments passed")
# A fixed-arity builtin called with too few arguments: bc2fir pads the static call with
# `<missing>`, Fir2C drops the padding, and R's `checkArity` raises the error.
f <- function() is.call()
f()
