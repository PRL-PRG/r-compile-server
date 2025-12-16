#? stdlib
`dgamma` <- function (x, shape, rate = 1, scale = 1/rate, log = FALSE) 
{
    if (!missing(rate) && !missing(scale)) {
        if (abs(rate * scale - 1) < 1e-15) 
            warning("specify 'rate' or 'scale' but not both")
        else stop("specify 'rate' or 'scale' but not both")
    }
    .Call(C_dgamma, x, shape, scale, log)
}
