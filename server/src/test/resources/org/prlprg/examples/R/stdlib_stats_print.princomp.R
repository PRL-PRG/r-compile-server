#? stdlib
`print.princomp` <- function (x, ...) 
{
    cat("Call:\n")
    dput(x$call, control = NULL)
    cat("\nStandard deviations:\n")
    print(x$sdev, ...)
    cat("\n", length(x$scale), " variables and ", x$n.obs, "observations.\n")
    invisible(x)
}
