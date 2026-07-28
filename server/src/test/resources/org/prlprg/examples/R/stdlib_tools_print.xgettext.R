#? stdlib
`print.xgettext` <- function (x, ...) 
{
    cat(encodeString(x), sep = "\n")
    invisible(x)
}
