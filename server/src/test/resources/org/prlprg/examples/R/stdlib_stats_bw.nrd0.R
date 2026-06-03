#? stdlib
`bw.nrd0` <- function (x) 
{
    if (length(x) < 2L) 
        stop("need at least 2 data points")
    hi <- sd(x)
    if (!(lo <- min(hi, IQR(x)/1.34))) 
        (lo <- hi) || (lo <- abs(x[1L])) || (lo <- 1)
    0.9 * lo * length(x)^(-0.2)
}
