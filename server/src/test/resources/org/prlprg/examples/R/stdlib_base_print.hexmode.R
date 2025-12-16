#? stdlib
`print.hexmode` <- function (x, ...) 
{
    if (length(x)) 
        print(format(x), ...)
    else cat("<0-length hexmode>\n")
    invisible(x)
}
