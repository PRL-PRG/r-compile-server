#? stdlib
`print.Latex` <- function (x, prefix = "", ...) 
{
    writeLines(paste0(prefix, unclass(x)), ...)
    invisible(x)
}
