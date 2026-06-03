#? stdlib
`[<-.numeric_version` <- function (x, i, j, value) 
{
    y <- unclass(x)
    if (missing(j)) 
        y[i] <- unclass(as.numeric_version(value))
    else {
        if (!is.list(value)) 
            value <- list(value)
        value <- lapply(value, as.integer)
        if (any(vapply(value, function(e) anyNA(e) || any(e < 
            0L), NA))) 
            stop("invalid 'value'")
        if (!is.list(j)) 
            j <- list(j)
        y[i] <- Map(`[<-`, y[i], j, value)
    }
    class(y) <- class(x)
    y
}
