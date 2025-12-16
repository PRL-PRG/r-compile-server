#? stdlib
`unique.default` <- function (x, incomparables = FALSE, fromLast = FALSE, nmax = NA, 
    ...) 
{
    if (!is.object(x)) 
        return(.Internal(unique(x, incomparables, fromLast, nmax)))
    if (is.factor(x)) {
        z <- .Internal(unique(x, incomparables, fromLast, min(length(x), 
            nlevels(x) + 1L)))
        return(factor(z, levels = seq_len(nlevels(x)), labels = levels(x), 
            ordered = is.ordered(x)))
    }
    z <- .Internal(unique(x, incomparables, fromLast, nmax))
    if (inherits(x, "POSIXct")) 
        structure(z, class = class(x), tzone = attr(x, "tzone"))
    else if (inherits(x, "Date")) 
        structure(z, class = class(x))
    else z
}
