#? stdlib
`seq.POSIXt` <- function (from, to, by, length.out = NULL, along.with = NULL, 
    ...) 
{
    if (missing(from)) 
        stop("'from' must be specified")
    if (!inherits(from, "POSIXt")) 
        stop("'from' must be a \"POSIXt\" object")
    cfrom <- as.POSIXct(from)
    if (length(cfrom) != 1L) 
        stop("'from' must be of length 1")
    tz <- attr(cfrom, "tzone")
    if (!missing(to)) {
        if (!inherits(to, "POSIXt")) 
            stop("'to' must be a \"POSIXt\" object")
        if (length(as.POSIXct(to)) != 1) 
            stop("'to' must be of length 1")
    }
    if (!missing(along.with)) {
        length.out <- length(along.with)
    }
    else if (!is.null(length.out)) {
        if (length(length.out) != 1L) 
            stop("'length.out' must be of length 1")
        length.out <- ceiling(length.out)
    }
    status <- c(!missing(to), !missing(by), !is.null(length.out))
    if (sum(status) != 2L) 
        stop("exactly two of 'to', 'by' and 'length.out' / 'along.with' must be specified")
    if (missing(by)) {
        from <- unclass(cfrom)
        to <- unclass(as.POSIXct(to))
        res <- seq.int(from, to, length.out = length.out)
        return(.POSIXct(res, tz))
    }
    if (length(by) != 1L) 
        stop("'by' must be of length 1")
    valid <- 0L
    if (inherits(by, "difftime")) {
        by <- switch(attr(by, "units"), secs = 1, mins = 60, 
            hours = 3600, days = 86400, weeks = 7 * 86400) * 
            unclass(by)
    }
    else if (is.character(by)) {
        by2 <- strsplit(by, " ", fixed = TRUE)[[1L]]
        if (length(by2) > 2L || length(by2) < 1L) 
            stop("invalid 'by' string")
        valid <- pmatch(by2[length(by2)], c("secs", "mins", "hours", 
            "days", "weeks", "months", "years", "DSTdays", "quarters"))
        if (is.na(valid)) 
            stop("invalid string for 'by'")
        if (valid <= 5L) {
            by <- c(1, 60, 3600, 86400, 7 * 86400)[valid]
            if (length(by2) == 2L) 
                by <- by * as.integer(by2[1L])
        }
        else by <- if (length(by2) == 2L) 
            as.integer(by2[1L])
        else 1
    }
    else if (!is.numeric(by)) 
        stop("invalid mode for 'by'")
    if (is.na(by)) 
        stop("'by' is NA")
    if (valid <= 5L) {
        from <- unclass(as.POSIXct(from))
        if (!is.null(length.out)) 
            res <- seq.int(from, by = by, length.out = length.out)
        else {
            to0 <- unclass(as.POSIXct(to))
            res <- seq.int(0, to0 - from, by) + from
        }
        return(.POSIXct(res, tz))
    }
    else {
        r1 <- as.POSIXlt(from)
        if (valid == 7L) {
            if (missing(to)) {
                yr <- seq.int(r1$year, by = by, length.out = length.out)
            }
            else {
                to <- as.POSIXlt(to)
                yr <- seq.int(r1$year, to$year, by)
            }
            r1$year <- yr
        }
        else if (valid %in% c(6L, 9L)) {
            if (valid == 9L) 
                by <- by * 3
            if (missing(to)) {
                mon <- seq.int(r1$mon, by = by, length.out = length.out)
            }
            else {
                to0 <- as.POSIXlt(to)
                mon <- seq.int(r1$mon, 12 * (to0$year - r1$year) + 
                  to0$mon, by)
            }
            r1$mon <- mon
        }
        else if (valid == 8L) {
            if (!missing(to)) {
                length.out <- 2L + floor((unclass(as.POSIXct(to)) - 
                  unclass(as.POSIXct(from)))/(by * 86400))
            }
            r1$mday <- seq.int(r1$mday, by = by, length.out = length.out)
        }
        r1$isdst <- -1L
        res <- as.POSIXct(r1)
        if (!missing(to)) {
            to <- as.POSIXct(to)
            res <- if (by > 0) 
                res[res <= to]
            else res[res >= to]
        }
        res
    }
}

# Examples
## first days of years
seq(ISOdate(1910,1,1), ISOdate(1999,1,1), "years")
## by month
seq(ISOdate(2000,1,1), by = "month", length.out = 12)
seq(ISOdate(2000,1,31), by = "month", length.out = 4)
## quarters
seq(ISOdate(1990,1,1), ISOdate(2000,1,1), by = "quarter") # or "3 months"
## days vs DSTdays: use c() to lose the time zone.
seq(c(ISOdate(2000,3,20)), by = "day", length.out = 10)
seq(c(ISOdate(2000,3,20)), by = "DSTday", length.out = 10)
seq(c(ISOdate(2000,3,20)), by = "7 DSTdays", length.out = 4)

