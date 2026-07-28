#? stdlib
`summary.table` <- function (object, ...) 
{
    if (!inherits(object, "table")) 
        stop(gettextf("'object' must inherit from class %s", 
            dQuote("table")), domain = NA)
    n.cases <- sum(object)
    n.vars <- length(dim(object))
    y <- list(n.vars = n.vars, n.cases = n.cases)
    if (n.vars > 1) {
        m <- vector("list", length = n.vars)
        relFreqs <- object/n.cases
        for (k in 1L:n.vars) m[[k]] <- apply(relFreqs, k, sum)
        expected <- apply(do.call("expand.grid", m), 1L, prod) * 
            n.cases
        statistic <- sum((c(object) - expected)^2/expected)
        lm <- lengths(m)
        parameter <- prod(lm) - 1L - sum(lm - 1L)
        y <- c(y, list(statistic = statistic, parameter = parameter, 
            approx.ok = all(expected >= 5), p.value = stats::pchisq(statistic, 
                parameter, lower.tail = FALSE), call = attr(object, 
                "call")))
    }
    class(y) <- "summary.table"
    y
}
