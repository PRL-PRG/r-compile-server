#? stdlib
`terms.aovlist` <- function (x, ...) 
{
    x <- attr(x, "terms")
    terms(x, ...)
}
