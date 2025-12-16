#? stdlib
`print.object_size` <- function (x, quote = FALSE, units = "b", standard = "auto", digits = 1L, 
    ...) 
{
    y <- format.object_size(x, units = units, standard = standard, 
        digits = digits)
    if (quote) 
        print.default(y, ...)
    else cat(y, "\n", sep = "")
    invisible(x)
}
