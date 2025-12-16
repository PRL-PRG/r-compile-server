#? stdlib
`units<-.difftime` <- function (x, value) 
{
    from <- units(x)
    if (from == value) 
        return(x)
    if (!(value %in% c("secs", "mins", "hours", "days", "weeks"))) 
        stop("invalid units specified")
    sc <- cumprod(c(secs = 1, mins = 60, hours = 60, days = 24, 
        weeks = 7))
    newx <- unclass(x) * as.vector(sc[from]/sc[value])
    .difftime(newx, value)
}
