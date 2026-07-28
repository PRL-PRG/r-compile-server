#? stdlib
`print.summary.princomp` <- function (x, digits = 3L, loadings = x$print.loadings, cutoff = x$cutoff, 
    ...) 
{
    vars <- x$sdev^2
    vars <- vars/sum(vars)
    cat("Importance of components:\n")
    print(rbind(`Standard deviation` = x$sdev, `Proportion of Variance` = vars, 
        `Cumulative Proportion` = cumsum(vars)))
    if (loadings) {
        cat("\nLoadings:\n")
        cx <- format(round(x$loadings, digits = digits))
        cx[abs(x$loadings) < cutoff] <- strrep(" ", nchar(cx[1, 
            1], type = "w"))
        print(cx, quote = FALSE, ...)
    }
    invisible(x)
}
