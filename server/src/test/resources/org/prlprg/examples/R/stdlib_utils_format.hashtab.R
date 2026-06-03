#? stdlib
`format.hashtab` <- function (x, ...) 
{
    addr <- sub("<.*: (.*)>", "\\1", format(unclass(x)[[1]]))
    num <- numhash(x)
    type <- typhash(x)
    sprintf("<hashtable %s: count = %d, type = \"%s\">", addr, 
        num, type)
}
