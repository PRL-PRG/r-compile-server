#? stdlib
`print.summarize_CRAN_check_status` <- function (x, ...) 
{
    writeLines(paste(format(x, ...), collapse = "\n\n"))
    invisible(x)
}
