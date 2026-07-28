#? stdlib
`-.Date` <- function (e1, e2) 
{
    coerceTimeUnit <- function(x) as.vector(round(switch(attr(x, 
        "units"), secs = x/86400, mins = x/1440, hours = x/24, 
        days = x, weeks = 7 * x)))
    if (!inherits(e1, "Date")) 
        stop("can only subtract from \"Date\" objects")
    if (nargs() == 1L) 
        stop("unary - is not defined for \"Date\" objects")
    if (inherits(e2, "Date")) 
        return(difftime(e1, e2, units = "days"))
    if (inherits(e2, "difftime")) 
        e2 <- coerceTimeUnit(e2)
    if (!is.null(attr(e2, "class"))) 
        stop("can only subtract numbers from \"Date\" objects")
    .Date(unclass(as.Date(e1)) - e2)
}
