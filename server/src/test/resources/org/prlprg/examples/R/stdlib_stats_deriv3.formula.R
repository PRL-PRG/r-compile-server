#? stdlib
`deriv3.formula` <- function (expr, namevec, function.arg = NULL, tag = ".expr", 
    hessian = TRUE, ...) 
{
    if ((le <- length(expr)) > 1L) 
        .External(C_deriv, expr[[le]], namevec, function.arg, 
            tag, hessian)
    else stop("invalid formula in deriv")
}
