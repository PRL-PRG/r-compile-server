#? stdlib
`getSrcDirectory` <- function (x, unique = TRUE) 
{
    result <- dirname(getSrcFilename(x, full.names = TRUE, unique = unique))
    if (unique) 
        unique(result)
    else result
}
