#? stdlib
`lm.influence` <- function (model, do.coef = TRUE) 
{
    wt.res <- weighted.residuals(model)
    e <- na.omit(wt.res)
    is.mlm <- is.matrix(e)
    if (model$rank == 0) {
        n <- length(wt.res)
        sigma <- sqrt(deviance(model)/df.residual(model))
        res <- list(hat = rep(0, n), coefficients = matrix(0, 
            n, 0), sigma = rep(sigma, n))
    }
    else {
        e[abs(e) < 100 * .Machine$double.eps * median(abs(e))] <- 0
        mqr <- qr.lm(model)
        n <- as.integer(nrow(mqr$qr))
        if (is.na(n)) 
            stop("invalid model QR matrix")
        if (NROW(e) != n) 
            stop("non-NA residual length does not match cases used in fitting")
        do.coef <- as.logical(do.coef)
        tol <- 10 * .Machine$double.eps
        res <- .Call(C_influence, mqr, e, tol)
        if (do.coef) {
            ok <- seq_len(mqr$rank)
            Q <- qr.Q(mqr)[, ok, drop = FALSE]
            R <- qr.R(mqr)[ok, ok, drop = FALSE]
            hat <- res$hat
            invRQtt <- t(backsolve(R, t(Q)))
            k <- NCOL(Q)
            q <- NCOL(e)
            res$coefficients <- if (is.mlm) {
                cf <- array(0, c(n, k, q))
                for (j in seq_len(q)) cf[, , j] <- invRQtt * 
                  ifelse(hat == 1, 0, e[, j]/(1 - hat))
                cf
            }
            else invRQtt * ifelse(hat == 1, 0, e/(1 - hat))
        }
        drop1d <- function(a) {
            d <- dim(a)
            if (length(d) == 3L && d[[3L]] == 1L) 
                dim(a) <- d[-3L]
            a
        }
        if (is.null(model$na.action)) {
            if (!is.mlm) {
                res$sigma <- drop(res$sigma)
                if (do.coef) 
                  res$coefficients <- drop1d(res$coefficients)
            }
        }
        else {
            hat <- naresid(model$na.action, res$hat)
            hat[is.na(hat)] <- 0
            res$hat <- hat
            if (do.coef) {
                coefficients <- naresid(model$na.action, res$coefficients)
                coefficients[is.na(coefficients)] <- 0
                res$coefficients <- if (is.mlm) 
                  coefficients
                else drop1d(coefficients)
            }
            sigma <- naresid(model$na.action, res$sigma)
            sigma[is.na(sigma)] <- sqrt(deviance(model)/df.residual(model))
            res$sigma <- if (is.mlm) 
                sigma
            else drop(sigma)
        }
    }
    res$wt.res <- naresid(model$na.action, e)
    res$hat[res$hat > 1 - 10 * .Machine$double.eps] <- 1
    names(res$hat) <- names(res$sigma) <- names(res$wt.res)
    if (do.coef) {
        cf <- coef(model)
        if (is.mlm) {
            dnr <- dimnames(res$wt.res)
            dimnames(res$coefficients) <- list(dnr[[1L]], rownames(cf)[!apply(cf, 
                1L, anyNA)], dnr[[2L]])
        }
        else {
            dimnames(res$coefficients) <- list(names(res$wt.res), 
                names(cf)[!is.na(cf)])
        }
    }
    res[c("hat", "coefficients", "sigma", "wt.res")]
}

# Examples
## Analysis of the life-cycle savings data
## given in Belsley, Kuh and Welsch.
summary(lm.SR <- lm(sr ~ pop15 + pop75 + dpi + ddpi,
                    data = LifeCycleSavings),
        correlation = TRUE)
utils::str(lmI <- lm.influence(lm.SR))

qRes <- qr(lm.SR) # == lm.SR $ qr
qrI <- qr.influence(qRes, residuals(lm.SR))
strip <- function(x) lapply(lapply(x, unname), drop)
stopifnot(identical(strip(qrI),
                    strip(lmI[c("hat", "sigma")])))

## For more "user level" examples, use example(influence.measures)

