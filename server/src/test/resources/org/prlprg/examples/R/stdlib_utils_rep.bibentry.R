#? stdlib
`rep.bibentry` <- function (x, ...) 
{
    y <- NextMethod("rep")
    class(y) <- class(x)
    y
}
