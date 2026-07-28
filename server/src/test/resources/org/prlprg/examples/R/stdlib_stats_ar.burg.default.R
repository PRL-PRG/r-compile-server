#? stdlib
`ar.burg.default` <- function (x, aic = TRUE, order.max = NULL, na.action = na.fail, 
    demean = TRUE, series = NULL, var.method = 1L, ...) 
{
    if (is.null(series)) 
        series <- deparse1(substitute(x))
    if (ists <- is.ts(x)) 
        xtsp <- tsp(x)
    x <- na.action(as.ts(x))
    if (anyNA(x)) 
        stop("NAs in 'x'")
    if (ists) 
        xtsp <- tsp(x)
    xfreq <- frequency(x)
    x <- as.vector(x)
    if (demean) {
        x.mean <- mean(x)
        x <- x - x.mean
    }
    else x.mean <- 0
    n.used <- length(x)
    order.max <- if (is.null(order.max)) 
        min(n.used - 1L, floor(10 * log10(n.used)))
    else floor(order.max)
    if (order.max < 1L) 
        stop("'order.max' must be >= 1")
    else if (order.max >= n.used) 
        stop("'order.max' must be < 'n.used'")
    xaic <- numeric(order.max + 1L)
    z <- .Call(C_Burg, x, order.max)
    coefs <- matrix(z[[1L]], order.max, order.max)
    partialacf <- array(diag(coefs), dim = c(order.max, 1L, 1L))
    var.pred <- if (var.method == 1L) 
        z[[2L]]
    else z[[3L]]
    if (any(is.nan(var.pred))) 
        stop("zero-variance series")
    xaic <- n.used * log(var.pred) + 2 * (0L:order.max) + 2 * 
        demean
    maic <- min(aic)
    xaic <- setNames(if (is.finite(maic)) 
        xaic - min(xaic)
    else ifelse(xaic == maic, 0, Inf), 0L:order.max)
    order <- if (aic) 
        (0L:order.max)[xaic == 0]
    else order.max
    ar <- if (order) 
        coefs[order, 1L:order]
    else numeric()
    var.pred <- var.pred[order + 1L]
    resid <- if (order) 
        c(rep(NA, order), embed(x, order + 1L) %*% c(1, -ar))
    else x
    if (ists) {
        attr(resid, "tsp") <- xtsp
        attr(resid, "class") <- "ts"
    }
    res <- list(order = order, ar = ar, var.pred = var.pred, 
        x.mean = x.mean, aic = xaic, n.used = n.used, n.obs = n.used, 
        order.max = order.max, partialacf = partialacf, resid = resid, 
        method = ifelse(var.method == 1L, "Burg", "Burg2"), series = series, 
        frequency = xfreq, call = match.call())
    if (order) {
        xacf <- acf(x, type = "covariance", lag.max = order, 
            plot = FALSE)$acf
        res$asy.var.coef <- solve(toeplitz(drop(xacf)[seq_len(order)])) * 
            var.pred/n.used
    }
    class(res) <- "ar"
    res
}
