#? stdlib
`[[.data.frame` <- function (x, ..., exact = TRUE) 
{
    na <- nargs() - !missing(exact)
    if (!all(names(sys.call()) %in% c("", "exact"))) 
        warning("named arguments other than 'exact' are discouraged")
    if (na < 3L) 
        (function(x, i, exact) if (is.matrix(i)) 
            as.matrix(x)[[i]]
        else .subset2(x, i, exact = exact))(x, ..., exact = exact)
    else {
        col <- .subset2(x, ..2, exact = exact)
        i <- if (is.character(..1)) 
            pmatch(..1, row.names(x), duplicates.ok = TRUE)
        else ..1
        col[[i, exact = exact]]
    }
}
