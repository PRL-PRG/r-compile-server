#? stdlib
`qsmirnov` <- function (p, sizes, z = NULL, alternative = c("two.sided", "less", 
    "greater"), exact = TRUE, simulate = FALSE, B = 2000) 
{
    alternative <- match.arg(alternative)
    n.x <- floor(sizes[1L])
    n.y <- floor(sizes[2L])
    if (n.x * n.y < 10000) {
        stat <- sort(unique(c(outer(0:n.x/n.x, 0:n.y/n.y, "-"))))
    }
    else {
        stat <- (-10000):10000/(10000 + 1)
    }
    if (alternative == "two.sided") 
        stat <- abs(stat)
    prb <- psmirnov(stat, sizes = sizes, z = z, alternative = alternative, 
        exact = exact, simulate = simulate, B = B, log.p = FALSE, 
        lower.tail = TRUE)
    if (is.null(p)) 
        return(list(stat = stat, prob = prb))
    if (is.numeric(p)) {
        if (!is.double(p)) 
            storage.mode(p) <- "double"
    }
    else stop("argument 'p' must be numeric")
    ret <- p
    ret[is.na(p) | p < 0 | p > 1] <- NA
    IND <- which(!is.na(ret))
    ret[IND] <- vapply(p[IND], function(u) min(stat[prb >= u]), 
        1)
    ret
}
