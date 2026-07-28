#? stdlib
`format.POSIXlt` <- function (x, format = "", usetz = FALSE, digits = getOption("digits.secs"), 
    ...) 
{
    if (!inherits(x, "POSIXlt")) 
        stop("wrong class")
    if (any(f0 <- format == "")) {
        times <- unlist(unclass(x)[1L:3L])[f0]
        secs <- x$sec[f0]
        secs <- secs[is.finite(secs)]
        np <- if (is.null(digits)) 
            0L
        else min(6L, digits)
        if (np >= 1L) 
            for (i in seq_len(np) - 1L) if (all(abs(secs - round(secs, 
                i)) < 1e-06)) {
                np <- i
                break
            }
        format[f0] <- if (all(times[is.finite(times)] == 0)) 
            "%Y-%m-%d"
        else if (np == 0L) 
            "%Y-%m-%d %H:%M:%S"
        else paste0("%Y-%m-%d %H:%M:%OS", np)
    }
    .Internal(format.POSIXlt(x, format, usetz))
}
