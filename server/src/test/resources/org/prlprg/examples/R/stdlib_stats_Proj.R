#? stdlib
`Proj` <- function (X, orth = FALSE) 
{
    X <- Thin.col(X)
    P <- if (ncol(X) == 0) 
        matrix(0, nrow(X), nrow(X))
    else X %*% solve(crossprod(X), t(X))
    if (orth) 
        diag(nrow = nrow(X)) - P
    else P
}
