#? stdlib
`qr.Q` <- function (qr, complete = FALSE, Dvec) 
{
    if (!is.qr(qr)) 
        stop("argument is not a QR decomposition")
    dqr <- dim(qr$qr)
    n <- dqr[1L]
    cmplx <- mode(qr$qr) == "complex"
    if (missing(Dvec)) 
        Dvec <- rep.int(if (cmplx) 
            1 + (0+0i)
        else 1, if (complete) 
            n
        else min(dqr))
    D <- if (complete) 
        diag(Dvec, n)
    else {
        ncols <- min(dqr)
        diag(Dvec[seq_len(ncols)], nrow = n, ncol = ncols)
    }
    qr.qy(qr, D)
}
