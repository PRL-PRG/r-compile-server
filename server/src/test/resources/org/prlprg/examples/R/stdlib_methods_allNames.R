#? stdlib
`allNames` <- function (x) 
{
    value <- names(x)
    if (is.null(value)) 
        character(length(x))
    else value
}
