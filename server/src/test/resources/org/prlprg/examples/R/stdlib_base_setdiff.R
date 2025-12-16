#? stdlib
`setdiff` <- function (x, y) 
{
    u <- as.vector(x)
    v <- as.vector(y)
    u[!duplicated(unclass(u)) & (match(u, v, 0L) == 0L)]
}
