#? stdlib
`hatvalues.smooth.spline` <- function (model, ...) 
{
    if (!is.list(dat <- model$data)) 
        stop("need result of smooth.spline(keep.data = TRUE)")
    hat <- model$lev
    hat[hat > 1 - 10 * .Machine$double.eps] <- 1
    hat[match(dat$x, model$x)]
}
