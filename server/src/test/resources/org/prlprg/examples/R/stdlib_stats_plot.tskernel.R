#? stdlib
`plot.tskernel` <- function (x, type = "h", xlab = "k", ylab = "W[k]", main = attr(x, 
    "name"), ...) 
{
    i <- -x$m:x$m
    plot(i, x[i], type = type, xlab = xlab, ylab = ylab, main = main, 
        ...)
}
