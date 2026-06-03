#? stdlib
`cacheGenericsMetaData` <- function (f, fdef, attach = TRUE, where = topenv(parent.frame()), 
    package, methods) 
{
    if (!is(fdef, "genericFunction")) {
        warning(gettextf("no methods found for %s; cacheGenericsMetaData() will have no effect", 
            sQuote(f)), domain = NA)
        return(FALSE)
    }
    if (missing(package)) 
        package <- fdef@package
    deflt <- finalDefaultMethod(fdef@default)
    if (dispatchIsInternal(fdef)) {
        if (missing(methods)) 
            setPrimitiveMethods(f, deflt, "reset", fdef, NULL)
        else setPrimitiveMethods(f, deflt, "set", fdef, methods)
    }
    else if (isGroup(f, fdef = fdef)) {
        members <- fdef@groupMembers
        for (ff in members) {
            ffdef <- getGeneric(ff, where = where)
            if (is(ffdef, "genericFunction")) 
                Recall(ff, ffdef, attach, where, methods = .getMethodsTable(ffdef))
        }
    }
    TRUE
}
