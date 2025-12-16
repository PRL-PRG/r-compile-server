#? stdlib
`window<-.ts` <- function (x, start, end, frequency, deltat, ..., value) 
{
    xtsp <- tsp(x)
    m <- match.call(expand.dots = FALSE)
    m$value <- NULL
    m$extend <- TRUE
    m$x <- x
    m[[1L]] <- quote(stats::window)
    xx <- eval.parent(m)
    xxtsp <- tsp(xx)
    start <- xxtsp[1L]
    end <- xxtsp[2L]
    if (start > end) 
        stop("'start' > 'end'")
    if (start < xtsp[1L] || end > xtsp[2L]) {
        warning("extending time series when replacing values", 
            call. = FALSE)
        x <- window(x, min(start, xtsp[1L]), max(end, xtsp[2L]), 
            extend = TRUE)
    }
    xfreq <- xtsp[3L]
    xtimes <- round(xfreq * time(x))
    xxtimes <- round(xfreq * time(xx))
    ind <- match(xxtimes, xtimes)
    if (anyNA(ind)) 
        stop("times to be replaced do not match")
    len <- length(ind)
    val_len <- NROW(value)
    if (!val_len) 
        stop("no replacement values supplied")
    if (val_len > len) 
        stop("too many replacement values supplied")
    if (val_len > 1L && (len%%val_len)) 
        stop("number of values supplied is not a sub-multiple of the number of values to be replaced")
    if (NCOL(x) == 1L) 
        x[ind] <- value
    else x[ind, ] <- value
    x
}
