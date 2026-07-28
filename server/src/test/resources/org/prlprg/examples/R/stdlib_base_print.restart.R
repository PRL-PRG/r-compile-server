#? stdlib
`print.restart` <- function (x, ...) 
{
    cat(paste("<restart:", x[[1L]], ">\n"))
    invisible(x)
}
