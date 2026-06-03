#? stdlib
`.lockRefFields` <- function (def, ...) 
{
    lockedFields <- .getLockedFieldNames(def)
    if (nargs() < 2) 
        return(lockedFields)
    fields <- c(...)
    if (is.character(fields) && all(nzchar(fields))) {
    }
    else stop("arguments must all be character string names of fields")
    if (.classDefIsLocked(def)) 
        stop(gettextf("the definition of class %s in package %s is locked so fields may not be modified", 
            dQuote(def@className), sQuote(def@package)), domain = NA)
    env <- def@fieldPrototypes
    className <- def@className
    for (what in fields) {
        if (what %in% lockedFields) {
            warning(gettextf("field %s is already locked", sQuote(what)), 
                domain = NA)
            next
        }
        current <- env[[what]]
        if (is.null(current)) 
            stop(gettextf("%s is not a field in class %s", sQuote(what), 
                dQuote(className)), domain = NA)
        if (is(current, "activeBindingFunction")) {
            if (is(current, "defaultBindingFunction")) 
                env[[what]] <- .makeDefaultBinding(current@field, 
                  current@className, TRUE, environment(current))[[what]]
            else stop(gettextf("field %s of class %s has a non-default binding and cannot be locked", 
                sQuote(what), dQuote(className)), domain = NA)
        }
        else {
            binding <- .makeDefaultBinding(current@field, current@className, 
                TRUE, environment(current))
            env[[what]] <- binding[[what]]
            metaName <- .bindingMetaName(what)
            env[[metaName]] <- current
        }
        lockedFields <- c(lockedFields, what)
    }
    .setLockedFieldNames(def, lockedFields)
    invisible(env)
}
