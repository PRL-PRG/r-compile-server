#? stdlib
`print.person` <- function (x, ...) 
{
    if (length(x)) 
        print(format(x, ...))
    else cat("person()\n")
    invisible(x)
}
