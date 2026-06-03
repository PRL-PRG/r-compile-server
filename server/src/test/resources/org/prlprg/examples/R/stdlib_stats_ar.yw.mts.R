#? stdlib
`ar.yw.mts` <- function (x, aic = TRUE, order.max = NULL, na.action = na.fail, 
    demean = TRUE, series = NULL, var.method = 1L, ...) 
{
    if (is.null(series)) 
        series <- deparse1(substitute(x))
    if (ists <- is.ts(x)) 
        xtsp <- tsp(x)
    x <- na.action(as.ts(x))
    if (any(is.na(x) != is.na(x[, 1]))) 
        stop("NAs in 'x' must be the same row-wise")
    if (ists) 
        xtsp <- tsp(x)
    xfreq <- frequency(x)
    x <- as.matrix(x)
    nser <- ncol(x)
    n.used <- nrow(x)
    n.obs <- sum(!is.na(x[, 1]))
    if (demean) {
        x.mean <- colMeans(x, na.rm = TRUE)
        x <- sweep(x, 2L, x.mean, check.margin = FALSE)
    }
    else x.mean <- rep(0, nser)
    order.max <- floor(order.max %||% (10 * log10(n.obs)))
    if (order.max < 1L) 
        stop("'order.max' must be >= 1")
    xacf <- acf(x, type = "cov", plot = FALSE, lag.max = order.max, 
        na.action = na.pass)$acf
    z <- .C(C_multi_yw, aperm(xacf, 3:1), as.integer(n.obs), 
        as.integer(order.max), as.integer(nser), coefs = double((1L + 
            order.max) * nser * nser), pacf = double((1L + order.max) * 
            nser * nser), var = double((1L + order.max) * nser * 
            nser), aic = double(1L + order.max), order = integer(1L), 
        as.integer(aic))
    partialacf <- aperm(array(z$pacf, dim = c(nser, nser, order.max + 
        1L)), 3:1)[-1L, , , drop = FALSE]
    var.pred <- aperm(array(z$var, dim = c(nser, nser, order.max + 
        1L)), 3:1)
    xaic <- setNames(z$aic - min(z$aic), 0:order.max)
    order <- z$order
    resid <- x
    if (order > 0) {
        ar <- -aperm(array(z$coefs, dim = c(nser, nser, order.max + 
            1L)), 3:1)[2L:(order + 1L), , , drop = FALSE]
        for (i in 1L:order) resid[-(1L:order), ] <- resid[-(1L:order), 
            ] - x[(order - i + 1L):(n.used - i), ] %*% t(ar[i, 
            , ])
        resid[1L:order, ] <- NA
    }
    else ar <- array(dim = c(0, nser, nser))
    var.pred <- var.pred[order + 1L, , , drop = TRUE] * n.obs/(n.obs - 
        nser * (demean + order))
    if (ists) {
        attr(resid, "tsp") <- xtsp
        attr(resid, "class") <- c("mts", "ts")
    }
    snames <- colnames(x)
    colnames(resid) <- snames
    dimnames(ar) <- list(seq_len(order), snames, snames)
    dimnames(var.pred) <- list(snames, snames)
    dimnames(partialacf) <- list(1L:order.max, snames, snames)
    res <- list(order = order, ar = ar, var.pred = var.pred, 
        x.mean = x.mean, aic = xaic, n.used = n.used, n.obs = n.obs, 
        order.max = order.max, partialacf = partialacf, resid = resid, 
        method = "Yule-Walker", series = series, frequency = xfreq, 
        call = match.call())
    class(res) <- "ar"
    res
}
