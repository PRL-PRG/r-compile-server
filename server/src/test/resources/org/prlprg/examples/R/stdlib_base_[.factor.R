#? stdlib
`[.factor` <- function (x, ..., drop = FALSE) 
{
    y <- NextMethod("[")
    attr(y, "contrasts") <- attr(x, "contrasts")
    attr(y, "levels") <- attr(x, "levels")
    class(y) <- oldClass(x)
    if (drop) 
        factor(y, exclude = if (anyNA(levels(x))) 
            NULL
        else NA)
    else y
}
