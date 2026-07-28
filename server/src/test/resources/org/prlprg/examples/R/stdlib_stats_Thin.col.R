#? stdlib
`Thin.col` <- function (X, tol = 1e-07) 
{
    X <- zapsmall(X, digits = -log10(tol) + 5)
    QR <- qr(X, tol = tol, LAPACK = FALSE)
    X[, QR$pivot[seq_len(QR$rank)], drop = FALSE]
}
