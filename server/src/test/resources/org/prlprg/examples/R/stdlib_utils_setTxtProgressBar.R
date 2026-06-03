#? stdlib
`setTxtProgressBar` <- function (pb, value, title = NULL, label = NULL) 
{
    if (!inherits(pb, "txtProgressBar")) 
        stop(gettextf("'pb' is not from class %s", dQuote("txtProgressBar")), 
            domain = NA)
    oldval <- pb$getVal()
    pb$up(value)
    invisible(oldval)
}
