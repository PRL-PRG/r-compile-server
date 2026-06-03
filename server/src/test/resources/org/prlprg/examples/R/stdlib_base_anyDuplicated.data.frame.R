#? stdlib
`anyDuplicated.data.frame` <- function (x, incomparables = FALSE, fromLast = FALSE, ...) 
{
    if (!isFALSE(incomparables)) 
        .NotYetUsed("incomparables != FALSE")
    if (any(i <- (lengths(lapply(x, dim)) == 2L))) 
        x[i] <- lapply(x[i], split.data.frame, seq_len(nrow(x)))
    anyDuplicated(do.call(Map, `names<-`(c(list, x), NULL)), 
        fromLast = fromLast)
}
