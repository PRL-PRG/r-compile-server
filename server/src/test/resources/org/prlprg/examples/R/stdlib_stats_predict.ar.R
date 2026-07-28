#? stdlib
`predict.ar` <- function (object, newdata, n.ahead = 1L, se.fit = TRUE, ...) 
{
    if (n.ahead < 1L) 
        stop("'n.ahead' must be at least 1")
    if (missing(newdata)) {
        newdata <- eval.parent(str2lang(object$series))
        if (!is.null(nas <- object$call$na.action)) 
            newdata <- eval.parent(call(nas, newdata))
    }
    nser <- NCOL(newdata)
    ar <- object$ar
    p <- object$order
    st <- tsp(as.ts(newdata))[2L]
    dt <- deltat(newdata)
    xfreq <- frequency(newdata)
    tsp(newdata) <- NULL
    class(newdata) <- NULL
    if (NCOL(ar) != nser) 
        stop("number of series in 'object' and 'newdata' do not match")
    n <- NROW(newdata)
    if (nser > 1L) {
        xint <- object$x.intercept %||% rep.int(0, nser)
        x <- rbind(sweep(newdata, 2L, object$x.mean, check.margin = FALSE), 
            matrix(rep.int(0, nser), n.ahead, nser, byrow = TRUE))
        pred <- if (p) {
            for (i in seq_len(n.ahead)) {
                x[n + i, ] <- ar[1L, , ] %*% x[n + i - 1L, ] + 
                  xint
                if (p > 1L) 
                  for (j in 2L:p) x[n + i, ] <- x[n + i, ] + 
                    ar[j, , ] %*% x[n + i - j, ]
            }
            x[n + seq_len(n.ahead), ]
        }
        else matrix(xint, n.ahead, nser, byrow = TRUE)
        pred <- pred + matrix(object$x.mean, n.ahead, nser, byrow = TRUE)
        colnames(pred) <- colnames(object$var.pred)
        if (se.fit) {
            warning("'se.fit' not yet implemented for multivariate models")
            se <- matrix(NA, n.ahead, nser)
        }
    }
    else {
        xint <- object$x.intercept %||% 0
        x <- c(newdata - object$x.mean, rep.int(0, n.ahead))
        if (p) {
            for (i in seq_len(n.ahead)) x[n + i] <- sum(ar * 
                x[n + i - seq_len(p)]) + xint
            pred <- x[n + seq_len(n.ahead)]
            if (se.fit) {
                psi <- .Call(C_ar2ma, ar, n.ahead - 1L)
                vars <- cumsum(c(1, psi^2))
                se <- sqrt(object$var.pred * vars)[seq_len(n.ahead)]
            }
        }
        else {
            pred <- rep.int(xint, n.ahead)
            if (se.fit) 
                se <- rep.int(sqrt(object$var.pred), n.ahead)
        }
        pred <- pred + rep.int(object$x.mean, n.ahead)
    }
    pred <- ts(pred, start = st + dt, frequency = xfreq)
    if (se.fit) 
        list(pred = pred, se = ts(se, start = st + dt, frequency = xfreq))
    else pred
}
