#? stdlib
`add1.default` <- function (object, scope, scale = 0, test = c("none", "Chisq"), 
    k = 2, trace = FALSE, ...) 
{
    if (missing(scope) || is.null(scope)) 
        stop("no terms in scope")
    if (!is.character(scope)) 
        scope <- add.scope(object, update.formula(object, scope))
    if (!length(scope)) 
        stop("no terms in scope for adding to object")
    ns <- length(scope)
    ans <- matrix(nrow = ns + 1L, ncol = 2L, dimnames = list(c("<none>", 
        scope), c("df", "AIC")))
    ans[1L, ] <- extractAIC(object, scale, k = k, ...)
    n0 <- nobs(object, use.fallback = TRUE)
    env <- environment(formula(object))
    for (i in seq_len(ns)) {
        tt <- scope[i]
        if (trace > 1) {
            cat("trying +", tt, "\n", sep = "")
            flush.console()
        }
        nfit <- update(object, as.formula(paste("~ . +", tt)), 
            evaluate = FALSE)
        nfit <- eval(nfit, envir = env)
        ans[i + 1L, ] <- extractAIC(nfit, scale, k = k, ...)
        nnew <- nobs(nfit, use.fallback = TRUE)
        if (all(is.finite(c(n0, nnew))) && nnew != n0) 
            stop("number of rows in use has changed: remove missing values?")
    }
    dfs <- ans[, 1L] - ans[1L, 1L]
    dfs[1L] <- NA
    aod <- data.frame(Df = dfs, AIC = ans[, 2L])
    test <- match.arg(test)
    if (test == "Chisq") {
        dev <- ans[, 2L] - k * ans[, 1L]
        dev <- dev[1L] - dev
        dev[1L] <- NA
        nas <- !is.na(dev)
        P <- dev
        P[nas] <- safe_pchisq(dev[nas], dfs[nas], lower.tail = FALSE)
        aod[, c("LRT", "Pr(>Chi)")] <- list(dev, P)
    }
    head <- c("Single term additions", "\nModel:", deparse(formula(object)), 
        if (scale > 0) paste("\nscale: ", format(scale), "\n"))
    class(aod) <- c("anova", "data.frame")
    attr(aod, "heading") <- head
    aod
}
