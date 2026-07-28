#? stdlib
`KalmanRun` <- function (y, mod, nit = 0L, update = FALSE) 
{
    z <- .Call(C_KalmanLike, y, mod, nit, TRUE, update)
    x <- z$values
    z[[1L]] <- c(Lik = 0.5 * (log(x[1L]) + x[2L]), s2 = x[1L])
    z
}
