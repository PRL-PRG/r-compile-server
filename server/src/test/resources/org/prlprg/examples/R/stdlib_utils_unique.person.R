#? stdlib
`unique.person` <- function (x, ...) 
{
    y <- NextMethod("unique")
    class(y) <- class(x)
    y
}
