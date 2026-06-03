#? stdlib
`.bibentry_get_key` <- function (x) 
{
    if (!length(x)) 
        return(character())
    keys <- lapply(unclass(x), attr, "key")
    keys[!lengths(keys)] <- ""
    unlist(keys)
}
