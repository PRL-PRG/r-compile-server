#? stdlib
`+.POSIXt` <- function (e1, e2) 
{
    coerceTimeUnit <- function(x) as.vector(switch(attr(x, "units"), 
        secs = x, mins = 60 * x, hours = 60 * 60 * x, days = 60 * 
            60 * 24 * x, weeks = 60 * 60 * 24 * 7 * x))
    if (nargs() == 1L) 
        return(e1)
    if (inherits(e1, "POSIXt") && inherits(e2, "POSIXt")) 
        stop("binary '+' is not defined for \"POSIXt\" objects")
    if (inherits(e1, "POSIXlt")) 
        e1 <- as.POSIXct(e1)
    if (inherits(e2, "POSIXlt")) 
        e2 <- as.POSIXct(e2)
    if (inherits(e1, "difftime")) 
        e1 <- coerceTimeUnit(e1)
    if (inherits(e2, "difftime")) 
        e2 <- coerceTimeUnit(e2)
    .POSIXct(unclass(e1) + unclass(e2), .check_tzones(e1, e2))
}
