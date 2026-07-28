#? stdlib
`[<-.POSIXct` <- function (x, ..., value) 
{
    if (!length(value)) 
        return(x)
    value <- unclass(as.POSIXct(value))
    .POSIXct(NextMethod(.Generic), attr(x, "tzone"), oldClass(x))
}
