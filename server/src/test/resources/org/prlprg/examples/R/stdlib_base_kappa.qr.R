#? stdlib
`kappa.qr` <- function (z, ...) 
{
    stopifnot(length(d <- dim(qr <- z$qr)) == 2L)
    R <- if (d[1L] > d[2L]) 
        qr[seq_len(d[2L]), , drop = FALSE]
    else if (d[1L] < d[2L]) 
        qr[, seq_len(d[1L]), drop = FALSE]
    else qr
    R[lower.tri(R)] <- 0
    .kappa_tri(R, ...)
}
