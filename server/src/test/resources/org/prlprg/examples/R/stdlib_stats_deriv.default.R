#? stdlib
`deriv.default` <- function (expr, namevec, function.arg = NULL, tag = ".expr", 
    hessian = FALSE, ...) 
.External(C_deriv, expr, namevec, function.arg, tag, hessian)
