#? stdlib
`qr.R` <- function (qr, complete = FALSE) 
{
    if (!is.qr(qr)) 
        stop("argument is not a QR decomposition")
    R <- qr$qr
    if (!complete) 
        R <- R[seq.int(min(dim(R))), , drop = FALSE]
    R[row(R) > col(R)] <- 0
    R
}
