#? stdlib
`setequal` <- function (x, y) 
{
    x <- as.vector(x)
    y <- as.vector(y)
    !(anyNA(match(x, y)) || anyNA(match(y, x)))
}
