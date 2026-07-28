#? stdlib
`bw.nrd` <- function (x) 
{
    if (length(x) < 2L) 
        stop("need at least 2 data points")
    r <- quantile(x, c(0.25, 0.75))
    h <- (r[2L] - r[1L])/1.34
    1.06 * min(sqrt(var(x)), h) * length(x)^(-1/5)
}
