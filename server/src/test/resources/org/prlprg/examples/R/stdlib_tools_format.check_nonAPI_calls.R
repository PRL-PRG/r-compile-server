#? stdlib
`format.check_nonAPI_calls` <- function (x, ...) 
{
    if (length(x)) 
        c(gettextf("File %s:", sQuote(attr(x, "file"))), if (length(x) > 
            1L) {
            strwrap(paste("Found non-API calls to R:", paste(sQuote(x), 
                collapse = ", ")), indent = 2L, exdent = 4L)
        } else paste("  Found non-API call to R:", sQuote(x)))
    else character()
}
