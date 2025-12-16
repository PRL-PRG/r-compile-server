#? stdlib
`Reduce` <- function (f, x, init, right = FALSE, accumulate = FALSE, simplify = TRUE) 
{
    mis <- missing(init)
    len <- length(x)
    if (len == 0L) 
        return(if (mis) NULL else init)
    f <- match.fun(f)
    if (!is.vector(x) || is.object(x)) 
        x <- as.list(x)
    ind <- seq_len(len)
    if (mis) {
        if (right) {
            init <- x[[len]]
            ind <- ind[-len]
        }
        else {
            init <- x[[1L]]
            ind <- ind[-1L]
        }
    }
    if (!accumulate) {
        if (right) {
            for (i in rev(ind)) init <- forceAndCall(2, f, x[[i]], 
                init)
        }
        else {
            for (i in ind) init <- forceAndCall(2, f, init, x[[i]])
        }
        init
    }
    else {
        len <- length(ind) + 1L
        out <- vector("list", len)
        if (mis) {
            if (right) {
                out[[len]] <- init
                for (i in rev(ind)) {
                  init <- forceAndCall(2, f, x[[i]], init)
                  out[[i]] <- init
                }
            }
            else {
                out[[1L]] <- init
                for (i in ind) {
                  init <- forceAndCall(2, f, init, x[[i]])
                  out[[i]] <- init
                }
            }
        }
        else {
            if (right) {
                out[[len]] <- init
                for (i in rev(ind)) {
                  init <- forceAndCall(2, f, x[[i]], init)
                  out[[i]] <- init
                }
            }
            else {
                for (i in ind) {
                  out[[i]] <- init
                  init <- forceAndCall(2, f, init, x[[i]])
                }
                out[[len]] <- init
            }
        }
        if (all(lengths(out) == 1L) && simplify) 
            out <- unlist(out, recursive = FALSE)
        out
    }
}
