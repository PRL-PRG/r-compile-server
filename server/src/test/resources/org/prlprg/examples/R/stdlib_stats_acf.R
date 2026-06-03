#? stdlib
`acf` <- function (x, lag.max = NULL, type = c("correlation", "covariance", 
    "partial"), plot = TRUE, na.action = na.fail, demean = TRUE, 
    ...) 
{
    type <- match.arg(type)
    if (type == "partial") {
        m <- match.call()
        m[[1L]] <- quote(stats::pacf)
        m$type <- NULL
        return(eval(m, parent.frame()))
    }
    series <- deparse1(substitute(x))
    x <- na.action(as.ts(x))
    x.freq <- frequency(x)
    x <- as.matrix(x)
    if (!is.numeric(x)) 
        stop("'x' must be numeric")
    sampleT <- as.integer(nrow(x))
    nser <- as.integer(ncol(x))
    if (is.na(sampleT) || is.na(nser)) 
        stop("'sampleT' and 'nser' must be integer")
    if (is.null(lag.max)) 
        lag.max <- floor(10 * (log10(sampleT) - log10(nser)))
    lag.max <- as.integer(min(lag.max, sampleT - 1L))
    if (is.na(lag.max) || lag.max < 0) 
        stop("'lag.max' must be at least 0")
    if (demean) 
        x <- sweep(x, 2, colMeans(x, na.rm = TRUE), check.margin = FALSE)
    lag <- matrix(1, nser, nser)
    lag[lower.tri(lag)] <- -1
    acf <- .Call(C_acf, x, lag.max, type == "correlation")
    lag <- outer(0:lag.max, lag/x.freq)
    acf.out <- structure(list(acf = acf, type = type, n.used = sampleT, 
        lag = lag, series = series, snames = colnames(x)), class = "acf")
    if (plot) {
        plot.acf(acf.out, ...)
        invisible(acf.out)
    }
    else acf.out
}

# Examples
require(graphics)

## Examples from Venables & Ripley
acf(lh)
acf(lh, type = "covariance")
pacf(lh)

acf(ldeaths)
acf(ldeaths, ci.type = "ma")
acf(ts.union(mdeaths, fdeaths))
ccf(mdeaths, fdeaths, ylab = "cross-correlation")
# (just the cross-correlations)

presidents # contains missing values
acf(presidents, na.action = na.pass)
pacf(presidents, na.action = na.pass)

