#? stdlib
`.setMethodOverBinding` <- function (what, signature, method, where, verbose = TRUE) 
{
    if (verbose) 
        warning(gettextf("setting a method over the binding of symbol %s in environment/package %s", 
            sQuote(what), sQuote(getPackageName(where))), domain = NA)
    if (exists(what, envir = where, inherits = FALSE)) {
        fdef <- get(what, envir = where)
        hasFunction <- is(fdef, "genericFunction")
    }
    hasFunction <- FALSE
    if (hasFunction) {
        where2 <- findFunction(what, where = environment(fdef))[[1L]]
        unlockBinding(what, where)
        setMethod(what, signature, method, where = where)
        lockBinding(what, where)
        unlockBinding(what, where2)
        setMethod(what, signature, method, where = where2)
        lockBinding(what, where2)
    }
    else {
        setMethod(what, signature, method, where = where)
    }
}
