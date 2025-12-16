#? stdlib
`print.summary.ppr` <- function (x, ...) 
{
    print.ppr(x, ...)
    mu <- x$mu
    cat("\nProjection direction vectors ('alpha'):\n")
    print(format(x$alpha, ...), quote = FALSE)
    cat("\nCoefficients of ridge terms ('beta'):\n")
    print(format(x$beta, ...), quote = FALSE)
    if (any(x$edf > 0)) {
        cat("\nEquivalent df for ridge terms:\n")
        edf <- setNames(x$edf, paste("term", 1L:mu))
        print(round(edf, 2), ...)
    }
    invisible(x)
}
