#? stdlib
`.cacheGenericTable` <- function (name, def, table) 
{
    fdef <- def
    if (!is.null(prev <- table[[name]])) {
        newpkg <- def@package
        if (is.function(prev)) {
            if (identical(prev, def)) 
                return(fdef)
            pkg <- prev@package
            if (identical(pkg, newpkg)) {
                table[[name]] <- def
                return(fdef)
            }
            prev <- list(prev)
            names(prev) <- pkg
        }
        i <- match(newpkg, names(prev))
        if (is.na(i)) 
            prev[[newpkg]] <- def
        else if (identical(def, prev[[i]])) 
            return(fdef)
        else prev[[i]] <- def
        def <- prev
    }
    .getMethodsTable(fdef)
    table[[name]] <- def
    fdef
}
