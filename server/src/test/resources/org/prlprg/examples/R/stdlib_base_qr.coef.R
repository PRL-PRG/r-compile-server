#? stdlib
`qr.coef` <- function (qr, y) 
{
    if (!is.qr(qr)) 
        stop("first argument must be a QR decomposition")
    n <- as.integer(nrow(qr$qr))
    if (is.na(n)) 
        stop("invalid nrow(qr$qr)")
    p <- as.integer(ncol(qr$qr))
    if (is.na(p)) 
        stop("invalid ncol(qr$qr)")
    k <- as.integer(qr$rank)
    if (is.na(k)) 
        stop("invalid ncol(qr$rank)")
    im <- is.matrix(y)
    if (!im) 
        y <- as.matrix(y)
    ny <- as.integer(ncol(y))
    if (is.na(ny)) 
        stop("invalid ncol(y)")
    if (nrow(y) != n) 
        stop("'qr' and 'y' must have the same number of rows")
    isC <- is.complex(qr$qr)
    coef <- matrix(if (isC) 
        NA_complex_
    else NA_real_, p, ny)
    ix <- if (p > n) 
        c(seq_len(n), rep(NA, p - n))
    else seq_len(p)
    if (!is.null(nam <- colnames(qr$qr))) 
        pivotted <- NA
    if (p == 0L) {
        pivotted <- FALSE
    }
    else if (isC) {
        coef[qr$pivot, ] <- .Internal(qr_coef_cmplx(qr, y))[ix, 
            ]
    }
    else if (isTRUE(attr(qr, "useLAPACK"))) {
        coef[qr$pivot, ] <- .Internal(qr_coef_real(qr, y))[ix, 
            ]
    }
    else if (k > 0L) {
        storage.mode(y) <- "double"
        z <- .Fortran(.F_dqrcf, as.double(qr$qr), n, k, as.double(qr$qraux), 
            y, ny, coef = matrix(0, nrow = k, ncol = ny), info = integer(1L), 
            NAOK = TRUE)[c("coef", "info")]
        if (z$info) 
            stop("exact singularity in 'qr.coef'")
        pivotted <- k < p
        if (pivotted) 
            coef[qr$pivot[seq_len(k)], ] <- z$coef
        else coef <- z$coef
    }
    if (!is.null(nam)) {
        if (is.na(pivotted)) 
            pivotted <- is.unsorted(qr$pivot)
        if (pivotted) 
            rownames(coef)[qr$pivot] <- nam
        else rownames(coef) <- nam
    }
    if (im && !is.null(nam <- colnames(y))) 
        colnames(coef) <- nam
    if (im) 
        coef
    else drop(coef)
}
