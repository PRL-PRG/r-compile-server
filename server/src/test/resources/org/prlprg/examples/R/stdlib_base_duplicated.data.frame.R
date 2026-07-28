#? stdlib
`duplicated.data.frame` <- function (x, incomparables = FALSE, fromLast = FALSE, ...) 
{
    if (!isFALSE(incomparables)) 
        .NotYetUsed("incomparables != FALSE")
    n <- length(x)
    if (!n) 
        duplicated(logical(nrow(x)))
    else if (n == 1L) 
        duplicated(x[[1L]], fromLast = fromLast, ...)
    else {
        if (any(i <- vapply(x, is.factor, NA))) 
            x[i] <- lapply(x[i], as.numeric)
        if (any(i <- (lengths(lapply(x, dim)) == 2L))) 
            x[i] <- lapply(x[i], split.data.frame, seq_len(nrow(x)))
        duplicated(do.call(Map, `names<-`(c(list, x), NULL)), 
            fromLast = fromLast)
    }
}
