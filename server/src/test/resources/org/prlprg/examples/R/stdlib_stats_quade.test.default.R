#? stdlib
`quade.test.default` <- function (y, groups, blocks, ...) 
{
    DNAME <- deparse1(substitute(y))
    if (is.matrix(y)) {
        d <- dim(y)
        groups <- factor(.col(d))
        blocks <- factor(.row(d))
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
        ord <- order(groups)
        y <- y[ord]
        groups <- factor(groups[ord])
        blocks <- factor(blocks[ord])
    }
    k <- nlevels(groups)
    b <- nlevels(blocks)
    y <- matrix(unlist(split(c(y), blocks)), ncol = k, byrow = TRUE)
    y <- y[complete.cases(y), ]
    r <- t(apply(y, 1L, rank))
    q <- rank(apply(y, 1, function(u) max(u) - min(u)))
    s <- q * (r - (k + 1)/2)
    A <- sum(s^2)
    B <- sum(colSums(s)^2)/b
    if (A == B) {
        STATISTIC <- NaN
        PARAMETER <- c(NA, NA)
        PVAL <- (gamma(k + 1))^(1 - b)
    }
    else {
        STATISTIC <- (b - 1) * B/(A - B)
        PARAMETER <- c(k - 1, (b - 1) * (k - 1))
        PVAL <- pf(STATISTIC, PARAMETER[1L], PARAMETER[2L], lower.tail = FALSE)
    }
    names(STATISTIC) <- "Quade F"
    names(PARAMETER) <- c("num df", "denom df")
    structure(list(statistic = STATISTIC, parameter = PARAMETER, 
        p.value = PVAL, method = "Quade test", data.name = DNAME), 
        class = "htest")
}
