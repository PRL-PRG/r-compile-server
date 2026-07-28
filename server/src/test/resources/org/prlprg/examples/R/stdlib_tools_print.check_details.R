#? stdlib
`print.check_details` <- function (x, ...) 
{
    writeLines(paste(format(x, ...), collapse = "\n\n"))
    invisible(x)
}
