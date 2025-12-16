#? stdlib
`fitted.smooth.spline` <- function (object, ...) 
{
    if (!is.list(dat <- object$data)) 
        stop("need result of smooth.spline(keep.data = TRUE)")
    object$y[match(dat$x, object$x)]
}
