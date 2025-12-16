#? stdlib
`cut.Date` <- function (x, breaks, labels = NULL, start.on.monday = TRUE, right = FALSE, 
    ...) 
{
    if (!inherits(x, "Date")) 
        stop("'x' must be a date-time object")
    x <- as.Date(x)
    if (inherits(breaks, "Date")) {
        breaks <- sort(as.Date(breaks))
    }
    else if (is.numeric(breaks) && length(breaks) == 1L) {
    }
    else if (is.character(breaks) && length(breaks) == 1L) {
        by2 <- strsplit(breaks, " ", fixed = TRUE)[[1L]]
        if (length(by2) > 2L || length(by2) < 1L) 
            stop("invalid specification of 'breaks'")
        valid <- pmatch(by2[length(by2)], c("days", "weeks", 
            "months", "years", "quarters"))
        if (is.na(valid)) 
            stop("invalid specification of 'breaks'")
        start <- as.POSIXlt(min(x, na.rm = TRUE))
        if (valid == 1L) 
            incr <- 1L
        if (valid == 2L) {
            start$mday <- start$mday - start$wday
            if (start.on.monday) 
                start$mday <- start$mday + ifelse(start$wday > 
                  0L, 1L, -6L)
            start$isdst <- -1L
            incr <- 7L
        }
        if (valid == 3L) {
            start$mday <- 1L
            start$isdst <- -1L
            maxx <- max(x, na.rm = TRUE)
            end <- as.POSIXlt(maxx)
            step <- if (length(by2) == 2L) 
                as.integer(by2[1L])
            else 1L
            end <- as.POSIXlt(end + (31 * step * 86400))
            end$mday <- 1L
            end$isdst <- -1L
            breaks <- as.Date(seq(start, end, breaks))
            lb <- length(breaks)
            if (maxx < breaks[lb - 1]) 
                breaks <- breaks[-lb]
        }
        else if (valid == 4L) {
            start$mon <- 0L
            start$mday <- 1L
            start$isdst <- -1L
            maxx <- max(x, na.rm = TRUE)
            end <- as.POSIXlt(maxx)
            step <- if (length(by2) == 2L) 
                as.integer(by2[1L])
            else 1L
            end <- as.POSIXlt(end + (366 * step * 86400))
            end$mon <- 0L
            end$mday <- 1L
            end$isdst <- -1L
            breaks <- as.Date(seq(start, end, breaks))
            lb <- length(breaks)
            if (maxx < breaks[lb - 1]) 
                breaks <- breaks[-lb]
        }
        else if (valid == 5L) {
            qtr <- rep(c(0L, 3L, 6L, 9L), each = 3L)
            start$mon <- qtr[start$mon + 1L]
            start$mday <- 1L
            start$isdst <- -1L
            maxx <- max(x, na.rm = TRUE)
            end <- as.POSIXlt(maxx)
            step <- if (length(by2) == 2L) 
                as.integer(by2[1L])
            else 1L
            end <- as.POSIXlt(end + (93 * step * 86400))
            end$mon <- qtr[end$mon + 1L]
            end$mday <- 1L
            end$isdst <- -1L
            breaks <- as.Date(seq(start, end, paste(step * 3L, 
                "months")))
            lb <- length(breaks)
            if (maxx < breaks[lb - 1]) 
                breaks <- breaks[-lb]
        }
        else {
            start <- as.Date(start)
            if (length(by2) == 2L) 
                incr <- incr * as.integer(by2[1L])
            maxx <- max(x, na.rm = TRUE)
            breaks <- seq(start, maxx + incr, breaks)
            breaks <- breaks[seq_len(1L + max(which(breaks <= 
                maxx)))]
        }
    }
    else stop("invalid specification of 'breaks'")
    res <- cut(unclass(x), unclass(breaks), labels = labels, 
        right = right, ...)
    if (is.null(labels)) {
        levels(res) <- as.character(if (is.numeric(breaks)) x[!duplicated(res)] else breaks[-length(breaks)])
    }
    res
}
