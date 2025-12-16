#? stdlib
`deriv.formula` <- function (expr, namevec, function.arg = NULL, tag = ".expr", 
    hessian = FALSE, ...) 
{
    if ((le <- length(expr)) > 1L) 
        .External(C_deriv, expr[[le]], namevec, function.arg, 
            tag, hessian)
    else stop("invalid formula in deriv")
}
