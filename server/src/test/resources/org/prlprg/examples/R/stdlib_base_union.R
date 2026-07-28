#? stdlib
`union` <- function (x, y) 
{
    u <- as.vector(x)
    v <- as.vector(y)
    unique(c(u, v))
}
