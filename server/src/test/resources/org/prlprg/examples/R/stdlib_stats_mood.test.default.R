#? stdlib
`mood.test.default` <- function (x, y, alternative = c("two.sided", "less", "greater"), 
    ...) 
{
    alternative <- match.arg(alternative)
    DNAME <- paste(deparse1(substitute(x)), "and", deparse1(substitute(y)))
    x <- x[is.finite(x)]
    y <- y[is.finite(y)]
    m <- length(x)
    n <- length(y)
    if ((N <- m + n) < 3L) 
        stop("not enough observations")
    E <- m * (N^2 - 1)/12
    v <- (1/180) * m * n * (N + 1) * (N + 2) * (N - 2)
    z <- c(x, y)
    if (!anyDuplicated(z)) {
        r <- rank(z)
        T <- sum((r[seq_along(x)] - (N + 1L)/2)^2)
    }
    else {
        u <- sort(unique(z))
        a <- tabulate(match(x, u), length(u))
        t <- tabulate(match(z, u), length(u))
        p <- cumsum((seq_along(z) - (N + 1L)/2)^2)
        v <- v - (m * n)/(180 * N * (N - 1L)) * sum(t * (t^2 - 
            1) * (t^2 - 4 + 15 * (N - t)^2))
        T <- sum(a * diff(c(0, p[cumsum(t)]))/t)
    }
    z <- (T - E)/sqrt(v)
    p <- pnorm(z)
    PVAL <- switch(alternative, less = p, greater = 1 - p, two.sided = 2 * 
        min(p, 1 - p))
    structure(list(statistic = structure(z, names = "Z"), p.value = PVAL, 
        alternative = alternative, method = "Mood two-sample test of scale", 
        data.name = DNAME), class = "htest")
}
