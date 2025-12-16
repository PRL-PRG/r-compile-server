#? stdlib
`predict.HoltWinters` <- function (object, n.ahead = 1L, prediction.interval = FALSE, 
    level = 0.95, ...) 
{
    f <- frequency(object$x)
    vars <- function(h) {
        psi <- function(j) object$alpha * (1 + j * object$beta) + 
            (j%%f == 0) * object$gamma * (1 - object$alpha)
        var(residuals(object)) * if (object$seasonal == "additive") 
            sum(1, (h > 1) * sapply(1L:(h - 1), function(j) crossprod(psi(j))))
        else {
            rel <- 1 + (h - 1)%%f
            sum(sapply(0:(h - 1), function(j) crossprod(psi(j) * 
                object$coefficients[2 + rel]/object$coefficients[2 + 
                (rel - j)%%f])))
        }
    }
    fit <- rep(as.vector(object$coefficients[1L]), n.ahead)
    if (!is.logical(object$beta) || object$beta) 
        fit <- fit + as.vector((1L:n.ahead) * object$coefficients[2L])
    if (!is.logical(object$gamma) || object$gamma) 
        if (object$seasonal == "additive") 
            fit <- fit + rep(object$coefficients[-(1L:(1 + (!is.logical(object$beta) || 
                object$beta)))], length.out = length(fit))
        else fit <- fit * rep(object$coefficients[-(1L:(1 + (!is.logical(object$beta) || 
            object$beta)))], length.out = length(fit))
    if (prediction.interval) 
        int <- qnorm((1 + level)/2) * sqrt(sapply(1L:n.ahead, 
            vars))
    ts(cbind(fit = fit, upr = if (prediction.interval) 
        fit + int, lwr = if (prediction.interval) 
        fit - int), start = end(lag(fitted(object)[, 1], k = -1)), 
        frequency = frequency(fitted(object)[, 1]))
}

# Examples
require(graphics)

m <- HoltWinters(co2)
p <- predict(m, 50, prediction.interval = TRUE)
plot(m, p)

