#? stdlib
`print.octmode` <- function (x, ...) 
{
    if (length(x)) 
        print(format(x), ...)
    else cat("<0-length octmode>\n")
    invisible(x)
}
