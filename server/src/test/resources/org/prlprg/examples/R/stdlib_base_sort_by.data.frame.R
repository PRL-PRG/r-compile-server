#? stdlib
`sort_by.data.frame` <- function (x, y, ...) 
{
    if (inherits(y, "formula")) 
        y <- .formula2varlist(y, x)
    if (!is.list(y)) 
        y <- list(y)
    o <- do.call(order, c(unname(y), list(...)))
    x[o, , drop = FALSE]
}
