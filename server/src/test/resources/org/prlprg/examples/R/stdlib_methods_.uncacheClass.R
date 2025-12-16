#? stdlib
`.uncacheClass` <- function (name, def) 
{
    if (!is.null(prev <- .classTable[[name]])) {
        if (is(def, "classRepresentation")) 
            newpkg <- def@package
        else newpkg <- ""
        .cache_class(name, NULL)
        if (is(prev, "classRepresentation") && identical(prev@package, 
            newpkg)) 
            return(remove(list = name, envir = .classTable))
        i <- match(newpkg, names(prev))
        if (!is.na(i)) 
            prev[[i]] <- NULL
        else return()
        if (length(prev) == 0L) 
            return(remove(list = name, envir = .classTable))
        else if (length(prev) == 1L) 
            prev <- prev[[1L]]
        assign(name, prev, envir = .classTable)
    }
}
