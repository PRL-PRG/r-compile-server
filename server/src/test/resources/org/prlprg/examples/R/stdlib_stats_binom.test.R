#? stdlib
`binom.test` <- function (x, n, p = 0.5, alternative = c("two.sided", "less", 
    "greater"), conf.level = 0.95) 
{
    DNAME <- deparse1(substitute(x))
    xr <- round(x)
    if (any(is.na(x) | (x < 0)) || max(abs(x - xr)) > 1e-07) 
        stop("'x' must be nonnegative and integer")
    x <- xr
    if (length(x) == 2L) {
        n <- sum(x)
        x <- x[1L]
    }
    else if (length(x) == 1L) {
        nr <- round(n)
        if ((length(n) > 1L) || is.na(n) || (n < 1) || abs(n - 
            nr) > 1e-07 || (x > nr)) 
            stop("'n' must be a positive integer >= 'x'")
        DNAME <- paste(DNAME, "and", deparse1(substitute(n)))
        n <- nr
    }
    else stop("incorrect length of 'x'")
    if (!missing(p) && (length(p) > 1L || is.na(p) || p < 0 || 
        p > 1)) 
        stop("'p' must be a single number between 0 and 1")
    alternative <- match.arg(alternative)
    if (!((length(conf.level) == 1L) && is.finite(conf.level) && 
        (conf.level > 0) && (conf.level < 1))) 
        stop("'conf.level' must be a single number between 0 and 1")
    PVAL <- switch(alternative, less = pbinom(x, n, p), greater = pbinom(x - 
        1, n, p, lower.tail = FALSE), two.sided = {
        if (p == 0) (x == 0) else if (p == 1) (x == n) else {
            relErr <- 1 + 1e-07
            d <- dbinom(x, n, p)
            m <- n * p
            if (x == m) 1 else if (x < m) {
                i <- seq.int(from = ceiling(m), to = n)
                y <- sum(dbinom(i, n, p) <= d * relErr)
                pbinom(x, n, p) + pbinom(n - y, n, p, lower.tail = FALSE)
            } else {
                i <- seq.int(from = 0, to = floor(m))
                y <- sum(dbinom(i, n, p) <= d * relErr)
                pbinom(y - 1, n, p) + pbinom(x - 1, n, p, lower.tail = FALSE)
            }
        }
    })
    p.L <- function(x, alpha) {
        if (x == 0) 
            0
        else qbeta(alpha, x, n - x + 1)
    }
    p.U <- function(x, alpha) {
        if (x == n) 
            1
        else qbeta(1 - alpha, x + 1, n - x)
    }
    CINT <- switch(alternative, less = c(0, p.U(x, 1 - conf.level)), 
        greater = c(p.L(x, 1 - conf.level), 1), two.sided = {
            alpha <- (1 - conf.level)/2
            c(p.L(x, alpha), p.U(x, alpha))
        })
    attr(CINT, "conf.level") <- conf.level
    ESTIMATE <- x/n
    names(x) <- "number of successes"
    names(n) <- "number of trials"
    names(ESTIMATE) <- names(p) <- "probability of success"
    structure(list(statistic = x, parameter = n, p.value = PVAL, 
        conf.int = CINT, estimate = ESTIMATE, null.value = p, 
        alternative = alternative, method = "Exact binomial test", 
        data.name = DNAME), class = "htest")
}

# Examples
## Conover (1971), p. 97f.
## Under (the assumption of) simple Mendelian inheritance, a cross
##  between plants of two particular genotypes produces progeny 1/4 of
##  which are "dwarf" and 3/4 of which are "giant", respectively.
##  In an experiment to determine if this assumption is reasonable, a
##  cross results in progeny having 243 dwarf and 682 giant plants.
##  If "giant" is taken as success, the null hypothesis is that p =
##  3/4 and the alternative that p != 3/4.
binom.test(c(682, 243), p = 3/4)
binom.test(682, 682 + 243, p = 3/4)   # The same.
## => Data are in agreement with the null hypothesis.

