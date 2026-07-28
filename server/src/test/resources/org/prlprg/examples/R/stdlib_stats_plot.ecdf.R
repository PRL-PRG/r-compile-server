#? stdlib
`plot.ecdf` <- function (x, ..., ylab = "Fn(x)", verticals = FALSE, col.01line = "gray70", 
    pch = 19) 
{
    plot.stepfun(x, ..., ylab = ylab, verticals = verticals, 
        pch = pch)
    abline(h = c(0, 1), col = col.01line, lty = 2)
}
