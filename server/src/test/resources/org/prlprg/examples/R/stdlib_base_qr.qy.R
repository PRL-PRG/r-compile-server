#? stdlib
`qr.qy` <- function (qr, y) 
{
    if (!is.qr(qr)) 
        stop("argument is not a QR decomposition")
    if (is.complex(qr$qr)) 
        return(.Internal(qr_qy_cmplx(qr, as.matrix(y), FALSE)))
    if (isTRUE(attr(qr, "useLAPACK"))) 
        return(.Internal(qr_qy_real(qr, as.matrix(y), FALSE)))
    n <- as.integer(nrow(qr$qr))
    if (is.na(n)) 
        stop("invalid nrow(qr$qr)")
    k <- as.integer(qr$rank)
    ny <- as.integer(NCOL(y))
    if (is.na(ny)) 
        stop("invalid NCOL(y)")
    storage.mode(y) <- "double"
    if (NROW(y) != n) 
        stop("'qr' and 'y' must have the same number of rows")
    .Fortran(.F_dqrqy, as.double(qr$qr), n, k, as.double(qr$qraux), 
        y, ny, qy = y)$qy
}
