#? stdlib
`print.nls` <- function (x, digits = max(3L, getOption("digits") - 3L), ...) 
{
    cat("Nonlinear regression model\n")
    cat("  model: ", deparse(formula(x)), "\n", sep = "")
    cat("   data: ", deparse(x$data), "\n", sep = "")
    print(x$m$getAllPars(), digits = digits, ...)
    cat(" ", if (!is.null(x$weights) && diff(range(x$weights))) 
        "weighted ", "residual sum-of-squares: ", format(x$m$deviance(), 
        digits = digits), "\n", sep = "")
    .p.nls.convInfo(x, digits = digits)
    invisible(x)
}
