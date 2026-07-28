#? stdlib
`elNamed` <- function (x, name, mustFind = FALSE) 
{
    i <- match(name, names(x))
    if (is.na(i)) {
        if (mustFind) 
            stop(gettextf("%s is not one of the element names", 
                sQuote(name)), domain = NA)
        else NULL
    }
    else x[[i]]
}
