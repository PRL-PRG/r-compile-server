#? stdlib
`Box.test` <- function (x, lag = 1, type = c("Box-Pierce", "Ljung-Box"), fitdf = 0) 
{
    if (NCOL(x) > 1) 
        stop("x is not a vector or univariate time series")
    DNAME <- deparse1(substitute(x))
    lag <- as.integer(lag)
    type <- match.arg(type)
    cor <- acf(x, lag.max = lag, plot = FALSE, na.action = na.pass)
    n <- sum(!is.na(x))
    PARAMETER <- c(df = lag - fitdf)
    obs <- cor$acf[2:(lag + 1)]
    if (type == "Box-Pierce") {
        METHOD <- "Box-Pierce test"
        STATISTIC <- n * sum(obs^2)
        PVAL <- 1 - pchisq(STATISTIC, lag - fitdf)
    }
    else {
        METHOD <- "Box-Ljung test"
        STATISTIC <- n * (n + 2) * sum(1/seq.int(n - 1, n - lag) * 
            obs^2)
        PVAL <- 1 - pchisq(STATISTIC, lag - fitdf)
    }
    names(STATISTIC) <- "X-squared"
    structure(list(statistic = STATISTIC, parameter = PARAMETER, 
        p.value = PVAL, method = METHOD, data.name = DNAME), 
        class = "htest")
}

# Examples
x <- rnorm (100)
Box.test (x, lag = 1)
Box.test (x, lag = 1, type = "Ljung")

