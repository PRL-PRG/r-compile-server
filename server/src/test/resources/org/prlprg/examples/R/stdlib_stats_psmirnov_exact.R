#? stdlib
`psmirnov_exact` <- function (q, sizes, z = NULL, alternative = c("two.sided", "less", 
    "greater"), lower.tail = TRUE, log.p = FALSE) 
{
    if (!is.null(z)) {
        z <- (diff(sort(z)) != 0)
        z <- if (any(z)) 
            c(0L, z, 1L)
    }
    two.sided <- (alternative == "two.sided")
    if (alternative == "less") 
        sizes <- c(sizes[2L], sizes[1L])
    p <- .Call(C_psmirnov_exact, q, sizes[1L], sizes[2L], z, 
        two.sided, lower.tail)
    if (log.p) 
        log(p)
    else p
}
