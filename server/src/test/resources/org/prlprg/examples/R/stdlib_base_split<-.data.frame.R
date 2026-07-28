#? stdlib
`split<-.data.frame` <- function (x, f, drop = FALSE, ..., value) 
{
    if (inherits(f, "formula")) 
        f <- eval(attr(stats::terms(f), "variables"), x, environment(f))
    ix <- split(seq_len(nrow(x)), f, drop = drop, ...)
    n <- length(value)
    j <- 0
    for (i in ix) {
        j <- j%%n + 1
        x[i, ] <- value[[j]]
    }
    x
}
