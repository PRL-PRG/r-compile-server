#? stdlib
`print.HoltWinters` <- function (x, ...) 
{
    cat("Holt-Winters exponential smoothing", if (is.logical(x$beta) && 
        !x$beta) 
        "without"
    else "with", "trend and", if (is.logical(x$gamma) && !x$gamma) 
        "without"
    else paste0(if (is.logical(x$beta) && !x$beta) 
        "with ", x$seasonal), "seasonal component.")
    cat("\n\nCall:\n", deparse(x$call), "\n\n", sep = "")
    cat("Smoothing parameters:\n")
    cat(" alpha: ", x$alpha, "\n", sep = "")
    cat(" beta : ", x$beta, "\n", sep = "")
    cat(" gamma: ", x$gamma, "\n\n", sep = "")
    cat("Coefficients:\n")
    print(t(t(x$coefficients)))
    invisible(x)
}
