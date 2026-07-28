#? stdlib
`[[<-.numeric_version` <- function (x, ..., value) 
{
    z <- unclass(x)
    if (nargs() < 4L) {
        if (length(..1) < 2L) {
            if (is.character(value) && length(value) == 1L) 
                value <- unclass(as.numeric_version(value))[[1L]]
            else if (!is.integer(value) || anyNA(value) || (any(value) < 
                0L)) 
                stop("invalid 'value'")
        }
        else {
            value <- as.integer(value)
            if (length(value) != 1L || is.na(value) || (value < 
                0L)) 
                stop("invalid 'value'")
        }
        z[[..1]] <- value
    }
    else {
        value <- as.integer(value)
        if (length(value) != 1L || is.na(value) || (value < 0L)) 
            stop("invalid 'value'")
        z[[..1]][..2] <- value
    }
    structure(z, class = oldClass(x))
}
