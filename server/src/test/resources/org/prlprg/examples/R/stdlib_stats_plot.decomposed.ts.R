#? stdlib
`plot.decomposed.ts` <- function (x, ...) 
{
    xx <- x$x %||% with(x, if (type == "additive") 
        random + trend + seasonal
    else random * trend * seasonal)
    plot(cbind(observed = xx, trend = x$trend, seasonal = x$seasonal, 
        random = x$random), main = paste("Decomposition of", 
        x$type, "time series"), ...)
}
