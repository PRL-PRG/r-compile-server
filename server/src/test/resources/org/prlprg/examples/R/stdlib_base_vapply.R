#? stdlib
`vapply` <- function (X, FUN, FUN.VALUE, ..., USE.NAMES = TRUE) 
{
    FUN <- match.fun(FUN)
    if (!is.vector(X) || is.object(X)) 
        X <- as.list(X)
    .Internal(vapply(X, FUN, FUN.VALUE, USE.NAMES))
}
