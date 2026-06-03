#? stdlib
`print.TukeyHSD` <- function (x, digits = getOption("digits"), ...) 
{
    cat("  Tukey multiple comparisons of means\n")
    cat("    ", format(100 * attr(x, "conf.level"), 2), "% family-wise confidence level\n", 
        sep = "")
    if (attr(x, "ordered")) 
        cat("    factor levels have been ordered\n")
    cat("\nFit: ", deparse(attr(x, "orig.call"), 500L), "\n\n", 
        sep = "")
    xx <- unclass(x)
    attr(xx, "orig.call") <- attr(xx, "conf.level") <- attr(xx, 
        "ordered") <- NULL
    xx[] <- lapply(xx, function(z, digits) {
        z[, "p adj"] <- round(z[, "p adj"], digits)
        z
    }, digits = digits)
    print.default(xx, digits, ...)
    invisible(x)
}
