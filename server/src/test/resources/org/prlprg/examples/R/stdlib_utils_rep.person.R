#? stdlib
`rep.person` <- function (x, ...) 
{
    y <- NextMethod("rep")
    class(y) <- class(x)
    y
}
