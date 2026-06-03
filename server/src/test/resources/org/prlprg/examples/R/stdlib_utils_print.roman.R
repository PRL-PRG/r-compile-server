#? stdlib
`print.roman` <- function (x, quote = FALSE, ...) 
{
    if (length(x)) 
        print(as.character.roman(x), quote = quote, ...)
    else cat("<0-length roman>\n")
    invisible(x)
}
