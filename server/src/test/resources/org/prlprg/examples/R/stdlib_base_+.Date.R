#? stdlib
`+.Date` <- function (e1, e2) 
{
    coerceTimeUnit <- function(x) as.vector(round(switch(attr(x, 
        "units"), secs = x/86400, mins = x/1440, hours = x/24, 
        days = x, weeks = 7 * x)))
    if (nargs() == 1L) 
        return(e1)
    if (inherits(e1, "Date") && inherits(e2, "Date")) 
        stop("binary + is not defined for \"Date\" objects")
    if (inherits(e1, "difftime")) 
        e1 <- coerceTimeUnit(e1)
    if (inherits(e2, "difftime")) 
        e2 <- coerceTimeUnit(e2)
    .Date(unclass(e1) + unclass(e2))
}
