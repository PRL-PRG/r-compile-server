#? stdlib
`Map` <- function (f, ...) 
{
    f <- match.fun(f)
    mapply(FUN = f, ..., SIMPLIFY = FALSE)
}
