#? stdlib
`getMethods` <- function (f, where = topenv(parent.frame()), table = FALSE) 
{
    if (!table) 
        .MlistDefunct("getMethods", "findMethods")
    nowhere <- missing(where)
    fdef <- getGeneric(f, where = where)
    f <- fdef@generic
    if (!is.null(fdef)) {
        if (table) 
            return(getMethodsForDispatch(fdef, TRUE))
    }
}
