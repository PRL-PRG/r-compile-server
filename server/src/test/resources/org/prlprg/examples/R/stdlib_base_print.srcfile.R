#? stdlib
`print.srcfile` <- function (x, ...) 
{
    cat(x$filename, "\n")
    invisible(x)
}
