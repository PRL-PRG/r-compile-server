#? stdlib
`type.convert.list` <- function (x, ...) 
{
    for (i in seq_along(x)) x[[i]] <- type.convert(x[[i]], ...)
    x
}
