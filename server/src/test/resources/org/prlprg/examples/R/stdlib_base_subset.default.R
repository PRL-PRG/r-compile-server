#? stdlib
`subset.default` <- function (x, subset, ...) 
{
    if (!is.logical(subset)) 
        stop("'subset' must be logical")
    x[subset & !is.na(subset)]
}
