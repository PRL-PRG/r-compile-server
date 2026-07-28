#? stdlib
`[<-.Date` <- function (x, ..., value) 
{
    if (!length(value)) 
        return(x)
    value <- unclass(as.Date(value))
    .Date(NextMethod(.Generic), oldClass(x))
}
