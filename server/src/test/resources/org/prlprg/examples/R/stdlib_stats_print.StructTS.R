#? stdlib
`print.StructTS` <- function (x, digits = max(3L, getOption("digits") - 3L), ...) 
{
    cat("\nCall:", deparse(x$call, width.cutoff = 75L), "", sep = "\n")
    cat("Variances:\n")
    print.default(x$coef, print.gap = 2L, digits = digits, ...)
    invisible(x)
}
