#? stdlib
`KalmanSmooth` <- function (y, mod, nit = 0L) 
{
    z <- .Call(C_KalmanSmooth, y, mod, as.integer(nit))
    dn <- dim(z$smooth)
    dim(z$var) <- dn[c(1L, 2L, 2L)]
    z
}
