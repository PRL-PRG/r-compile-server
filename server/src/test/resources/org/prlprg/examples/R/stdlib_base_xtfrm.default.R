#? stdlib
`xtfrm.default` <- function (x) 
{
    y <- if (is.numeric(x)) 
        unclass(x)
    else as.vector(rank(x, ties.method = "min", na.last = "keep"))
    if (!is.numeric(y) || ((length(y) != length(x)) && !inherits(x, 
        "data.frame"))) 
        stop("cannot xtfrm 'x'")
    y
}
