#? stdlib
`.rangeNum` <- function (..., na.rm, finite, isNumeric) 
{
    x <- c(..., recursive = TRUE)
    if (isNumeric(x)) {
        if (finite) 
            x <- x[is.finite(x)]
        else if (na.rm) 
            x <- x[!is.na(x)]
        c(min(x), max(x))
    }
    else {
        if (finite) 
            na.rm <- TRUE
        c(min(x, na.rm = na.rm), max(x, na.rm = na.rm))
    }
}
