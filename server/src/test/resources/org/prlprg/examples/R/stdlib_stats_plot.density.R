#? stdlib
`plot.density` <- function (x, main = NULL, xlab = NULL, ylab = "Density", type = "l", 
    zero.line = TRUE, ...) 
{
    if (is.null(xlab)) 
        xlab <- paste("N =", x$n, "  Bandwidth =", formatC(x$bw))
    if (is.null(main)) 
        main <- sub("[.]default", "", deparse(x$call))
    plot.default(x, main = main, xlab = xlab, ylab = ylab, type = type, 
        ...)
    if (zero.line) 
        abline(h = 0, lwd = 0.25, col = "gray")
    invisible(NULL)
}

# Examples
