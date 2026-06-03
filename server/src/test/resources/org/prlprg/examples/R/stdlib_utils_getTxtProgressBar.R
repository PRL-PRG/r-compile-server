#? stdlib
`getTxtProgressBar` <- function (pb) 
{
    if (!inherits(pb, "txtProgressBar")) 
        stop(gettextf("'pb' is not from class %s", dQuote("txtProgressBar")), 
            domain = NA)
    pb$getVal()
}
