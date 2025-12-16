#? stdlib
`.pretty_format2` <- function (msg, x, collapse = ", ", useFancyQuotes = FALSE) 
{
    xx <- strwrap(paste(sQuote(x, q = useFancyQuotes), collapse = collapse), 
        exdent = 2L)
    if (length(xx) > 1L || nchar(msg) + nchar(xx) + 1L > 75L) 
        c(msg, .pretty_format(x, collapse = collapse, q = useFancyQuotes))
    else paste(msg, xx)
}
