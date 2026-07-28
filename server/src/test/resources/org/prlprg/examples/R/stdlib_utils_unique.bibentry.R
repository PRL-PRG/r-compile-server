#? stdlib
`unique.bibentry` <- function (x, ...) 
{
    y <- NextMethod("unique")
    class(y) <- class(x)
    y
}
