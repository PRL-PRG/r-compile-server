#? stdlib
`.is_ASCII` <- function (x) 
{
    vapply(as.character(x), function(txt) all(charToRaw(txt) <= 
        as.raw(127)), NA)
}
