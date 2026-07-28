#? stdlib
`print.loadings` <- function (x, digits = 3L, cutoff = 0.1, sort = FALSE, ...) 
{
    Lambda <- unclass(x)
    p <- nrow(Lambda)
    factors <- ncol(Lambda)
    if (sort) {
        mx <- max.col(abs(Lambda))
        ind <- cbind(1L:p, mx)
        mx[abs(Lambda[ind]) < 0.5] <- factors + 1
        Lambda <- Lambda[order(mx, 1L:p), , drop = FALSE]
    }
    cat("\nLoadings:\n")
    fx <- setNames(format(round(Lambda, digits)), NULL)
    nc <- nchar(fx[1L], type = "c")
    fx[abs(Lambda) < cutoff] <- strrep(" ", nc)
    print(fx, quote = FALSE, ...)
    vx <- colSums(x^2)
    varex <- rbind(`SS loadings` = vx)
    if (is.null(attr(x, "covariance"))) {
        varex <- rbind(varex, `Proportion Var` = vx/p)
        if (factors > 1) 
            varex <- rbind(varex, `Cumulative Var` = cumsum(vx/p))
    }
    cat("\n")
    print(round(varex, digits))
    invisible(x)
}
