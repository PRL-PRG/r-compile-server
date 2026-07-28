#? stdlib
`removeGeneric` <- function (f, where = topenv(parent.frame())) 
{
    fdef <- NULL
    allEv <- findFunction(f, where = where)
    for (maybeEv in allEv) {
        fdef <- get(f, maybeEv)
        if (is(fdef, "genericFunction")) 
            break
    }
    found <- is(fdef, "genericFunction")
    if (found) {
        .removeMethodsMetaTable(fdef, where)
        oldMetaName <- methodsPackageMetaName("M", fdef@generic, 
            fdef@package)
        if (exists(oldMetaName, where, inherits = FALSE)) 
            rm(list = oldMetaName, pos = where)
        .uncacheGeneric(f, fdef)
        rm(list = fdef@generic, pos = where)
    }
    else {
        if (!is.character(f)) 
            f <- deparse(f)
        warning(gettextf("generic function %s not found for removal", 
            sQuote(f)), domain = NA)
    }
    return(found)
}
