#? stdlib
`psmirnov_asymp` <- function (q, sizes, alternative = c("two.sided", "less", "greater"), 
    lower.tail = TRUE, log.p = FALSE) 
{
    alternative <- match.arg(alternative)
    two.sided <- (alternative == "two.sided")
    n <- prod(sizes)/sum(sizes)
    if (two.sided) {
        ret <- .Call(C_pkolmogorov_two_limit, sqrt(n) * q, lower.tail, 
            tol = 1e-06)
        if (log.p) 
            ret <- log(ret)
        return(ret)
    }
    else {
        ret <- -expm1(-2 * n * q^2)
        if (log.p) {
            if (lower.tail) 
                log(ret)
            else log1p(-ret)
        }
        else {
            if (lower.tail) 
                ret
            else 1 - ret
        }
    }
}
