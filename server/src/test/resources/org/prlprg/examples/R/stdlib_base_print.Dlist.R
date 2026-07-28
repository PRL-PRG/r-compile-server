#? stdlib
`print.Dlist` <- function (x, ...) 
{
    if (!is.list(x) && !is.matrix(x) && is.null(names(x))) 
        return(NextMethod())
    cat(formatDL(x, ...), sep = "\n")
    invisible(x)
}
