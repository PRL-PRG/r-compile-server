#? stdlib
`dimnames<-.data.frame` <- function (x, value) 
{
    d <- dim(x)
    if (!is.list(value) || length(value) != 2L) 
        stop("invalid 'dimnames' given for data frame")
    value[[1L]] <- as.character(value[[1L]])
    value[[2L]] <- as.character(value[[2L]])
    if (d[[1L]] != length(value[[1L]]) || d[[2L]] != length(value[[2L]])) 
        stop("invalid 'dimnames' given for data frame")
    row.names(x) <- value[[1L]]
    names(x) <- value[[2L]]
    x
}
