#? stdlib
`qr.resid` <- function (qr, y) 
{
    if (!is.qr(qr)) 
        stop("argument is not a QR decomposition")
    if (is.complex(qr$qr)) 
        stop("not implemented for complex 'qr'")
    if (isTRUE(attr(qr, "useLAPACK"))) 
        stop("not supported for LAPACK QR")
    k <- as.integer(qr$rank)
    if (k == 0) 
        return(y)
    n <- as.integer(nrow(qr$qr))
    if (is.na(n)) 
        stop("invalid nrow(qr$qr)")
    ny <- as.integer(NCOL(y))
    if (is.na(ny)) 
        stop("invalid NCOL(y)")
    if (NROW(y) != n) 
        stop("'qr' and 'y' must have the same number of rows")
    storage.mode(y) <- "double"
    .Fortran(.F_dqrrsd, as.double(qr$qr), n, k, as.double(qr$qraux), 
        y, ny, rsd = y)$rsd
}
