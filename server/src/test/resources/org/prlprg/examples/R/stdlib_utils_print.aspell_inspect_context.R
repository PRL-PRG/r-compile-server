#? stdlib
`print.aspell_inspect_context` <- function (x, ..., byfile = FALSE) 
{
    writeLines(format(x, ..., byfile = byfile))
    invisible(x)
}
