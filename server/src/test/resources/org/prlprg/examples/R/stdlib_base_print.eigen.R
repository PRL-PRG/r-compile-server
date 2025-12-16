#? stdlib
`print.eigen` <- function (x, ...) 
{
    cat("eigen() decomposition\n")
    print(unclass(x), ...)
    invisible(x)
}
