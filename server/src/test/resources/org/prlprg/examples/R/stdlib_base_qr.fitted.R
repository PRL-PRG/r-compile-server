#? stdlib
`qr.fitted` <- function (qr, y, k = qr$rank) 
{
    if (!is.qr(qr)) 
        stop("argument is not a QR decomposition")
    if (is.complex(qr$qr)) 
        stop("not implemented for complex 'qr'")
    if (isTRUE(attr(qr, "useLAPACK"))) 
        stop("not supported for LAPACK QR")
    n <- as.integer(nrow(qr$qr))
    if (is.na(n)) 
        stop("invalid nrow(qr$qr)")
    k <- as.integer(k)
    if (k > qr$rank) 
        stop("'k' is too large")
    ny <- as.integer(NCOL(y))
    if (is.na(ny)) 
        stop("invalid NCOL(y)")
    if (NROW(y) != n) 
        stop("'qr' and 'y' must have the same number of rows")
    storage.mode(y) <- "double"
    .Fortran(.F_dqrxb, as.double(qr$qr), n, k, as.double(qr$qraux), 
        y, ny, xb = y)$xb
}
