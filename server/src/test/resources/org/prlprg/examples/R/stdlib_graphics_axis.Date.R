#? stdlib
`axis.Date` <- function (side, x, at, format, labels = TRUE, ...) 
{
    has.at <- !missing(at) && !is.null(at)
    range <- sort(par("usr")[if (side%%2) 
        1L:2L
    else 3:4L])
    range[1L] <- ceiling(range[1L])
    range[2L] <- floor(range[2L])
    rangeDate <- range
    class(rangeDate) <- "Date"
    if (has.at) {
        if (is.numeric(at)) 
            class(at) <- "Date"
        else at <- as.Date(at)
        z <- at[is.finite(at)]
        if (missing(format)) {
            format <- if (!missing(x)) 
                extendDateTimeFormat(x, z)
            else extendDateTimeFormat(rangeDate, z)
        }
    }
    else {
        z <- grDevices:::prettyDate(rangeDate, n = par("lab")[2 - 
            side%%2])
        if (missing(format)) 
            format <- attr(z, "format")
    }
    keep <- z >= range[1L] & z <= range[2L]
    z <- z[keep]
    if (!is.logical(labels)) 
        labels <- labels[keep]
    else if (isTRUE(labels)) 
        labels <- format(z, format = format)
    else if (isFALSE(labels)) 
        labels <- rep("", length(z))
    axis(side, at = z, labels = labels, ...)
}
