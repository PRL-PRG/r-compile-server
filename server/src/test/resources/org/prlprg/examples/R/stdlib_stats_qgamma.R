#? stdlib
`qgamma` <- function (p, shape, rate = 1, scale = 1/rate, lower.tail = TRUE, 
    log.p = FALSE) 
{
    if (!missing(rate) && !missing(scale)) {
        if (abs(rate * scale - 1) < 1e-15) 
            warning("specify 'rate' or 'scale' but not both")
        else stop("specify 'rate' or 'scale' but not both")
    }
    .Call(C_qgamma, p, shape, scale, lower.tail, log.p)
}
