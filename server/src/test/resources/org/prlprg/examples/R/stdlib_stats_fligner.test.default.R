#? stdlib
`fligner.test.default` <- function (x, g, ...) 
{
    if (is.list(x)) {
        if (length(x) < 2L) 
            stop("'x' must be a list with at least 2 elements")
        DNAME <- deparse1(substitute(x))
        x <- lapply(x, function(u) u <- u[complete.cases(u)])
        k <- length(x)
        l <- lengths(x)
        if (any(l == 0)) 
            stop("all groups must contain data")
        g <- factor(rep(1:k, l))
        x <- unlist(x)
    }
    else {
        if (length(x) != length(g)) 
            stop("'x' and 'g' must have the same length")
        DNAME <- paste(deparse1(substitute(x)), "and", deparse1(substitute(g)))
        OK <- complete.cases(x, g)
        x <- x[OK]
        g <- g[OK]
        g <- factor(g)
        k <- nlevels(g)
        if (k < 2) 
            stop("all observations are in the same group")
    }
    n <- length(x)
    if (n < 2) 
        stop("not enough observations")
    x <- x - tapply(x, g, median)[g]
    a <- qnorm((1 + rank(abs(x))/(n + 1))/2)
    a <- a - mean(a)
    v <- sum(a^2)/(n - 1)
    a <- split(a, g)
    STATISTIC <- sum(lengths(a) * vapply(a, mean, 0)^2)/v
    PARAMETER <- k - 1
    PVAL <- pchisq(STATISTIC, PARAMETER, lower.tail = FALSE)
    names(STATISTIC) <- "Fligner-Killeen:med chi-squared"
    names(PARAMETER) <- "df"
    METHOD <- "Fligner-Killeen test of homogeneity of variances"
    RVAL <- list(statistic = STATISTIC, parameter = PARAMETER, 
        p.value = PVAL, method = METHOD, data.name = DNAME)
    class(RVAL) <- "htest"
    return(RVAL)
}
