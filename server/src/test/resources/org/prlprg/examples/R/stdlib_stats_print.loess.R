#? stdlib
`print.loess` <- function (x, digits = max(3L, getOption("digits") - 3L), ...) 
{
    if (!is.null(cl <- x$call)) {
        cat("Call:\n")
        dput(cl, control = NULL)
    }
    cat("\nNumber of Observations:", x$n, "\n")
    cat("Equivalent Number of Parameters:", format(round(x$enp, 
        2L)), "\n")
    cat("Residual", if (x$pars$family == "gaussian") 
        "Standard Error:"
    else "Scale Estimate:", format(signif(x$s, digits)), "\n")
    invisible(x)
}
