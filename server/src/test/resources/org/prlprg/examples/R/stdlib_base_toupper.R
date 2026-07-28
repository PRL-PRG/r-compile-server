#? stdlib
`toupper` <- function (x) 
{
    if (!is.character(x)) 
        x <- as.character(x)
    .Internal(toupper(x))
}
