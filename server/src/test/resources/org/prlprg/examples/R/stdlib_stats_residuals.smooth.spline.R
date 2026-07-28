#? stdlib
`residuals.smooth.spline` <- function (object, type = c("working", "response", "deviance", 
    "pearson", "partial"), ...) 
{
    type <- match.arg(type)
    if (!is.list(dat <- object$data)) 
        stop("need result of smooth.spline(keep.data = TRUE)")
    r <- dat$y - object$y[match(dat$x, object$x)]
    res <- switch(type, working = , response = r, deviance = , 
        pearson = if (is.null(dat$w)) r else r * sqrt(dat$w), 
        partial = r)
    res <- naresid(object$na.action, res)
    if (type == "partial") 
        stop("type = \"partial\" is not yet implemented")
    res
}
