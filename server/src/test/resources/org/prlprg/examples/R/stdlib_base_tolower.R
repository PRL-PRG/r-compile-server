#? stdlib
`tolower` <- function (x) 
{
    if (!is.character(x)) 
        x <- as.character(x)
    .Internal(tolower(x))
}
