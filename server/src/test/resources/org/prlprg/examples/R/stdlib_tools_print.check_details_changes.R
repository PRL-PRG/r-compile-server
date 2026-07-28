#? stdlib
`print.check_details_changes` <- function (x, ...) 
{
    if (length(y <- format(x))) 
        writeLines(paste(y, collapse = "\n\n"))
    invisible(x)
}
