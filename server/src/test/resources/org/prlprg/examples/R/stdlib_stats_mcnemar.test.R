#? stdlib
`mcnemar.test` <- function (x, y = NULL, correct = TRUE) 
{
    if (is.matrix(x)) {
        r <- nrow(x)
        if ((r < 2) || (ncol(x) != r)) 
            stop("'x' must be square with at least two rows and columns")
        if (any(x < 0) || anyNA(x)) 
            stop("all entries of 'x' must be nonnegative and finite")
        DNAME <- deparse1(substitute(x))
    }
    else {
        if (is.null(y)) 
            stop("if 'x' is not a matrix, 'y' must be given")
        if (length(x) != length(y)) 
            stop("'x' and 'y' must have the same length")
        DNAME <- paste(deparse1(substitute(x)), "and", deparse1(substitute(y)))
        OK <- complete.cases(x, y)
        x <- as.factor(x[OK])
        y <- as.factor(y[OK])
        r <- nlevels(x)
        if ((r < 2) || (nlevels(y) != r)) 
            stop("'x' and 'y' must have the same number of levels (minimum 2)")
        x <- table(x, y)
    }
    PARAMETER <- r * (r - 1)/2
    METHOD <- "McNemar's Chi-squared test"
    if (correct && (r == 2) && any(x - t(x) != 0)) {
        y <- (abs(x - t(x)) - 1)
        METHOD <- paste(METHOD, "with continuity correction")
    }
    else y <- x - t(x)
    x <- x + t(x)
    STATISTIC <- sum(y[upper.tri(x)]^2/x[upper.tri(x)])
    PVAL <- pchisq(STATISTIC, PARAMETER, lower.tail = FALSE)
    names(STATISTIC) <- "McNemar's chi-squared"
    names(PARAMETER) <- "df"
    RVAL <- list(statistic = STATISTIC, parameter = PARAMETER, 
        p.value = PVAL, method = METHOD, data.name = DNAME)
    class(RVAL) <- "htest"
    return(RVAL)
}

# Examples
## Agresti (1990), p. 350.
## Presidential Approval Ratings.
##  Approval of the President's performance in office in two surveys,
##  one month apart, for a random sample of 1600 voting-age Americans.
Performance <-
matrix(c(794, 86, 150, 570),
       nrow = 2,
       dimnames = list("1st Survey" = c("Approve", "Disapprove"),
                       "2nd Survey" = c("Approve", "Disapprove")))
Performance
mcnemar.test(Performance)
## => significant change (in fact, drop) in approval ratings

