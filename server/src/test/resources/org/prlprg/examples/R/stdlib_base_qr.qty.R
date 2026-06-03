#? stdlib
`qr.qty` <- function (qr, y) 
{
    if (!is.qr(qr)) 
        stop("argument is not a QR decomposition")
    if (is.complex(qr$qr)) 
        return(.Internal(qr_qy_cmplx(qr, as.matrix(y), TRUE)))
    if (isTRUE(attr(qr, "useLAPACK"))) 
        return(.Internal(qr_qy_real(qr, as.matrix(y), TRUE)))
    n <- as.integer(nrow(qr$qr))
    if (is.na(n)) 
        stop("invalid nrow(qr$qr)")
    k <- as.integer(qr$rank)
    ny <- as.integer(NCOL(y))
    if (is.na(ny)) 
        stop("invalid NCOL(y)")
    if (NROW(y) != n) 
        stop("'qr' and 'y' must have the same number of rows")
    storage.mode(y) <- "double"
    .Fortran(.F_dqrqty, as.double(qr$qr), n, k, as.double(qr$qraux), 
        y, ny, qty = y)$qty
}
