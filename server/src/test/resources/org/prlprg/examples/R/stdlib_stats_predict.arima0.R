#? stdlib
`predict.arima0` <- function (object, n.ahead = 1L, newxreg = NULL, se.fit = TRUE, 
    ...) 
{
    myNCOL <- function(x) if (is.null(x)) 
        0
    else NCOL(x)
    data <- eval.parent(str2lang(object$series))
    xr <- object$call$xreg
    xreg <- if (!is.null(xr)) 
        eval.parent(xr)
    else NULL
    ncxreg <- myNCOL(xreg)
    if (myNCOL(newxreg) != ncxreg) 
        stop("'xreg' and 'newxreg' have different numbers of columns")
    class(xreg) <- NULL
    xtsp <- tsp(object$residuals)
    n <- length(data)
    arma <- object$arma
    coefs <- object$coef
    narma <- sum(arma[1L:4L])
    if (length(coefs) > narma) {
        if (names(coefs)[narma + 1] == "intercept") {
            xreg <- cbind(intercept = rep_len(1, n), xreg)
            newxreg <- cbind(intercept = rep_len(1, n.ahead), 
                newxreg)
            ncxreg <- ncxreg + 1
        }
        data <- data - as.matrix(xreg) %*% coefs[-(1L:narma)]
        xm <- drop(as.matrix(newxreg) %*% coefs[-(1L:narma)])
    }
    else xm <- 0
    if (arma[2L] > 0) {
        ma <- coefs[arma[1L] + 1L:arma[2L]]
        if (any(Mod(polyroot(c(1, ma))) < 1)) 
            warning("MA part of model is not invertible")
    }
    if (arma[4L] > 0) {
        ma <- coefs[sum(arma[1L:3L]) + 1L:arma[4L]]
        if (any(Mod(polyroot(c(1, ma))) < 1)) 
            warning("seasonal MA part of model is not invertible")
    }
    storage.mode(data) <- "double"
    G <- .Call(C_setup_starma, as.integer(arma), data, n, rep_len(0, 
        n), 0, -1, 0, 0)
    on.exit(.Call(C_free_starma, G))
    .Call(C_Starma_method, G, TRUE)
    .Call(C_arma0fa, G, as.double(coefs))
    z <- .Call(C_arma0_kfore, G, arma[6L], arma[7L], n.ahead)
    pred <- ts(z[[1L]] + xm, start = xtsp[2L] + deltat(data), 
        frequency = xtsp[3L])
    if (se.fit) {
        se <- ts(sqrt(z[[2L]]), start = xtsp[2L] + deltat(data), 
            frequency = xtsp[3L])
        return(list(pred = pred, se = se))
    }
    else return(pred)
}
