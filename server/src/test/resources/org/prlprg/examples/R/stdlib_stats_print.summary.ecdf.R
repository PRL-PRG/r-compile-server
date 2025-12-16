#? stdlib
`print.summary.ecdf` <- function (x, ...) 
{
    cat(attr(x, "header"))
    y <- x
    attr(y, "header") <- NULL
    class(y) <- "summaryDefault"
    print(y, ...)
    invisible(x)
}
