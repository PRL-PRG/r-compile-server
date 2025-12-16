#? stdlib
`format.checkReplaceFuns` <- function (x, ...) 
{
    if (length(x)) 
        .pretty_format(unclass(x))
    else character()
}
