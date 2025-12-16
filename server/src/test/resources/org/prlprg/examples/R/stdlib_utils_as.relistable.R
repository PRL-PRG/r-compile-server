#? stdlib
`as.relistable` <- function (x) 
{
    if (!inherits(x, "relistable")) 
        class(x) <- c("relistable", class(x))
    x
}
