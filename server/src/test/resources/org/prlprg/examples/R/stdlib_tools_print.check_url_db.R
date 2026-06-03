#? stdlib
`print.check_url_db` <- function (x, ...) 
{
    if (NROW(x)) 
        writeLines(paste(format(x), collapse = "\n\n"))
    invisible(x)
}
