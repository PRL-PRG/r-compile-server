#? stdlib
`[[.factor` <- function (x, ...) 
{
    y <- NextMethod("[[")
    attr(y, "contrasts") <- attr(x, "contrasts")
    attr(y, "levels") <- attr(x, "levels")
    class(y) <- oldClass(x)
    y
}
