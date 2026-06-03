#? stdlib
`friedman.test.default` <- function (y, groups, blocks, ...) 
{
    DNAME <- deparse1(substitute(y))
    if (is.matrix(y)) {
        groups <- factor(c(col(y)))
        blocks <- factor(c(row(y)))
    }
    else {
        if (anyNA(groups) || anyNA(blocks)) 
            stop("NA's are not allowed in 'groups' or 'blocks'")
        if (any(diff(c(length(y), length(groups), length(blocks))) != 
            0L)) 
            stop("'y', 'groups' and 'blocks' must have the same length")
        DNAME <- paste0(DNAME, ", ", deparse1(substitute(groups)), 
            " and ", deparse1(substitute(blocks)))
        if (any(table(groups, blocks) != 1)) 
            stop("not an unreplicated complete block design")
        groups <- factor(groups)
        blocks <- factor(blocks)
        o <- order(groups, blocks)
        y <- y[o]
        groups <- groups[o]
        blocks <- blocks[o]
    }
    k <- nlevels(groups)
    y <- matrix(unlist(split(c(y), blocks)), ncol = k, byrow = TRUE)
    y <- y[complete.cases(y), ]
    n <- nrow(y)
    r <- t(apply(y, 1L, rank))
    TIES <- tapply(c(r), row(r), table)
    STATISTIC <- 12 * sum((colSums(r) - n * (k + 1)/2)^2)/(n * 
        k * (k + 1) - sum(unlist(lapply(TIES, function(u) u^3 - 
        u)))/(k - 1))
    PARAMETER <- k - 1
    PVAL <- pchisq(STATISTIC, PARAMETER, lower.tail = FALSE)
    names(STATISTIC) <- "Friedman chi-squared"
    names(PARAMETER) <- "df"
    structure(list(statistic = STATISTIC, parameter = PARAMETER, 
        p.value = PVAL, method = "Friedman rank sum test", data.name = DNAME), 
        class = "htest")
}
