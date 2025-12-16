#? stdlib
`Filter` <- function (f, x) 
{
    f <- match.fun(f)
    ind <- as.logical(unlist(lapply(x, f)))
    x[which(ind)]
}
