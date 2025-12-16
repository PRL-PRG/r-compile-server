#? stdlib
`getSrcLocation` <- function (x, which = c("line", "column", "byte", "parse"), first = TRUE) 
{
    srcref <- getSrcref(x)
    if (is.null(srcref)) 
        return(NULL)
    if (is.list(srcref)) 
        sapply(srcref, getSrcLocation, which, first)
    else {
        if (length(srcref) == 6L) 
            srcref <- c(srcref, srcref[c(1L, 3L)])
        which <- match.arg(which)
        if (first) 
            index <- c(line = 1L, column = 5L, byte = 2L, parse = 7L)[which]
        else index <- c(line = 3L, column = 6L, byte = 4L, parse = 8L)[which]
        srcref[index]
    }
}
