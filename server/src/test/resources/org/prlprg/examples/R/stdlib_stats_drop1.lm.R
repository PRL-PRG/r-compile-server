#? stdlib
`drop1.lm` <- function (object, scope, scale = 0, all.cols = TRUE, test = c("none", 
    "Chisq", "F"), k = 2, ...) 
{
    check_exact(object)
    x <- model.matrix(object)
    offset <- model.offset(model.frame(object))
    iswt <- !is.null(wt <- object$weights)
    n <- nrow(x)
    asgn <- attr(x, "assign")
    tl <- attr(object$terms, "term.labels")
    if (missing(scope)) 
        scope <- drop.scope(object)
    else {
        if (!is.character(scope)) 
            scope <- attr(terms(update.formula(object, scope)), 
                "term.labels")
        if (!all(match(scope, tl, 0L) > 0L)) 
            stop("scope is not a subset of term labels")
    }
    ndrop <- match(scope, tl)
    ns <- length(scope)
    rdf <- object$df.residual
    chisq <- deviance.lm(object)
    dfs <- numeric(ns)
    RSS <- numeric(ns)
    y <- object$residuals + object$fitted.values
    na.coef <- seq_along(object$coefficients)[!is.na(object$coefficients)]
    for (i in seq_len(ns)) {
        ii <- seq_along(asgn)[asgn == ndrop[i]]
        jj <- setdiff(if (all.cols) 
            seq(ncol(x))
        else na.coef, ii)
        z <- if (iswt) 
            lm.wfit(x[, jj, drop = FALSE], y, wt, offset = offset)
        else lm.fit(x[, jj, drop = FALSE], y, offset = offset)
        dfs[i] <- z$rank
        oldClass(z) <- "lm"
        RSS[i] <- deviance(z)
    }
    scope <- c("<none>", scope)
    dfs <- c(object$rank, dfs)
    RSS <- c(chisq, RSS)
    if (scale > 0) 
        aic <- RSS/scale - n + k * dfs
    else aic <- n * log(RSS/n) + k * dfs
    dfs <- dfs[1L] - dfs
    dfs[1L] <- NA
    aod <- data.frame(Df = dfs, `Sum of Sq` = c(NA, RSS[-1L] - 
        RSS[1L]), RSS = RSS, AIC = aic, row.names = scope, check.names = FALSE)
    if (scale > 0) 
        names(aod) <- c("Df", "Sum of Sq", "RSS", "Cp")
    test <- match.arg(test)
    if (test == "Chisq") {
        dev <- aod$"Sum of Sq"
        if (scale == 0) {
            dev <- n * log(RSS/n)
            dev <- dev - dev[1L]
            dev[1L] <- NA
        }
        else dev <- dev/scale
        df <- aod$Df
        nas <- !is.na(df)
        dev[nas] <- safe_pchisq(dev[nas], df[nas], lower.tail = FALSE)
        aod[, "Pr(>Chi)"] <- dev
    }
    else if (test == "F") {
        dev <- aod$"Sum of Sq"
        dfs <- aod$Df
        rdf <- object$df.residual
        rms <- aod$RSS[1L]/rdf
        Fs <- (dev/dfs)/rms
        Fs[dfs < 1e-04] <- NA
        P <- Fs
        nas <- !is.na(Fs)
        P[nas] <- safe_pf(Fs[nas], dfs[nas], rdf, lower.tail = FALSE)
        aod[, c("F value", "Pr(>F)")] <- list(Fs, P)
    }
    head <- c("Single term deletions", "\nModel:", deparse(formula(object)), 
        if (scale > 0) paste("\nscale: ", format(scale), "\n"))
    class(aod) <- c("anova", "data.frame")
    attr(aod, "heading") <- head
    aod
}
