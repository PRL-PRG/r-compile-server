#? stdlib
`as.Date.default` <- function (x, ...) 
{
    if (inherits(x, "Date")) 
        x
    else if (is.null(x)) 
        .Date(numeric())
    else if (is.logical(x) && all(is.na(x))) 
        .Date(as.numeric(x))
    else stop(gettextf("do not know how to convert '%s' to class %s", 
        deparse1(substitute(x)), dQuote("Date")), domain = NA)
}
