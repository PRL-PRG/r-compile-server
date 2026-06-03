#? stdlib
`summary.stl` <- function (object, digits = getOption("digits"), ...) 
{
    cat(" Call:\n ")
    dput(object$call, control = NULL)
    cat("\n Time.series components:\n")
    print(summary(object$time.series, digits = digits, ...))
    cat(" IQR:\n")
    iqr <- apply(cbind(STL = object$time.series, data = object$time.series %*% 
        rep(1, 3)), 2L, IQR)
    print(rbind(format(iqr, digits = max(2L, digits - 3L)), `   %` = format(round(100 * 
        iqr/iqr["data"], 1))), quote = FALSE)
    cat("\n Weights:")
    if (all(object$weights == 1)) 
        cat(" all == 1\n")
    else {
        cat("\n")
        print(summary(object$weights, digits = digits, ...))
    }
    cat("\n Other components: ")
    str(object[-(1L:3)], give.attr = FALSE)
    invisible(object)
}
