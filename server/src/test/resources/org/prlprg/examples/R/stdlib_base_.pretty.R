#? stdlib
`.pretty` <- function (x, n = 5L, min.n = n%/%3L, shrink.sml = 0.75, high.u.bias = 1.5, 
    u5.bias = 0.5 + 1.5 * high.u.bias, eps.correct = 0L, f.min = 2^-20, 
    bounds = TRUE) 
{
    x <- x[is.finite(x <- as.numeric(x))]
    if (length(x)) 
        .Internal(pretty(min(x), max(x), n, min.n, shrink.sml, 
            c(high.u.bias, u5.bias, f.min), eps.correct, bounds))
}
