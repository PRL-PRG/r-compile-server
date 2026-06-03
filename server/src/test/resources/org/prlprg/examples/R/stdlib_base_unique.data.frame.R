#? stdlib
`unique.data.frame` <- function (x, incomparables = FALSE, fromLast = FALSE, ...) 
{
    if (!isFALSE(incomparables)) 
        .NotYetUsed("incomparables != FALSE")
    x[!duplicated(x, fromLast = fromLast, ...), , drop = FALSE]
}
