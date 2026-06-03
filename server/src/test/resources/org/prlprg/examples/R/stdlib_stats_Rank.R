#? stdlib
`Rank` <- function (X, tol = 1e-07) 
qr(zapsmall(X, digits = -log10(tol) + 5), tol = tol, LAPACK = FALSE)$rank
