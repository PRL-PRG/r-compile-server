#? stdlib
`predict.loess` <- function (object, newdata = NULL, se = FALSE, na.action = na.pass, 
    ...) 
{
    if (!inherits(object, "loess")) 
        stop("first argument must be a \"loess\" object")
    if (is.null(newdata) && !se) 
        return(fitted(object))
    op <- object$pars
    res <- predLoess(object$y, object$x, newx = if (is.null(newdata)) 
        object$x
    else if (is.data.frame(newdata)) 
        as.matrix(model.frame(delete.response(terms(object)), 
            newdata, na.action = na.action))
    else as.matrix(newdata), object$s, object$weights, object$robust, 
        op$span, op$degree, op$normalize, op$parametric, op$drop.square, 
        op$surface, op$cell, op$family, object$kd, object$divisor, 
        se = se)
    if (!is.null(out.attrs <- attr(newdata, "out.attrs"))) {
        if (se) {
            res$fit <- array(res$fit, out.attrs$dim, out.attrs$dimnames)
            res$se.fit <- array(res$se.fit, out.attrs$dim, out.attrs$dimnames)
        }
        else res <- array(res, out.attrs$dim, out.attrs$dimnames)
    }
    if (se) 
        res$df <- object$one.delta^2/object$two.delta
    res
}

# Examples
cars.lo <- loess(dist ~ speed, cars)
predict(cars.lo, data.frame(speed = seq(5, 30, 1)), se = TRUE)
# to get extrapolation
cars.lo2 <- loess(dist ~ speed, cars,
  control = loess.control(surface = "direct"))
predict(cars.lo2, data.frame(speed = seq(5, 30, 1)), se = TRUE)

