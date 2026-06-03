#? stdlib
`print.terms` <- function (x, ...) 
{
    print.default(unclass(x), ...)
    invisible(x)
}
