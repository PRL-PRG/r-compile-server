#? stdlib
`drop1.default` <- function (object, scope, scale = 0, test = c("none", "Chisq"), 
    k = 2, trace = FALSE, ...) 
{
    tl <- attr(terms(object), "term.labels")
    if (missing(scope)) 
        scope <- drop.scope(object)
    else {
        if (!is.character(scope)) 
            scope <- attr(terms(update.formula(object, scope)), 
                "term.labels")
        if (!all(match(scope, tl, 0L) > 0L)) 
            stop("scope is not a subset of term labels")
    }
    ns <- length(scope)
    ans <- matrix(nrow = ns + 1L, ncol = 2L, dimnames = list(c("<none>", 
        scope), c("df", "AIC")))
    ans[1, ] <- extractAIC(object, scale, k = k, ...)
    n0 <- nobs(object, use.fallback = TRUE)
    env <- environment(formula(object))
    for (i in seq_len(ns)) {
        tt <- scope[i]
        if (trace > 1) {
            cat("trying -", tt, "\n", sep = "")
            flush.console()
        }
        nfit <- update(object, as.formula(paste("~ . -", tt)), 
            evaluate = FALSE)
        nfit <- eval(nfit, envir = env)
        ans[i + 1L, ] <- extractAIC(nfit, scale, k = k, ...)
        nnew <- nobs(nfit, use.fallback = TRUE)
        if (all(is.finite(c(n0, nnew))) && nnew != n0) 
            stop("number of rows in use has changed: remove missing values?")
    }
    dfs <- ans[1L, 1L] - ans[, 1L]
    dfs[1L] <- NA
    aod <- data.frame(Df = dfs, AIC = ans[, 2])
    test <- match.arg(test)
    if (test == "Chisq") {
        dev <- ans[, 2L] - k * ans[, 1L]
        dev <- dev - dev[1L]
        dev[1L] <- NA
        nas <- !is.na(dev)
        P <- dev
        P[nas] <- safe_pchisq(dev[nas], dfs[nas], lower.tail = FALSE)
        aod[, c("LRT", "Pr(>Chi)")] <- list(dev, P)
    }
    head <- c("Single term deletions", "\nModel:", deparse(formula(object)), 
        if (scale > 0) paste("\nscale: ", format(scale), "\n"))
    class(aod) <- c("anova", "data.frame")
    attr(aod, "heading") <- head
    aod
}
