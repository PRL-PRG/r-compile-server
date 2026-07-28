#? stdlib
`print.check_pragmas` <- function (x, ...) 
{
    if (length(x)) {
        if (length(x) == 1L) 
            writeLines("File which contain pragma(s) suppressing diagnostics:")
        else writeLines("Files which contain pragma(s) suppressing diagnostics:")
        .pretty_print(x)
    }
    x
}
