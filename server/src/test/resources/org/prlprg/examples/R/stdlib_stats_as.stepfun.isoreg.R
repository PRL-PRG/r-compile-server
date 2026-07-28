#? stdlib
`as.stepfun.isoreg` <- function (x, ...) 
{
    sf <- stepfun(x = (if (x$isOrd) 
        x$x
    else x$x[x$ord])[x$iKnots], y = c(x$yf[x$iKnots], x$yf[length(x$yf)]), 
        right = TRUE)
    attr(sf, "call") <- x$call
    sf
}
