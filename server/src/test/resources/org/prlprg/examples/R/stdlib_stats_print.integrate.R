#? stdlib
`print.integrate` <- function (x, digits = getOption("digits"), ...) 
{
    if (x$message == "OK") 
        cat(format(x$value, digits = digits), " with absolute error < ", 
            format(x$abs.error, digits = 2L), "\n", sep = "")
    else cat("failed with message ", sQuote(x$message), "\n", 
        sep = "")
    invisible(x)
}
