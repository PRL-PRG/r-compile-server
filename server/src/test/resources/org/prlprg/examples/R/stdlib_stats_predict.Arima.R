#? stdlib
`predict.Arima` <- function (object, n.ahead = 1L, newxreg = NULL, se.fit = TRUE, 
    ...) 
{
    myNCOL <- function(x) if (is.null(x)) 
        0
    else NCOL(x)
    rsd <- object$residuals
    xr <- object$call$xreg
    xreg <- if (!is.null(xr)) 
        eval.parent(xr)
    else NULL
    ncxreg <- myNCOL(xreg)
    if (myNCOL(newxreg) != ncxreg) 
        stop("'xreg' and 'newxreg' have different numbers of columns")
    xtsp <- tsp(rsd)
    n <- length(rsd)
    arma <- object$arma
    coefs <- object$coef
    narma <- sum(arma[1L:4L])
    if (length(coefs) > narma) {
        if (names(coefs)[narma + 1L] == "intercept") {
            newxreg <- cbind(intercept = rep(1, n.ahead), newxreg)
            ncxreg <- ncxreg + 1L
        }
        xm <- if (narma == 0) 
            drop(as.matrix(newxreg) %*% coefs)
        else drop(as.matrix(newxreg) %*% coefs[-(1L:narma)])
    }
    else xm <- 0
    if (arma[2L] > 0L) {
        ma <- coefs[arma[1L] + 1L:arma[2L]]
        if (any(Mod(polyroot(c(1, ma))) < 1)) 
            warning("MA part of model is not invertible")
    }
    if (arma[4L] > 0L) {
        ma <- coefs[sum(arma[1L:3L]) + 1L:arma[4L]]
        if (any(Mod(polyroot(c(1, ma))) < 1)) 
            warning("seasonal MA part of model is not invertible")
    }
    z <- KalmanForecast(n.ahead, object$model)
    pred <- ts(z[[1L]] + xm, start = xtsp[2L] + deltat(rsd), 
        frequency = xtsp[3L])
    if (se.fit) {
        se <- ts(sqrt(z[[2L]] * object$sigma2), start = xtsp[2L] + 
            deltat(rsd), frequency = xtsp[3L])
        list(pred = pred, se = se)
    }
    else pred
}

# Examples
od <- options(digits = 5) # avoid too much spurious accuracy
predict(arima(lh, order = c(3,0,0)), n.ahead = 12)

(fit <- arima(USAccDeaths, order = c(0,1,1),
              seasonal = list(order = c(0,1,1))))
predict(fit, n.ahead = 6)
options(od)

