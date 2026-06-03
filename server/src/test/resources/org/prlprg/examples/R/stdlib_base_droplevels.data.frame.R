#? stdlib
`droplevels.data.frame` <- function (x, except = NULL, exclude, ...) 
{
    ix <- vapply(x, is.factor, NA)
    if (!is.null(except)) 
        ix[except] <- FALSE
    x[ix] <- if (missing(exclude)) 
        lapply(x[ix], droplevels)
    else lapply(x[ix], droplevels, exclude = exclude)
    x
}
