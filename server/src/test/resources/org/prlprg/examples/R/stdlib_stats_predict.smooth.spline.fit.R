#? stdlib
`predict.smooth.spline.fit` <- function (object, x, deriv = 0, ...) 
{
    if (missing(x)) 
        x <- seq.int(from = object$min, to = object$min + object$range, 
            length.out = length(object$coef) - 4L)
    xs <- (x - object$min)/object$range
    extrap.left <- xs < 0
    extrap.right <- xs > 1
    interp <- !(extrap <- extrap.left | extrap.right)
    n <- sum(interp)
    y <- xs
    if (any(interp)) 
        y[interp] <- .Fortran(C_bvalus, n = as.integer(n), knot = as.double(object$knot), 
            coef = as.double(object$coef), nk = as.integer(object$nk), 
            x = as.double(xs[interp]), s = double(n), order = as.integer(deriv))$s
    if (any(extrap)) {
        xrange <- c(object$min, object$min + object$range)
        if (deriv == 0) {
            end.object <- Recall(object, xrange)$y
            end.slopes <- Recall(object, xrange, 1)$y * object$range
            if (any(extrap.left)) 
                y[extrap.left] <- end.object[1L] + end.slopes[1L] * 
                  (xs[extrap.left] - 0)
            if (any(extrap.right)) 
                y[extrap.right] <- end.object[2L] + end.slopes[2L] * 
                  (xs[extrap.right] - 1)
        }
        else if (deriv == 1) {
            end.slopes <- Recall(object, xrange, 1)$y * object$range
            y[extrap.left] <- end.slopes[1L]
            y[extrap.right] <- end.slopes[2L]
        }
        else y[extrap] <- 0
    }
    if (deriv > 0) 
        y <- y/(object$range^deriv)
    list(x = x, y = y)
}
