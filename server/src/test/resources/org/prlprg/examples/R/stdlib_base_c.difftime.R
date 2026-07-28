#? stdlib
`c.difftime` <- function (..., recursive = FALSE) 
{
    coerceTimeUnit <- function(x) {
        switch(attr(x, "units"), secs = x, mins = 60 * x, hours = 60 * 
            60 * x, days = 60 * 60 * 24 * x, weeks = 60 * 60 * 
            24 * 7 * x)
    }
    args <- list(...)
    if (!length(args)) 
        return(.difftime(double(), "secs"))
    ind <- sapply(args, inherits, "difftime")
    pos <- which(!ind)
    units <- sapply(args[ind], attr, "units")
    if (all(units == (un1 <- units[1L]))) {
        if (length(pos)) 
            args[pos] <- lapply(args[pos], as.difftime, units = un1)
        .difftime(unlist(args), un1)
    }
    else {
        if (length(pos)) 
            args[pos] <- lapply(args[pos], as.difftime, units = "secs")
        args[ind] <- lapply(args[ind], coerceTimeUnit)
        .difftime(unlist(args), "secs")
    }
}
