#? stdlib
`co.intervals` <- function (x, number = 6, overlap = 0.5) 
{
    x <- sort(x[!is.na(x)])
    n <- length(x)
    r <- n/(number * (1 - overlap) + overlap)
    ii <- 0:(number - 1) * (1 - overlap) * r
    x1 <- x[round(1 + ii)]
    xr <- x[round(r + ii)]
    keep <- c(TRUE, diff(x1) > 0 | diff(xr) > 0)
    j.gt.0 <- 0 < (jump <- diff(x))
    eps <- 0.5 * if (any(j.gt.0)) 
        min(jump[j.gt.0])
    else 0
    cbind(x1[keep] - eps, xr[keep] + eps)
}
