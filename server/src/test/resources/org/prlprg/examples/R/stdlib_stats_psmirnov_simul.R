#? stdlib
`psmirnov_simul` <- function (q, sizes, z = NULL, alternative = c("two.sided", "less", 
    "greater"), lower.tail = TRUE, log.p = FALSE, B) 
{
    Dsim <- rsmirnov(B, sizes = sizes, z = z, alternative = alternative)
    ret <- ecdf(Dsim)(q - sqrt(.Machine$double.eps))
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
