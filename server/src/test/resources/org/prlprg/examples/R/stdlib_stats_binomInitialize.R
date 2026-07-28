#? stdlib
`binomInitialize` <- function (family) 
substitute({
    if (NCOL(y) == 1) {
        if (is.factor(y)) y <- y != levels(y)[1L]
        n <- rep.int(1, nobs)
        y[weights == 0] <- 0
        if (any(y < 0 | y > 1)) stop("y values must be 0 <= y <= 1")
        mustart <- (weights * y + 0.5)/(weights + 1)
        m <- weights * y
        if (FAMILY == "binomial" && any(abs(m - round(m)) > 0.001)) warning(gettextf("non-integer #successes in a %s glm!", 
            FAMILY), domain = NA)
    } else if (NCOL(y) == 2) {
        if (FAMILY == "binomial" && any(abs(y - round(y)) > 0.001)) warning(gettextf("non-integer counts in a %s glm!", 
            FAMILY), domain = NA)
        n <- (y1 <- y[, 1L]) + y[, 2L]
        y <- y1/n
        if (any(n0 <- n == 0)) y[n0] <- 0
        weights <- weights * n
        mustart <- (n * y + 0.5)/(n + 1)
    } else stop(gettextf("for the '%s' family, y must be a vector of 0 and 1's\nor a 2 column matrix where col 1 is no. successes and col 2 is no. failures", 
        FAMILY), domain = NA)
}, list(FAMILY = family))
