#? stdlib
`as.matrix.ftable` <- function (x, sep = "_", ...) 
{
    if (!inherits(x, "ftable")) 
        stop("'x' must be an \"ftable\" object")
    make_dimnames <- function(vars) {
        structure(list(do.call(paste, c(rev(expand.grid(rev(vars))), 
            list(sep = sep)))), names = paste(collapse = sep, 
            names(vars)))
    }
    structure(unclass(x), dimnames = c(make_dimnames(attr(x, 
        "row.vars")), make_dimnames(attr(x, "col.vars"))), row.vars = NULL, 
        col.vars = NULL)
}
