#? stdlib
`print.aov` <- function (x, intercept = FALSE, tol = sqrt(.Machine$double.eps), 
    ...) 
{
    if (!is.null(cl <- x$call)) {
        cat("Call:\n   ")
        dput(cl, control = NULL)
    }
    qrx <- if (x$rank) 
        qr(x)
    asgn <- x$assign[qrx$pivot[1L:x$rank]]
    effects <- x$effects
    if (!is.null(effects)) 
        effects <- as.matrix(effects)[seq_along(asgn), , drop = FALSE]
    rdf <- x$df.residual
    resid <- as.matrix(x$residuals)
    wt <- x$weights
    if (!is.null(wt)) 
        resid <- resid * sqrt(wt)
    RSS <- colSums(resid^2)
    uasgn <- unique(asgn)
    nmeffect <- c("(Intercept)", attr(x$terms, "term.labels"))[1 + 
        uasgn]
    nterms <- length(uasgn)
    nresp <- NCOL(effects)
    df <- numeric(nterms)
    ss <- matrix(NA, nterms, nresp)
    if (nterms) {
        for (i in seq(nterms)) {
            ai <- asgn == uasgn[i]
            df[i] <- sum(ai)
            ef <- effects[ai, , drop = FALSE]
            ss[i, ] <- if (sum(ai) > 1) 
                colSums(ef^2)
            else ef^2
        }
        keep <- df > 0L
        if (!intercept && uasgn[1L] == 0) 
            keep[1L] <- FALSE
        nmeffect <- nmeffect[keep]
        df <- df[keep]
        ss <- ss[keep, , drop = FALSE]
        nterms <- length(df)
    }
    cat("\nTerms:\n")
    if (nterms == 0L) {
        if (rdf > 0L) {
            ss <- RSS
            ssp <- sapply(ss, format)
            if (!is.matrix(ssp)) 
                ssp <- t(ssp)
            tmp <- as.matrix(c(ssp, format(rdf)))
            if (length(ss) > 1L) {
                rn <- colnames(x$fitted.values)
                if (is.null(rn)) 
                  rn <- paste("resp", seq_along(ss))
            }
            else rn <- "Sum of Squares"
            dimnames(tmp) <- list(c(rn, "Deg. of Freedom"), "Residuals")
            print(tmp, quote = FALSE, right = TRUE)
            cat("\n")
            rs <- sqrt(RSS/rdf)
            cat(if (length(rs) > 1L) 
                "Residual standard errors:"
            else "Residual standard error:", sapply(rs, format))
            cat("\n")
        }
        else print(matrix(0, 2L, 1L, dimnames = list(c("Sum of Squares", 
            "Deg. of Freedom"), "<empty>")))
    }
    else {
        if (rdf > 0L) {
            nterms <- nterms + 1L
            df <- c(df, rdf)
            ss <- rbind(ss, RSS)
            nmeffect <- c(nmeffect, "Residuals")
        }
        ssp <- apply(zapsmall(ss), 2L, format)
        tmp <- t(cbind(ssp, format(df)))
        if (ncol(effects) > 1L) {
            rn <- colnames(x$coefficients)
            if (is.null(rn)) 
                rn <- paste("resp", seq(ncol(effects)))
        }
        else rn <- "Sum of Squares"
        dimnames(tmp) <- list(c(rn, "Deg. of Freedom"), nmeffect)
        print(tmp, quote = FALSE, right = TRUE)
        rank <- x$rank
        cat("\n")
        if (rdf > 0L) {
            rs <- sqrt(RSS/rdf)
            cat(if (length(rs) > 1L) 
                "Residual standard errors:"
            else "Residual standard error:", sapply(rs, format))
            cat("\n")
        }
        coef <- as.matrix(x$coefficients)[, 1L]
        R <- qrx$qr
        R <- R[1L:min(dim(R)), , drop = FALSE]
        R[lower.tri(R)] <- 0
        if (rank < (nc <- length(coef))) {
            cat(paste(nc - rank, "out of", nc, "effects not estimable\n"))
            R <- R[, 1L:rank, drop = FALSE]
        }
        d2 <- sum(abs(diag(R)))
        diag(R) <- 0
        if (sum(abs(R))/d2 > tol) 
            cat("Estimated effects may be unbalanced\n")
        else cat("Estimated effects are balanced\n")
        if (nzchar(mess <- naprint(x$na.action))) 
            cat(mess, "\n", sep = "")
    }
    invisible(x)
}
