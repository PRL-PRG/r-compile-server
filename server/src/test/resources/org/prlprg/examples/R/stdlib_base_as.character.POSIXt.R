#? stdlib
`as.character.POSIXt` <- function (x, digits = if (inherits(x, "POSIXlt")) 14L else 6L, 
    OutDec = ".", ...) 
{
    if (length(dotn <- ...names()) && "format" %in% dotn) 
        warning("as.character(td, ..) no longer obeys a 'format' argument; use format(td, ..) ?")
    if (missing(digits)) 
        force(digits)
    else if (!is.numeric(digits)) 
        stop("'digits' must be numeric, integer valued")
    x <- balancePOSIXlt(as.POSIXlt(x))
    s <- x$sec
    time <- x$hour + x$min + s
    isNA <- is.na(s) & !is.nan(s)
    ok <- is.finite(time)
    r <- character(length(ok))
    if (anyN <- !all(ok)) {
        r[!ok & isNA] <- NA
        i <- !ok & !isNA
        r[i] <- as.character(s[i])
    }
    if (any(ok)) {
        if (anyN) {
            x <- x[ok]
            time <- time[ok]
        }
        r1 <- sprintf("%d-%02d-%02d", 1900 + x$year, x$mon + 
            1L, x$mday)
        if (any(n0 <- time != 0)) {
            s <- round(x$sec[n0], digits)
            if (getOption("OutDec") != OutDec) {
                op <- options(OutDec = OutDec)
                on.exit(options(op))
            }
            if (getOption("scipen") <= min(digits)) {
                o2 <- options(scipen = max(digits) + 1L)
                on.exit(options(o2), add = TRUE)
            }
            sch <- paste0(c("", "0")[(s < 10) + 1L], as.character(s))
            r1[n0] <- paste(r1[n0], sprintf("%02d:%02d:%s", x$hour[n0], 
                x$min[n0], sch))
        }
        r[ok] <- r1
    }
    r
}
