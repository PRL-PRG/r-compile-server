#? stdlib
`ks.test.default` <- function (x, y, ..., alternative = c("two.sided", "less", "greater"), 
    exact = NULL, simulate.p.value = FALSE, B = 2000) 
{
    alternative <- match.arg(alternative)
    DNAME <- deparse1(substitute(x))
    x <- x[!is.na(x)]
    n <- length(x)
    if (n < 1L) 
        stop("not enough 'x' data")
    if (is.ordered(y)) 
        y <- unclass(y)
    if (is.numeric(y)) {
        args <- list(...)
        if (length(args) > 0L) 
            warning("Parameter(s) ", paste(names(args), collapse = ", "), 
                " ignored")
        DNAME <- paste(DNAME, "and", deparse1(substitute(y)))
        y <- y[!is.na(y)]
        n.x <- as.double(n)
        n.y <- length(y)
        if (n.y < 1L) 
            stop("not enough 'y' data")
        if (is.null(exact)) 
            exact <- (n.x * n.y < 10000)
        if (!simulate.p.value) {
            METHOD <- paste(c("Asymptotic", "Exact")[exact + 
                1L], "two-sample Kolmogorov-Smirnov test")
        }
        else {
            METHOD <- "Monte-Carlo two-sample Kolmogorov-Smirnov test"
        }
        TIES <- FALSE
        w <- c(x, y)
        z <- cumsum(ifelse(order(w) <= n.x, 1/n.x, -1/n.y))
        if (length(unique(w)) < (n.x + n.y)) {
            z <- z[c(which(diff(sort(w)) != 0), n.x + n.y)]
            TIES <- TRUE
            if (!exact && !simulate.p.value) 
                warning("p-value will be approximate in the presence of ties")
        }
        STATISTIC <- switch(alternative, two.sided = max(abs(z)), 
            greater = max(z), less = -min(z))
        nm_alternative <- switch(alternative, two.sided = "two-sided", 
            less = "the CDF of x lies below that of y", greater = "the CDF of x lies above that of y")
        PVAL <- psmirnov(STATISTIC, sizes = c(n.x, n.y), z = if (TIES) 
            w, alternative = alternative, exact = exact, simulate = simulate.p.value, 
            B = B, lower.tail = FALSE)
        if (simulate.p.value) 
            PVAL <- (1 + (PVAL * B))/(B + 1)
    }
    else {
        if (is.character(y)) 
            y <- get(y, mode = "function", envir = parent.frame())
        if (!is.function(y)) 
            stop("'y' must be numeric or a function or a string naming a valid function")
        TIES <- FALSE
        if (length(unique(x)) < n) {
            warning("ties should not be present for the one-sample Kolmogorov-Smirnov test")
            TIES <- TRUE
        }
        if (is.null(exact)) 
            exact <- (n < 100) && !TIES
        METHOD <- paste(c("Asymptotic", "Exact")[exact + 1L], 
            "one-sample Kolmogorov-Smirnov test")
        x <- y(sort(x), ...) - (0:(n - 1))/n
        STATISTIC <- switch(alternative, two.sided = max(c(x, 
            1/n - x)), greater = max(1/n - x), less = max(x))
        PVAL <- pkolmogorov(STATISTIC, n, two.sided = (alternative == 
            "two.sided"), exact = exact, lower.tail = FALSE)
        nm_alternative <- switch(alternative, two.sided = "two-sided", 
            less = "the CDF of x lies below the null hypothesis", 
            greater = "the CDF of x lies above the null hypothesis")
    }
    names(STATISTIC) <- switch(alternative, two.sided = "D", 
        greater = "D^+", less = "D^-")
    PVAL <- min(1, max(0, PVAL))
    RVAL <- list(statistic = STATISTIC, p.value = PVAL, alternative = nm_alternative, 
        method = METHOD, data.name = DNAME, exact = exact)
    class(RVAL) <- c("ks.test", "htest")
    RVAL
}
