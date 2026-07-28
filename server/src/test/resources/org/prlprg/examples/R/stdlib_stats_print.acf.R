#? stdlib
`print.acf` <- function (x, digits = 3L, ...) 
{
    type <- match(x$type, c("correlation", "covariance", "partial"))
    msg <- c("Autocorrelations", "Autocovariances", "Partial autocorrelations")
    cat("\n", msg[type], " of series ", sQuote(x$series), ", by lag\n\n", 
        sep = "")
    nser <- ncol(x$lag)
    if (type != 2) 
        x$acf <- round(x$acf, digits)
    if (nser == 1) {
        acfs <- setNames(drop(x$acf), format(drop(x$lag), digits = 3L))
        print(acfs, digits = digits, ...)
    }
    else {
        acfs <- format(x$acf, ...)
        lags <- format(x$lag, digits = 3L)
        acfs <- array(paste0(acfs, " (", lags, ")"), dim = dim(x$acf))
        dimnames(acfs) <- list(rep("", nrow(x$lag)), x$snames, 
            x$snames)
        print(acfs, quote = FALSE, ...)
    }
    invisible(x)
}
