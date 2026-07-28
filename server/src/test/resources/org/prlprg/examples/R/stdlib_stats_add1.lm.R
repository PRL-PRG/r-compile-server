#? stdlib
`add1.lm` <- function (object, scope, scale = 0, test = c("none", "Chisq", 
    "F"), x = NULL, k = 2, ...) 
{
    Fstat <- function(table, RSS, rdf) {
        dev <- table$"Sum of Sq"
        df <- table$Df
        rms <- (RSS - dev)/(rdf - df)
        Fs <- (dev/df)/rms
        Fs[df < .Machine$double.eps] <- NA
        P <- Fs
        nnas <- !is.na(Fs)
        P[nnas] <- safe_pf(Fs[nnas], df[nnas], rdf - df[nnas], 
            lower.tail = FALSE)
        list(Fs = Fs, P = P)
    }
    check_exact(object)
    if (missing(scope) || is.null(scope)) 
        stop("no terms in scope")
    if (!is.character(scope)) 
        scope <- add.scope(object, update.formula(object, scope))
    if (!length(scope)) 
        stop("no terms in scope for adding to object")
    oTerms <- attr(object$terms, "term.labels")
    int <- attr(object$terms, "intercept")
    y <- object$residuals + object$fitted.values
    ns <- length(scope)
    dfs <- numeric(ns + 1L)
    names(dfs) <- c("<none>", scope)
    RSS <- dfs
    add.rhs <- eval(str2lang(paste("~ . +", paste(scope, collapse = "+"))))
    new.form <- update.formula(object, add.rhs)
    Terms <- terms(new.form)
    if (is.null(x)) {
        fc <- object$call
        fc$formula <- Terms
        fob <- list(call = fc, terms = Terms)
        class(fob) <- oldClass(object)
        m <- model.frame(fob, xlev = object$xlevels)
        x <- model.matrix(Terms, m, contrasts.arg = object$contrasts)
        offset <- model.offset(m)
        wt <- model.weights(m)
        oldn <- length(y)
        y <- model.response(m, "numeric")
        newn <- length(y)
        if (newn < oldn) 
            warning(sprintf(ngettext(newn, "using the %d/%d row from a combined fit", 
                "using the %d/%d rows from a combined fit"), 
                newn, oldn), domain = NA)
    }
    else {
        wt <- object$weights
        offset <- object$offset
    }
    n <- nrow(x)
    Terms <- attr(Terms, "term.labels")
    asgn <- attr(x, "assign")
    ousex <- match(asgn, match(oTerms, Terms), 0L) > 0L
    if (int) 
        ousex[1L] <- TRUE
    iswt <- !is.null(wt)
    X <- x[, ousex, drop = FALSE]
    z <- if (iswt) 
        lm.wfit(X, y, wt, offset = offset)
    else lm.fit(X, y, offset = offset)
    dfs[1L] <- z$rank
    class(z) <- "lm"
    RSS[1L] <- deviance(z)
    sTerms <- sapply(strsplit(Terms, ":", fixed = TRUE), function(x) paste(sort(x), 
        collapse = ":"))
    for (tt in scope) {
        stt <- paste(sort(strsplit(tt, ":")[[1L]]), collapse = ":")
        usex <- match(asgn, match(stt, sTerms), 0L) > 0L
        X <- x[, usex | ousex, drop = FALSE]
        z <- if (iswt) 
            lm.wfit(X, y, wt, offset = offset)
        else lm.fit(X, y, offset = offset)
        class(z) <- "lm"
        dfs[tt] <- z$rank
        RSS[tt] <- deviance(z)
    }
    if (scale > 0) 
        aic <- RSS/scale - n + k * dfs
    else aic <- n * log(RSS/n) + k * dfs
    dfs <- dfs - dfs[1L]
    dfs[1L] <- NA
    aod <- data.frame(Df = dfs, `Sum of Sq` = c(NA, RSS[1L] - 
        RSS[-1L]), RSS = RSS, AIC = aic, row.names = names(dfs), 
        check.names = FALSE)
    if (scale > 0) 
        names(aod) <- c("Df", "Sum of Sq", "RSS", "Cp")
    test <- match.arg(test)
    if (test == "Chisq") {
        dev <- aod$"Sum of Sq"
        if (scale == 0) {
            dev <- n * log(RSS/n)
            dev <- dev[1L] - dev
            dev[1L] <- NA
        }
        else dev <- dev/scale
        df <- aod$Df
        nas <- !is.na(df)
        dev[nas] <- safe_pchisq(dev[nas], df[nas], lower.tail = FALSE)
        aod[, "Pr(>Chi)"] <- dev
    }
    else if (test == "F") {
        rdf <- object$df.residual
        aod[, c("F value", "Pr(>F)")] <- Fstat(aod, aod$RSS[1L], 
            rdf)
    }
    head <- c("Single term additions", "\nModel:", deparse(formula(object)), 
        if (scale > 0) paste("\nscale: ", format(scale), "\n"))
    class(aod) <- c("anova", "data.frame")
    attr(aod, "heading") <- head
    aod
}
