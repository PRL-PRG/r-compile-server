#? stdlib
`deriv3.default` <- function (expr, namevec, function.arg = NULL, tag = ".expr", 
    hessian = TRUE, ...) 
.External(C_deriv, expr, namevec, function.arg, tag, hessian)
