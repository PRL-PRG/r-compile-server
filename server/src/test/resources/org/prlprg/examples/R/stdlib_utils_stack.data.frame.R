#? stdlib
`stack.data.frame` <- function (x, select, drop = FALSE, ...) 
{
    if (!missing(select)) {
        nl <- as.list(1L:ncol(x))
        names(nl) <- names(x)
        vars <- eval(substitute(select), nl, parent.frame())
        x <- x[, vars, drop = FALSE]
    }
    keep <- vapply(x, is.vector, NA)
    if (!any(keep)) 
        stop("no vector columns were selected")
    if (!all(keep)) 
        warning("non-vector columns will be ignored")
    x <- x[, keep, drop = FALSE]
    ind <- rep.int(factor(names(x), unique(names(x))), lengths(x))
    if (drop) {
        ind <- droplevels(ind)
    }
    data.frame(values = unlist(unname(x)), ind, stringsAsFactors = FALSE)
}
