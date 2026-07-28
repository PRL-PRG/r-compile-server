#? stdlib
`split<-.default` <- function (x, f, drop = FALSE, ..., value) 
{
    ix <- split(seq_along(x), f, drop = drop, ...)
    n <- length(value)
    j <- 0
    for (i in ix) {
        j <- j%%n + 1
        x[i] <- value[[j]]
    }
    x
}
