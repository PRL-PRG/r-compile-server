#? stdlib
`-.POSIXt` <- function (e1, e2) 
{
    coerceTimeUnit <- function(x) as.vector(switch(attr(x, "units"), 
        secs = x, mins = 60 * x, hours = 60 * 60 * x, days = 60 * 
            60 * 24 * x, weeks = 60 * 60 * 24 * 7 * x))
    if (!inherits(e1, "POSIXt")) 
        stop("can only subtract from \"POSIXt\" objects")
    if (nargs() == 1L) 
        stop("unary '-' is not defined for \"POSIXt\" objects")
    if (inherits(e2, "POSIXt")) 
        return(difftime(e1, e2))
    if (inherits(e2, "difftime")) 
        e2 <- coerceTimeUnit(e2)
    if (!is.null(attr(e2, "class"))) 
        stop("can only subtract numbers from \"POSIXt\" objects")
    e1 <- as.POSIXct(e1)
    .POSIXct(unclass(e1) - e2, attr(e1, "tzone"))
}
