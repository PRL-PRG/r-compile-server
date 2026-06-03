#? stdlib
`as.alist.call` <- function (x) 
{
    y <- as.list(x)
    ind <- if (is.null(names(y))) 
        seq_along(y)
    else which(names(y) == "")
    if (length(ind)) {
        names(y)[ind] <- vapply(y[ind], paste, "", collapse = " ")
        y[ind] <- rep.int(list(alist(irrelevant = )[[1L]]), length(ind))
    }
    y
}
