#? stdlib
`print.hashtab` <- function (x, ...) 
{
    cat(format(x), "\n", sep = "")
    invisible(x)
}
