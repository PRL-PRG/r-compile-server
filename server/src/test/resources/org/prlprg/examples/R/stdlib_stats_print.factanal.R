#? stdlib
`print.factanal` <- function (x, digits = 3, ...) 
{
    cat("\nCall:\n", deparse(x$call), "\n\n", sep = "")
    cat("Uniquenesses:\n")
    print(round(x$uniquenesses, digits), ...)
    print(x$loadings, digits = digits, ...)
    if (!is.null(x$rotmat)) {
        tmat <- solve(x$rotmat)
        R <- tmat %*% t(tmat)
        factors <- x$factors
        rownames(R) <- colnames(R) <- paste0("Factor", 1:factors)
        if (!isTRUE(all.equal(c(R), c(diag(factors))))) {
            cat("\nFactor Correlations:\n")
            print(R, digits = digits, ...)
        }
    }
    if (!is.null(x$STATISTIC)) {
        factors <- x$factors
        cat("\nTest of the hypothesis that", factors, if (factors == 
            1) 
            "factor is"
        else "factors are", "sufficient.\n")
        cat("The chi square statistic is", round(x$STATISTIC, 
            2), "on", x$dof, if (x$dof == 1) 
            "degree"
        else "degrees", "of freedom.\nThe p-value is", signif(x$PVAL, 
            3), "\n")
    }
    else {
        cat(paste("\nThe degrees of freedom for the model is", 
            x$dof, "and the fit was", round(x$criteria["objective"], 
                4), "\n"))
    }
    invisible(x)
}
