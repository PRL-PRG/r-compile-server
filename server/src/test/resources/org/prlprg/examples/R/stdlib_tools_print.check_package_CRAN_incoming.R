#? stdlib
`print.check_package_CRAN_incoming` <- function (x, ...) 
{
    if (length(y <- format(x, ...))) 
        writeLines(paste(y, collapse = "\n\n"))
    invisible(x)
}
