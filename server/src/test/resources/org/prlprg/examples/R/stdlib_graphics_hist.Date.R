#? stdlib
`hist.Date` <- function (x, breaks, ..., xlab = deparse1(substitute(x)), plot = TRUE, 
    freq = FALSE, start.on.monday = TRUE, format, right = TRUE) 
{
    if (!inherits(x, "Date")) 
        stop("wrong method")
    force(xlab)
    incr <- 1
    if (missing(breaks)) 
        stop("Must specify 'breaks' in hist(<Date>)")
    if (inherits(breaks, "Date")) {
        breaks <- as.Date(breaks)
        d <- min(abs(diff(unclass(breaks))))
        if (d > 1) 
            incr <- 1
        if (d > 7) 
            incr <- 7
        if (d > 28) 
            incr <- 28
        if (d > 366) 
            incr <- 366
        num.br <- FALSE
    }
    else {
        num.br <- is.numeric(breaks) && length(breaks) == 1L
        if (num.br) {
        }
        else if (is.character(breaks) && length(breaks) == 1L) {
            valid <- pmatch(breaks, c("days", "weeks", "months", 
                "years", "quarters"))
            if (is.na(valid)) 
                stop("invalid specification of 'breaks'")
            start <- as.POSIXlt(min(x, na.rm = TRUE))
            incr <- 1
            if (valid > 1L) {
                start$isdst <- -1L
            }
            if (valid == 2L) {
                start$mday <- start$mday - start$wday
                if (start.on.monday) 
                  start$mday <- start$mday + if (start$wday > 
                    0L) 
                    1L
                  else -6L
                incr <- 7
            }
            if (valid == 3L) {
                start$mday <- 1L
                end <- as.POSIXlt(max(x, na.rm = TRUE))
                end <- as.POSIXlt(end + (31 * 86400))
                end$mday <- 1L
                end$isdst <- -1L
                breaks <- as.Date(seq(start, end, "months"))
                if (right) 
                  breaks <- breaks - 1
                if (missing(format)) 
                  format <- "%Y-%m-%d"
            }
            else if (valid == 4L) {
                start$mon <- 0L
                start$mday <- 1L
                end <- as.POSIXlt(max(x, na.rm = TRUE))
                end <- as.POSIXlt(end + (366 * 86400))
                end$mon <- 0L
                end$mday <- 1L
                end$isdst <- -1L
                breaks <- as.Date(seq(start, end, "years"))
                if (right) 
                  breaks <- breaks - 1
                if (missing(format)) 
                  format <- "%Y-%m-%d"
            }
            else if (valid == 5L) {
                qtr <- rep(c(0L, 3L, 6L, 9L), each = 3L)
                start$mon <- qtr[start$mon + 1L]
                start$mday <- 1L
                end <- as.POSIXlt(max(x, na.rm = TRUE))
                end <- as.POSIXlt(end + (93 * 86400))
                end$mon <- qtr[end$mon + 1L]
                end$mday <- 1L
                end$isdst <- -1L
                breaks <- as.Date(seq(start, end, "3 months"))
                if (right) 
                  breaks <- breaks - 1
                if (missing(format)) 
                  format <- "%Y-%m-%d"
            }
            else {
                start <- as.Date(start)
                maxx <- max(x, na.rm = TRUE)
                breaks <- seq(start, maxx + incr, breaks)
                if (length(breaks) > 2L) 
                  breaks <- breaks[seq_len(1L + max(which(breaks < 
                    maxx)))]
            }
        }
        else stop("invalid specification of 'breaks'")
    }
    res <- hist.default(unclass(x), unclass(breaks), plot = FALSE, 
        warn.unused = FALSE, right = right, ...)
    res$equidist <- TRUE
    res$xname <- xlab
    if (plot) {
        myplot <- function(res, xlab, freq, format, breaks, include.lowest, 
            fuzz, density = NULL, angle = 45, col = "lightgray", 
            border = NULL, lty = NULL, labels = FALSE, axes = TRUE, 
            xaxt = par("xaxt"), ...) {
            plot(res, xlab = xlab, axes = FALSE, freq = freq, 
                density = density, angle = angle, col = col, 
                border = border, lty = lty, labels = labels, 
                ...)
            if (axes) {
                axis(2, ...)
                if (xaxt != "n") {
                  if (num.br) 
                    breaks <- as.Date(res$breaks, origin = "1970-01-01")
                  axis.Date(1, at = breaks, format = format, 
                    ...)
                }
            }
        }
        myplot(res, xlab, freq, format, breaks, ...)
    }
    invisible(res)
}
