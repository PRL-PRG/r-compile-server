#? stdlib
`print.Bibtex` <- function (x, prefix = "", ...) 
{
    writeLines(paste0(prefix, unclass(x)), ...)
    invisible(x)
}
