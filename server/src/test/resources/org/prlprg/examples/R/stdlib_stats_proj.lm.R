#? stdlib
`proj.lm` <- function (object, onedf = FALSE, unweighted.scale = FALSE, ...) 
{
    if (inherits(object, "mlm")) 
        stop("'proj' is not implemented for multiple responses")
    rank <- object$rank
    if (rank > 0) {
        prj <- proj.default(object, onedf = TRUE)[, 1L:rank, 
            drop = FALSE]
        if (onedf) {
            df <- rep.int(1, rank)
            result <- prj
        }
        else {
            asgn <- object$assign[object$qr$pivot[1L:object$rank]]
            uasgn <- unique(asgn)
            nmeffect <- c("(Intercept)", attr(object$terms, "term.labels"))[1 + 
                uasgn]
            nterms <- length(uasgn)
            df <- vector("numeric", nterms)
            result <- matrix(0, length(object$residuals), nterms)
            dimnames(result) <- list(rownames(object$fitted.values), 
                nmeffect)
            for (i in seq_along(uasgn)) {
                select <- (asgn == uasgn[i])
                df[i] <- sum(select)
                result[, i] <- prj[, select, drop = FALSE] %*% 
                  rep.int(1, df[i])
            }
        }
    }
    else {
        result <- NULL
        df <- NULL
    }
    if (!is.null(wt <- object$weights) && unweighted.scale) 
        result <- result/sqrt(wt)
    use.wt <- !is.null(wt) && !unweighted.scale
    if (object$df.residual > 0) {
        res <- if (use.wt) 
            object$residuals * sqrt(wt)
        else object$residuals
        if (!is.matrix(result)) {
            result <- matrix(res, length(res), 1L, dimnames = list(names(res), 
                "Residuals"))
        }
        else {
            dn <- dimnames(result)
            d <- dim(result)
            result <- setNames(c(result, res), NULL)
            dim(result) <- d + c(0, 1)
            dimnames(result) <- list(names(res), c(dn[[2L]], 
                "Residuals"))
        }
        df <- c(df, object$df.residual)
    }
    names(df) <- colnames(result)
    attr(result, "df") <- df
    attr(result, "formula") <- object$call$formula
    attr(result, "onedf") <- onedf
    if (!is.null(wt)) 
        attr(result, "unweighted.scale") <- unweighted.scale
    result
}
