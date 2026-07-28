#? stdlib
`print.formula` <- function (x, showEnv = !identical(e, .GlobalEnv), ...) 
{
    e <- environment(.x <- x)
    attr(x, ".Environment") <- NULL
    print.default(unclass(x), ...)
    if (showEnv) 
        print(e)
    invisible(.x)
}
