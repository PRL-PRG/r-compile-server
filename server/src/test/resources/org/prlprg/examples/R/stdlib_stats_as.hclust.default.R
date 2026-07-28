#? stdlib
`as.hclust.default` <- function (x, ...) 
{
    if (inherits(x, "hclust")) 
        x
    else stop(gettextf("argument 'x' cannot be coerced to class %s", 
        dQuote("hclust")), if (!is.null(oldClass(x))) 
        gettextf("\n Consider providing an as.hclust.%s() method", 
            oldClass(x)[1L]), domain = NA)
}
