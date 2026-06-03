#? stdlib
`subset.matrix` <- function (x, subset, select, drop = FALSE, ...) 
{
    if (missing(select)) 
        vars <- TRUE
    else {
        nl <- as.list(1L:ncol(x))
        names(nl) <- colnames(x)
        vars <- eval(substitute(select), nl, parent.frame())
    }
    if (missing(subset)) 
        subset <- TRUE
    else if (!is.logical(subset)) 
        stop("'subset' must be logical")
    x[subset & !is.na(subset), vars, drop = drop]
}
