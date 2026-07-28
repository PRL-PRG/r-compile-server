#? stdlib
`summary.glm` <- function (object, dispersion = NULL, correlation = FALSE, symbolic.cor = FALSE, 
    ...) 
{
    est.disp <- FALSE
    df.r <- object$df.residual
    if (is.null(dispersion)) {
        fam <- object$family
        dispersion <- if (!is.null(fam$dispersion) && !is.na(fam$dispersion)) 
            fam$dispersion
        else if (fam$family %in% c("poisson", "binomial")) 
            1
        else if (df.r > 0) {
            est.disp <- TRUE
            if (any(object$weights == 0)) 
                warning("observations with zero weight not used for calculating dispersion")
            sum((object$weights * object$residuals^2)[object$weights > 
                0])/df.r
        }
        else {
            est.disp <- TRUE
            NaN
        }
    }
    aliased <- is.na(coef(object))
    p <- object$rank
    if (p > 0) {
        p1 <- 1L:p
        Qr <- qr.lm(object)
        coef.p <- object$coefficients[Qr$pivot[p1]]
        covmat.unscaled <- chol2inv(Qr$qr[p1, p1, drop = FALSE])
        dimnames(covmat.unscaled) <- list(names(coef.p), names(coef.p))
        covmat <- dispersion * covmat.unscaled
        var.cf <- diag(covmat)
        s.err <- sqrt(var.cf)
        tvalue <- coef.p/s.err
        dn <- c("Estimate", "Std. Error")
        if (!est.disp) {
            pvalue <- 2 * pnorm(-abs(tvalue))
            coef.table <- cbind(coef.p, s.err, tvalue, pvalue)
            dimnames(coef.table) <- list(names(coef.p), c(dn, 
                "z value", "Pr(>|z|)"))
        }
        else if (df.r > 0) {
            pvalue <- 2 * pt(-abs(tvalue), df.r)
            coef.table <- cbind(coef.p, s.err, tvalue, pvalue)
            dimnames(coef.table) <- list(names(coef.p), c(dn, 
                "t value", "Pr(>|t|)"))
        }
        else {
            coef.table <- cbind(coef.p, NaN, NaN, NaN)
            dimnames(coef.table) <- list(names(coef.p), c(dn, 
                "t value", "Pr(>|t|)"))
        }
        df.f <- NCOL(Qr$qr)
    }
    else {
        coef.table <- matrix(, 0L, 4L)
        dimnames(coef.table) <- list(NULL, c("Estimate", "Std. Error", 
            "t value", "Pr(>|t|)"))
        covmat.unscaled <- covmat <- matrix(, 0L, 0L)
        df.f <- length(aliased)
    }
    keep <- match(c("call", "terms", "family", "deviance", "aic", 
        "contrasts", "df.residual", "null.deviance", "df.null", 
        "iter", "na.action"), names(object), 0L)
    ans <- c(object[keep], list(deviance.resid = residuals(object, 
        type = "deviance"), coefficients = coef.table, aliased = aliased, 
        dispersion = dispersion, df = c(object$rank, df.r, df.f), 
        cov.unscaled = covmat.unscaled, cov.scaled = covmat))
    if (correlation && p > 0) {
        dd <- sqrt(diag(covmat.unscaled))
        ans$correlation <- covmat.unscaled/outer(dd, dd)
        ans$symbolic.cor <- symbolic.cor
    }
    class(ans) <- "summary.glm"
    return(ans)
}

# Examples
## For examples see example(glm)

