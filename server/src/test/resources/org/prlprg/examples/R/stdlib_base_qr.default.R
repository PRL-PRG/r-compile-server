#? stdlib
`qr.default` <- function (x, tol = 1e-07, LAPACK = FALSE, ...) 
{
    x <- as.matrix(x)
    if (is.complex(x)) 
        return(structure(.Internal(La_qr_cmplx(x)), class = "qr"))
    if (LAPACK) 
        return(structure(.Internal(La_qr(x)), useLAPACK = TRUE, 
            class = "qr"))
    p <- as.integer(ncol(x))
    if (is.na(p)) 
        stop("invalid ncol(x)")
    n <- as.integer(nrow(x))
    if (is.na(n)) 
        stop("invalid nrow(x)")
    if (1 * n * p > 2147483647) 
        stop("too large a matrix for LINPACK")
    storage.mode(x) <- "double"
    res <- .Fortran(.F_dqrdc2, qr = x, n, n, p, as.double(tol), 
        rank = integer(1L), qraux = double(p), pivot = as.integer(seq_len(p)), 
        double(2L * p))[c(1, 6, 7, 8)]
    if (!is.null(cn <- colnames(x))) 
        colnames(res$qr) <- cn[res$pivot]
    class(res) <- "qr"
    res
}
