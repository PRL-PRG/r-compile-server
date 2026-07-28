#? stdlib
`intersect` <- function (x, y) 
{
    if (is.null(x) || is.null(y)) 
        return(NULL)
    u <- as.vector(x)
    v <- as.vector(y)
    c(u[!duplicated(unclass(u)) & (match(u, v, 0L) > 0L)], v[numeric()])
}
