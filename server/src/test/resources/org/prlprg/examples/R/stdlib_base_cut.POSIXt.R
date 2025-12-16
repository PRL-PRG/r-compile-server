#? stdlib
`cut.POSIXt` <- function (x, breaks, labels = NULL, start.on.monday = TRUE, right = FALSE, 
    ...) 
{
    if (!inherits(x, "POSIXt")) 
        stop("'x' must be a date-time object")
    x <- as.POSIXct(x)
    if (inherits(breaks, "POSIXt")) {
        breaks <- sort(as.POSIXct(breaks))
    }
    else if (is.numeric(breaks) && length(breaks) == 1L) {
    }
    else if (is.character(breaks) && length(breaks) == 1L) {
        by2 <- strsplit(breaks, " ", fixed = TRUE)[[1L]]
        if (length(by2) > 2L || length(by2) < 1L) 
            stop("invalid specification of 'breaks'")
        valid <- pmatch(by2[length(by2)], c("secs", "mins", "hours", 
            "days", "weeks", "months", "years", "DSTdays", "quarters"))
        if (is.na(valid)) 
            stop("invalid specification of 'breaks'")
        start <- as.POSIXlt(min(x, na.rm = TRUE))
        incr <- 1
        if (valid > 1L) {
            start$sec <- 0L
            incr <- 60
        }
        if (valid > 2L) {
            start$min <- 0L
            incr <- 3600
        }
        if (valid > 3L) {
            start$hour <- 0L
            start$isdst <- -1L
            incr <- 86400
        }
        if (valid == 5L) {
            start$mday <- start$mday - start$wday
            if (start.on.monday) 
                start$mday <- start$mday + ifelse(start$wday > 
                  0L, 1L, -6L)
            incr <- 7 * 86400
        }
        if (valid == 8L) 
            incr <- 25 * 3600
        if (valid == 6L) {
            start$mday <- 1L
            maxx <- max(x, na.rm = TRUE)
            end <- as.POSIXlt(maxx)
            step <- if (length(by2) == 2L) 
                as.integer(by2[1L])
            else 1L
            end <- as.POSIXlt(end + (31 * step * 86400))
            end$mday <- 1L
            end$isdst <- -1L
            breaks <- seq(start, end, breaks)
            lb <- length(breaks)
            if (maxx < breaks[lb - 1]) 
                breaks <- breaks[-lb]
        }
        else if (valid == 7L) {
            start$mon <- 0L
            start$mday <- 1L
            maxx <- max(x, na.rm = TRUE)
            end <- as.POSIXlt(maxx)
            step <- if (length(by2) == 2L) 
                as.integer(by2[1L])
            else 1L
            end <- as.POSIXlt(end + (366 * step * 86400))
            end$mon <- 0L
            end$mday <- 1L
            end$isdst <- -1L
            breaks <- seq(start, end, breaks)
            lb <- length(breaks)
            if (maxx < breaks[lb - 1]) 
                breaks <- breaks[-lb]
        }
        else if (valid == 9L) {
            qtr <- rep(c(0L, 3L, 6L, 9L), each = 3L)
            start$mon <- qtr[start$mon + 1L]
            start$mday <- 1L
            maxx <- max(x, na.rm = TRUE)
            end <- as.POSIXlt(maxx)
            step <- if (length(by2) == 2L) 
                as.integer(by2[1L])
            else 1L
            end <- as.POSIXlt(end + (93 * step * 86400))
            end$mon <- qtr[end$mon + 1L]
            end$mday <- 1L
            end$isdst <- -1L
            breaks <- seq(start, end, paste(step * 3, "months"))
            lb <- length(breaks)
            if (maxx < breaks[lb - 1]) 
                breaks <- breaks[-lb]
        }
        else {
            if (length(by2) == 2L) 
                incr <- incr * as.integer(by2[1L])
            maxx <- max(x, na.rm = TRUE)
            breaks <- seq(start, maxx + incr, breaks)
            breaks <- breaks[seq_len(1 + max(which(breaks <= 
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

# Examples
## random dates in a 10-week period
cut(ISOdate(2001, 1, 1) + 70*86400*stats::runif(100), "weeks")
cut(as.Date("2001/1/1") + 70*stats::runif(100), "weeks")

# The standards all have midnight as the start of the day, but some
# people incorrectly interpret it at the end of the previous day ...
tm <- seq(as.POSIXct("2012-06-01 06:00"), by = "6 hours", length.out = 24)
aggregate(1:24, list(day = cut(tm, "days")), mean)
# and a version with midnight included in the previous day:
aggregate(1:24, list(day = cut(tm, "days", right = TRUE)), mean)

