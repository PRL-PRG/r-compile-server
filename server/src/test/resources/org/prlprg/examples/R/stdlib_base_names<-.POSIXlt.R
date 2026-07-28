#? stdlib
`names<-.POSIXlt` <- function (x, value) 
{
    if (length(yr <- x$year) < (n <- length(x))) 
        x$year <- rep_len(yr, n)
    names(x$year) <- value
    x
}
