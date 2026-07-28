#? stdlib
`jitter` <- function (x, factor = 1, amount = NULL) 
{
    if (length(x) == 0L) 
        return(x)
    if (!is.numeric(x)) 
        stop("'x' must be numeric")
    z <- diff(r <- range(x[is.finite(x)]))
    if (z == 0) 
        z <- abs(r[1L])
    if (z == 0) 
        z <- 1
    if (is.null(amount)) {
        d <- diff(xx <- unique(sort.int(round(x, 3 - floor(log10(z))))))
        d <- if (length(d)) 
            min(d)
        else if (xx != 0) 
            xx/10
        else z/10
        amount <- factor/5 * abs(d)
    }
    else if (amount == 0) 
        amount <- factor * (z/50)
    x + stats::runif(length(x), -amount, amount)
}

# Examples
round(jitter(c(rep(1, 3), rep(1.2, 4), rep(3, 3))), 3)
## These two 'fail' with S-plus 3.x:
jitter(rep(0, 7))
jitter(rep(10000, 5))

