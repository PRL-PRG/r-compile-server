#? stdlib
`hist.POSIXt` <- function (x, breaks, ..., xlab = deparse1(substitute(x)), plot = TRUE, 
    freq = FALSE, start.on.monday = TRUE, format, right = TRUE) 
{
    if (!inherits(x, "POSIXt")) 
        stop("wrong method")
    force(xlab)
    x <- as.POSIXct(x)
    incr <- 1
    if (missing(breaks)) 
        stop("Must specify 'breaks' in hist(<POSIXt>)")
    if (inherits(breaks, "POSIXt")) {
        breaks <- as.POSIXct(breaks)
        d <- min(abs(diff(unclass(breaks))))
        if (d > 60) 
            incr <- 60
        if (d > 3600) 
            incr <- 3600
        if (d > 86400) 
            incr <- 86400
        if (d > 86400 * 7) 
            incr <- 86400 * 7
        if (d > 86400 * 28) 
            incr <- 86400 * 28
        if (d > 86400 * 366) 
            incr <- 86400 * 366
        num.br <- FALSE
    }
    else {
        num.br <- is.numeric(breaks) && length(breaks) == 1L
        if (num.br) {
        }
        else if (is.character(breaks) && length(breaks) == 1L) {
            valid <- pmatch(breaks, c("secs", "mins", "hours", 
                "days", "weeks", "months", "years", "quarters"))
            if (is.na(valid)) 
                stop("invalid specification of 'breaks'")
            start <- as.POSIXlt(min(x, na.rm = TRUE))
            incr <- 1
            if (valid > 1L) {
                start$sec <- 0
                incr <- 59.99
            }
            if (valid > 2L) {
                start$min <- 0L
                incr <- 3600 - 1
            }
            if (valid > 3L) {
                start$hour <- 0L
                incr <- 86400 - 1
            }
            if (valid > 4L) {
                start$isdst <- -1L
            }
            if (valid == 5L) {
                start$mday <- start$mday - start$wday
                if (start.on.monday) 
                  start$mday <- start$mday + if (start$wday > 
                    0L) 
                    1L
                  else -6L
                incr <- 7 * 86400
            }
            if (valid == 6L) {
                start$mday <- 1L
                end <- as.POSIXlt(max(x, na.rm = TRUE))
                end <- as.POSIXlt(end + (31 * 86400))
                end$mday <- 1L
                end$isdst <- -1L
                breaks <- seq(start, end, "months")
                ind <- seq_along(breaks[-1L])
                if (right) 
                  breaks[ind] <- breaks[ind] - 86400
                if (missing(format)) 
                  format <- "%Y-%m-%d"
            }
            else if (valid == 7L) {
                start$mon <- 0L
                start$mday <- 1L
                end <- as.POSIXlt(max(x, na.rm = TRUE))
                end <- as.POSIXlt(end + (366 * 86400))
                end$mon <- 0L
                end$mday <- 1L
                end$isdst <- -1L
                breaks <- seq(start, end, "years")
                ind <- seq_along(breaks[-1L])
                if (right) 
                  breaks[ind] <- breaks[ind] - 86400
                if (missing(format)) 
                  format <- "%Y-%m-%d"
            }
            else if (valid == 8L) {
                qtr <- rep(c(0L, 3L, 6L, 9L), each = 3L)
                start$mon <- qtr[start$mon + 1L]
                start$mday <- 1L
                end <- as.POSIXlt(max(x, na.rm = TRUE))
                end <- as.POSIXlt(end + (93 * 86400))
                end$mon <- qtr[end$mon + 1L]
                end$mday <- 1L
                end$isdst <- -1L
                breaks <- seq(start, end, "3 months")
                ind <- seq_along(breaks[-1L])
                if (right) 
                  breaks[ind] <- breaks[ind] - 86400
                if (missing(format)) 
                  format <- "%Y-%m-%d"
            }
            else {
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
                    breaks <- as.POSIXct(res$breaks, origin = "1970-01-01")
                  axis.POSIXct(1, at = breaks, format = format, 
                    ...)
                }
            }
        }
        myplot(res, xlab, freq, format, breaks, ...)
    }
    invisible(res)
}

# Examples
hist(.leap.seconds, "years", freq = TRUE)
brks <- seq(ISOdate(1970, 1, 1), ISOdate(2030, 1, 1), "5 years")
hist(.leap.seconds, brks)
rug(.leap.seconds, lwd=2)
## show that  'include.lowest' "works"
stopifnot(identical(c(2L, rep(1L,11)),
   hist(brks, brks, plot=FALSE, include.lowest=TRUE )$counts))
tools::assertError(verbose=TRUE, ##--> 'breaks' do not span range of 'x'
   hist(brks, brks, plot=FALSE, include.lowest=FALSE))
## The default fuzz in hist.default()  "kills" this, with a "wrong" message:
try ( hist(brks[-13] + 1, brks, include.lowest = FALSE) )
## and decreasing 'fuzz' solves the issue:
hb <- hist(brks[-13] + 1, brks, include.lowest = FALSE, fuzz = 1e-10)
stopifnot(hb$counts == 1)

## 100 random dates in a 10-week period
random.dates <- as.Date("2001/1/1") + 70*stats::runif(100)
hist(random.dates, "weeks", format = "%d %b")

