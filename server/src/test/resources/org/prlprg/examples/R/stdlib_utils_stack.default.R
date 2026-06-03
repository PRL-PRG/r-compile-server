#? stdlib
`stack.default` <- function (x, drop = FALSE, ...) 
{
    x <- as.list(x)
    keep <- unlist(lapply(x, is.vector))
    if (!sum(keep)) 
        stop("at least one vector element is required")
    if (!all(keep)) 
        warning("non-vector elements will be ignored")
    x <- x[keep]
    ind <- rep.int(factor(names(x), unique(names(x))), lengths(x))
    if (drop) {
        ind <- droplevels(ind)
    }
    data.frame(values = unlist(unname(x)), ind, stringsAsFactors = FALSE)
}
