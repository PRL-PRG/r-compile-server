#? stdlib
`checkHT` <- function (n, d) 
{
    len <- length(n)
    msg <- if (len == 0 || all(is.na(n))) 
        gettext("invalid 'n' - must contain at least one non-missing element, got none.")
    else if (!(is.numeric(n) || is.logical(n))) 
        gettext("invalid 'n' - must be numeric, possibly NA.")
    else if (is.null(d) && len > 1L) 
        gettextf("invalid 'n' - must have length one when dim(x) is NULL, got %d", 
            len)
    else if (!is.null(d) && len > length(d)) 
        gettextf("invalid 'n' - length(n) must be <= length(dim(x)), got %d > %d", 
            len, length(d))
    else return(invisible())
    stop(simpleError(msg, call = sys.call(-1L)))
}
