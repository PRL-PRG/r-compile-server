#? stdlib
`unique.matrix` <- function (x, incomparables = FALSE, MARGIN = 1, fromLast = FALSE, 
    ...) 
{
    if (!isFALSE(incomparables)) 
        .NotYetUsed("incomparables != FALSE")
    dx <- dim(x)
    ndim <- length(dx)
    if (length(MARGIN) != 1L || (MARGIN > ndim)) 
        stop(gettextf("MARGIN = %s is invalid for dim = %s", 
            paste(MARGIN, collapse = ","), paste(dx, collapse = ",")), 
            domain = NA)
    temp <- if ((ndim > 1L) && (prod(dx[-MARGIN]) > 1L)) 
        asplit(x, MARGIN)
    else x
    args <- rep(alist(a = ), ndim)
    names(args) <- NULL
    args[[MARGIN]] <- !duplicated.default(temp, fromLast = fromLast, 
        ...)
    do.call(`[`, c(list(x), args, list(drop = FALSE)))
}
