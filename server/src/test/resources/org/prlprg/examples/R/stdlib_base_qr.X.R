#? stdlib
`qr.X` <- function (qr, complete = FALSE, ncol = if (complete) nrow(R) else min(dim(R))) 
{
    if (!is.qr(qr)) 
        stop("argument is not a QR decomposition")
    pivoted <- !identical(qr$pivot, ip <- seq_along(qr$pivot))
    R <- qr.R(qr, complete = TRUE)
    if (pivoted && ncol < length(qr$pivot)) 
        stop("need larger value of 'ncol' as pivoting occurred")
    cmplx <- mode(R) == "complex"
    p <- as.integer(dim(R)[2L])
    if (is.na(p)) 
        stop("invalid NCOL(R)")
    if (ncol < p) 
        R <- R[, seq_len(ncol), drop = FALSE]
    else if (ncol > p) {
        tmp <- diag(if (!cmplx) 
            1
        else 1 + (0+0i), nrow(R), ncol)
        tmp[, seq_len(p)] <- R
        R <- tmp
    }
    res <- qr.qy(qr, R)
    cn <- colnames(res)
    if (pivoted) {
        res[, qr$pivot] <- res[, ip]
        if (!is.null(cn)) 
            colnames(res)[qr$pivot] <- cn[ip]
    }
    res
}
