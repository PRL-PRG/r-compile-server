#? stdlib
`/.difftime` <- function (e1, e2) 
{
    if (inherits(e2, "difftime")) 
        stop("second argument of / cannot be a \"difftime\" object")
    .difftime(unclass(e1)/e2, attr(e1, "units"))
}
