#? stdlib
`print.family` <- function (x, ...) 
{
    cat("\nFamily:", x$family, "\n")
    cat("Link function:", x$link, "\n\n")
    invisible(x)
}
