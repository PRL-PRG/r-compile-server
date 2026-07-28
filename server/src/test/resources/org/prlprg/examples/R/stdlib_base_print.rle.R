#? stdlib
`print.rle` <- function (x, digits = getOption("digits"), prefix = "", ...) 
{
    if (is.null(digits)) 
        digits <- getOption("digits")
    cat("", "Run Length Encoding\n", "  lengths:", sep = prefix)
    utils::str(x$lengths)
    cat("", "  values :", sep = prefix)
    utils::str(x$values, digits.d = digits)
    invisible(x)
}
