#? stdlib
`influence.measures` <- function (model, infl = influence(model)) 
{
    is.influential <- function(infmat, n) {
        d <- dim(infmat)
        k <- d[[length(d)]] - 4L
        if (n <= k) 
            stop("too few cases i with h_ii > 0), n < k")
        absmat <- abs(infmat)
        r <- if (is.matrix(infmat)) {
            cbind(absmat[, 1L:k] > 1, absmat[, k + 1] > 3 * sqrt(k/(n - 
                k)), abs(1 - infmat[, k + 2]) > (3 * k)/(n - 
                k), pf(infmat[, k + 3], k, n - k) > 0.5, infmat[, 
                k + 4] > (3 * k)/n)
        }
        else {
            c(absmat[, , 1L:k] > 1, absmat[, , k + 1] > 3 * sqrt(k/(n - 
                k)), abs(1 - infmat[, , k + 2]) > (3 * k)/(n - 
                k), pf(infmat[, , k + 3], k, n - k) > 0.5, infmat[, 
                , k + 4] > (3 * k)/n)
        }
        attributes(r) <- attributes(infmat)
        r
    }
    p <- model$rank
    e <- weighted.residuals(model)
    s <- sqrt(sum(e^2, na.rm = TRUE)/df.residual(model))
    mqr <- qr.lm(model)
    xxi <- chol2inv(mqr$qr, mqr$rank)
    si <- infl$sigma
    h <- infl$hat
    is.mlm <- is.matrix(e)
    cf <- if (is.mlm) 
        aperm(infl$coefficients, c(1L, 3:2))
    else infl$coefficients
    dfbetas <- cf/outer(infl$sigma, sqrt(diag(xxi)))
    vn <- variable.names(model)
    vn[vn == "(Intercept)"] <- "1_"
    dimnames(dfbetas)[[length(dim(dfbetas))]] <- paste0("dfb.", 
        abbreviate(vn))
    dffits <- e * sqrt(h)/(si * (1 - h))
    if (any(ii <- is.infinite(dffits))) 
        dffits[ii] <- NaN
    cov.ratio <- (si/s)^(2 * p)/(1 - h)
    cooks.d <- if (inherits(model, "glm")) 
        (infl$pear.res/(1 - h))^2 * h/(summary(model)$dispersion * 
            p)
    else ((e/(s * (1 - h)))^2 * h)/p
    infmat <- if (is.mlm) {
        dns <- dimnames(dfbetas)
        dns[[3]] <- c(dns[[3]], "dffit", "cov.r", "cook.d", "hat")
        a <- array(dfbetas, dim = dim(dfbetas) + c(0, 0, 3 + 
            1), dimnames = dns)
        a[, , "dffit"] <- dffits
        a[, , "cov.r"] <- cov.ratio
        a[, , "cook.d"] <- cooks.d
        a[, , "hat"] <- h
        a
    }
    else {
        cbind(dfbetas, dffit = dffits, cov.r = cov.ratio, cook.d = cooks.d, 
            hat = h)
    }
    infmat[is.infinite(infmat)] <- NaN
    is.inf <- is.influential(infmat, sum(h > 0))
    ans <- list(infmat = infmat, is.inf = is.inf, call = model$call)
    class(ans) <- "infl"
    ans
}
