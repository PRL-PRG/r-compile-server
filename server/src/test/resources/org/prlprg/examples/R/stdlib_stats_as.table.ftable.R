#? stdlib
`as.table.ftable` <- function (x, ...) 
{
    if (!inherits(x, "ftable")) 
        stop("'x' must be an \"ftable\" object")
    xrv <- rev(attr(x, "row.vars"))
    xcv <- rev(attr(x, "col.vars"))
    x <- array(data = c(x), dim = c(lengths(xrv), lengths(xcv)), 
        dimnames = c(xrv, xcv))
    nrv <- length(xrv)
    ncv <- length(xcv)
    x <- aperm(x, c(rev(seq_len(nrv)), rev(seq_len(ncv) + nrv)))
    class(x) <- "table"
    x
}
