#? stdlib
`print.stl` <- function (x, ...) 
{
    cat(" Call:\n ")
    dput(x$call, control = NULL)
    cat("\nComponents\n")
    print(x$time.series, ...)
    invisible(x)
}
