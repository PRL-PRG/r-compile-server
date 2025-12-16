#? stdlib
`inverse.rle` <- function (x, ...) 
{
    if (is.null(le <- x$lengths) || is.null(v <- x$values) || 
        length(le) != length(v)) 
        stop("invalid 'rle' structure")
    rep.int(v, le)
}
