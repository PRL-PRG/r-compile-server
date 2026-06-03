#? stdlib
`summary.lm` <- function (object, correlation = FALSE, symbolic.cor = FALSE, 
    ...) 
{
    z <- object
    p <- z$rank
    rdf <- z$df.residual
    if (p == 0) {
        r <- z$residuals
        n <- length(r)
        w <- z$weights
        if (is.null(w)) {
            rss <- sum(r^2)
        }
        else {
            rss <- sum(w * r^2)
            r <- sqrt(w) * r
        }
        resvar <- rss/rdf
        ans <- z[c("call", "terms", if (!is.null(z$weights)) "weights")]
        class(ans) <- "summary.lm"
        ans$aliased <- is.na(coef(object))
        ans$residuals <- r
        ans$df <- c(0L, n, length(ans$aliased))
        ans$coefficients <- matrix(NA_real_, 0L, 4L, dimnames = list(NULL, 
            c("Estimate", "Std. Error", "t value", "Pr(>|t|)")))
        ans$sigma <- sqrt(resvar)
        ans$r.squared <- ans$adj.r.squared <- 0
        ans$cov.unscaled <- matrix(NA_real_, 0L, 0L)
        if (correlation) 
            ans$correlation <- ans$cov.unscaled
        return(ans)
    }
    if (is.null(z$terms)) 
        stop("invalid 'lm' object:  no 'terms' component")
    if (!inherits(object, "lm")) 
        warning("calling summary.lm(<fake-lm-object>) ...")
    Qr <- qr.lm(object)
    n <- NROW(Qr$qr)
    if (is.na(z$df.residual) || n - p != z$df.residual) 
        warning("residual degrees of freedom in object suggest this is not an \"lm\" fit")
    r <- z$residuals
    f <- z$fitted.values
    if (!is.null(z$offset)) {
        f <- f - z$offset
    }
    w <- z$weights
    if (is.null(w)) {
        mss <- if (attr(z$terms, "intercept")) 
            sum((f - mean(f))^2)
        else sum(f^2)
        rss <- sum(r^2)
    }
    else {
        mss <- if (attr(z$terms, "intercept")) {
            m <- sum(w * f/sum(w))
            sum(w * (f - m)^2)
        }
        else sum(w * f^2)
        rss <- sum(w * r^2)
        r <- sqrt(w) * r
    }
    resvar <- rss/rdf
    if (is.finite(resvar) && resvar < (mean(f)^2 + var(c(f))) * 
        1e-30) 
        warning("essentially perfect fit: summary may be unreliable")
    p1 <- 1L:p
    R <- chol2inv(Qr$qr[p1, p1, drop = FALSE])
    se <- sqrt(diag(R) * resvar)
    est <- z$coefficients[Qr$pivot[p1]]
    tval <- est/se
    ans <- z[c("call", "terms", if (!is.null(z$weights)) "weights")]
    ans$residuals <- r
    ans$coefficients <- cbind(Estimate = est, `Std. Error` = se, 
        `t value` = tval, `Pr(>|t|)` = 2 * pt(abs(tval), rdf, 
            lower.tail = FALSE))
    ans$aliased <- is.na(z$coefficients)
    ans$sigma <- sqrt(resvar)
    ans$df <- c(p, rdf, NCOL(Qr$qr))
    if (p != attr(z$terms, "intercept")) {
        df.int <- if (attr(z$terms, "intercept")) 
            1L
        else 0L
        ans$r.squared <- mss/(mss + rss)
        ans$adj.r.squared <- 1 - (1 - ans$r.squared) * ((n - 
            df.int)/rdf)
        ans$fstatistic <- c(value = (mss/(p - df.int))/resvar, 
            numdf = p - df.int, dendf = rdf)
    }
    else ans$r.squared <- ans$adj.r.squared <- 0
    ans$cov.unscaled <- R
    dimnames(ans$cov.unscaled) <- dimnames(ans$coefficients)[c(1, 
        1)]
    if (correlation) {
        ans$correlation <- (R * resvar)/outer(se, se)
        dimnames(ans$correlation) <- dimnames(ans$cov.unscaled)
        ans$symbolic.cor <- symbolic.cor
    }
    if (!is.null(z$na.action)) 
        ans$na.action <- z$na.action
    class(ans) <- "summary.lm"
    ans
}

# Examples
utils::example("lm", echo = FALSE)
##-- Continuing the  lm(.) example:
coef(lm.D90)  # the bare coefficients
sld90 <- summary(lm.D90 <- lm(weight ~ group -1))  # omitting intercept
sld90
coef(sld90)  # much more

## model with *aliased* coefficient:
lm.D9. <- lm(weight ~ group + I(group != "Ctl"))
Sm.D9. <- summary(lm.D9.)
Sm.D9. #  shows the NA NA NA NA  line
stopifnot(length(cc <- coef(lm.D9.)) == 3, is.na(cc[3]),
          dim(coef(Sm.D9.)) == c(2,4), Sm.D9.$df == c(2, 18, 3))

