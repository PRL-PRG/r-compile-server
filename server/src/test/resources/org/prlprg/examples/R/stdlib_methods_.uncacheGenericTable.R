#? stdlib
`.uncacheGenericTable` <- function (name, def, table) 
{
    if (exists(name, envir = table, inherits = FALSE)) {
        newpkg <- def@package
        prev <- get(name, envir = table)
        if (is.function(prev)) 
            return(remove(list = name, envir = table))
        i <- match(newpkg, names(prev))
        if (!is.na(i)) 
            prev[[i]] <- NULL
        else return()
        if (length(prev) == 0L) 
            return(remove(list = name, envir = table))
        else if (length(prev) == 1L) 
            prev <- prev[[1L]]
        assign(name, prev, envir = table)
    }
}
