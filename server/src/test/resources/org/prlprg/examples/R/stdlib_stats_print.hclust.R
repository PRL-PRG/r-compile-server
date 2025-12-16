#? stdlib
`print.hclust` <- function (x, ...) 
{
    if (!is.null(x$call)) 
        cat("\nCall:\n", deparse(x$call), "\n\n", sep = "")
    if (!is.null(x$method)) 
        cat("Cluster method   :", x$method, "\n")
    if (!is.null(x$dist.method)) 
        cat("Distance         :", x$dist.method, "\n")
    cat("Number of objects:", length(x$height) + 1, "\n")
    cat("\n")
    invisible(x)
}
