#? stdlib
`print.numeric_version` <- function (x, quote = FALSE, ...) 
{
    y <- as.character(x)
    if (!length(y)) 
        writeLines(gettext("<0 elements>"))
    else print(ifelse(is.na(y), NA_character_, sQuote(y)), quote = quote, 
        ...)
    invisible(x)
}
