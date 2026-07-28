#? stdlib
`print.CRAN_package_reverse_dependencies_and_views` <- function (x, ...) 
{
    writeLines(paste(format(x, ...), collapse = "\n\n"))
    invisible(x)
}
