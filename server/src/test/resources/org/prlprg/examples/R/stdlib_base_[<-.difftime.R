#? stdlib
`[<-.difftime` <- function (x, i, value) 
{
    if (inherits(value, "difftime") && !identical(units(x), units(value))) 
        units(value) <- units(x)
    NextMethod("[<-")
}
