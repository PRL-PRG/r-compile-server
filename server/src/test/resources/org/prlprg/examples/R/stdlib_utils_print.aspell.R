#? stdlib
`print.aspell` <- function (x, ...) 
{
    if (nrow(x)) 
        writeLines(paste(format(x, ...), collapse = "\n\n"))
    invisible(x)
}
