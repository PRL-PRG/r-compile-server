#? stdlib
`print.summary.prcomp` <- function (x, digits = max(3L, getOption("digits") - 3L), ...) 
{
    dr <- dim(x$rotation)
    k <- dr[2]
    p <- length(x$sdev)
    if (k < p) {
        cat(sprintf("Importance of first k=%d (out of %d) components:\n", 
            k, p))
        print(x$importance[, 1:k, drop = FALSE], digits = digits, 
            ...)
    }
    else {
        cat("Importance of components:\n")
        print(x$importance, digits = digits, ...)
    }
    invisible(x)
}
