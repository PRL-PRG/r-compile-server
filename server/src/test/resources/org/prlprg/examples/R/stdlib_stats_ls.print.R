#? stdlib
`ls.print` <- function (ls.out, digits = 4L, print.it = TRUE) 
{
    resids <- as.matrix(ls.out$residuals)
    if (!is.null(ls.out$wt)) {
        if (any(ls.out$wt == 0)) 
            warning("observations with 0 weights not used")
        resids <- resids * sqrt(ls.out$wt)
    }
    n <- apply(resids, 2L, length) - colSums(is.na(resids))
    lsqr <- ls.out$qr
    p <- lsqr$rank
    if (ls.out$intercept) {
        if (is.matrix(lsqr$qt)) 
            totss <- colSums(lsqr$qt[-1L, ]^2)
        else totss <- sum(lsqr$qt[-1L]^2)
        degfree <- p - 1
    }
    else {
        totss <- colSums(as.matrix(lsqr$qt^2))
        degfree <- p
    }
    resss <- colSums(resids^2, na.rm = TRUE)
    resse <- sqrt(resss/(n - p))
    regss <- totss - resss
    rsquared <- regss/totss
    fstat <- (regss/degfree)/(resss/(n - p))
    pvalue <- pf(fstat, degfree, (n - p), lower.tail = FALSE)
    Ynames <- colnames(resids)
    summary <- cbind(format(round(resse, digits)), format(round(rsquared, 
        digits)), format(round(fstat, digits)), format(degfree), 
        format(n - p), format(round(pvalue, digits)))
    dimnames(summary) <- list(Ynames, c("Mean Sum Sq", "R Squared", 
        "F-value", "Df 1", "Df 2", "Pr(>F)"))
    mat <- as.matrix(lsqr$qr[1L:p, 1L:p])
    mat[row(mat) > col(mat)] <- 0
    uVar <- diag(tcrossprod(solve(mat)))
    m.y <- ncol(resids)
    coef.table <- as.list(1L:m.y)
    coef <- if (m.y == 1) 
        matrix(ls.out$coefficients, ncol = 1L)
    else ls.out$coefficients
    for (i in 1L:m.y) {
        se <- sqrt((resss[i]/(n[i] - p)) * uVar)
        coef.table[[i]] <- cbind(coef[, i], se, coef[, i]/se, 
            2 * pt(abs(coef[, i]/se), n[i] - p, lower.tail = FALSE), 
            deparse.level = 0L)
        dimnames(coef.table[[i]]) <- list(colnames(lsqr$qr), 
            c("Estimate", "Std.Err", "t-value", "Pr(>|t|)"))
        if (print.it) {
            if (m.y > 1) 
                cat("Response:", Ynames[i], "\n\n")
            cat(paste0("Residual Standard Error=", format(round(resse[i], 
                digits)), "\nR-Square=", format(round(rsquared[i], 
                digits)), "\nF-statistic (df=", format(degfree), 
                ", ", format(n[i] - p), ")=", format(round(fstat[i], 
                  digits)), "\np-value=", format(round(pvalue[i], 
                  digits)), "\n\n"))
            print(round(coef.table[[i]], digits))
            cat("\n\n")
        }
    }
    names(coef.table) <- Ynames
    invisible(list(summary = summary, coef.table = coef.table))
}
