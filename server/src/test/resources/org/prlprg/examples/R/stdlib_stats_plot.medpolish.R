#? stdlib
`plot.medpolish` <- function (x, main = "Tukey Additivity Plot", ...) 
{
    plot(outer(x$row, x$col)/x$overall, x$residuals, main = main, 
        xlab = "Diagnostic Comparison Values", ylab = "Residuals", 
        ...)
    abline(h = 0, v = 0, lty = "dotted")
}
