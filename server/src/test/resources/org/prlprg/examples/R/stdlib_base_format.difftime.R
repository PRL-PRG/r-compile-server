#? stdlib
`format.difftime` <- function (x, ...) 
{
    if (length(x)) 
        paste(format(unclass(x), ...), units(x))
    else character()
}
