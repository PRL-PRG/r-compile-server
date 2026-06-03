#? stdlib
`acf2AR` <- function (acf) 
{
    r <- as.double(drop(acf))
    order.max <- length(r) - 1
    if (order.max <= 0) 
        stop("'acf' must be of length two or more")
    z <- .Fortran(C_eureka, as.integer(order.max), r, r, coefs = double(order.max^2), 
        vars = double(order.max), double(order.max))
    nm <- paste0("ar(", 1L:order.max, ")")
    matrix(z$coefs, order.max, order.max, dimnames = list(nm, 
        1L:order.max))
}

# Examples
(Acf <- ARMAacf(c(0.6, 0.3, -0.2)))
acf2AR(Acf)

