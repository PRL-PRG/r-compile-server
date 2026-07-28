#? stdlib
`format.check_RegSym_calls` <- function (x, ...) 
{
    if (length(x)) 
        c(gettextf("File %s:", sQuote(attr(x, "file"))), if (length(x) > 
            1L) {
            strwrap(paste("Found no calls to:", paste(sQuote(x), 
                collapse = ", ")), indent = 2L, exdent = 4L)
        } else paste("  Found no call to:", sQuote(x)))
    else character()
}
