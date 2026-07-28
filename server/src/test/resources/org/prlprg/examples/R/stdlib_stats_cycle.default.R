#? stdlib
`cycle.default` <- function (x, ...) 
{
    p <- tsp(hasTsp(x))
    m <- round((p[1L]%%1) * p[3L])
    x <- (1L:NROW(x) + m - 1)%%p[3L] + 1
    tsp(x) <- p
    x
}
