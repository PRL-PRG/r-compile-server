#? stdlib
`alias.formula` <- function (object, data, ...) 
{
    lm.obj <- if (missing(data)) 
        aov(object)
    else aov(object, data)
    alias(lm.obj, ...)
}
