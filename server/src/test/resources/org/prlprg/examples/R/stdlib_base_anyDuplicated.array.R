#? stdlib
`anyDuplicated.array` <- function (x, incomparables = FALSE, MARGIN = 1L, fromLast = FALSE, 
    ...) 
{
    if (!isFALSE(incomparables)) 
        .NotYetUsed("incomparables != FALSE")
    dx <- dim(x)
    ndim <- length(dx)
    if (any(MARGIN > ndim)) 
        stop(gettextf("MARGIN = %s is invalid for dim = %s", 
            paste(MARGIN, collapse = ","), paste(dx, collapse = ",")), 
            domain = NA)
    temp <- if ((ndim > 1L) && (prod(dx[-MARGIN]) > 1L)) 
        asplit(x, MARGIN)
    else x
    anyDuplicated.default(temp, fromLast = fromLast)
}
