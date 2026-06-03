#? stdlib
`.removeSuperClass` <- function (class, superclass) 
{
    cdef <- getClassDef(class)
    if (is.null(cdef)) {
    }
    else {
        newdef <- .deleteSuperClass(cdef, superclass)
        if (!is.null(newdef)) 
            .cacheClass(class, newdef, FALSE, where)
    }
    sig <- signature(from = class, to = superclass)
    if (existsMethod("coerce", sig)) 
        .removeCachedMethod("coerce", sig)
    if (existsMethod("coerce<-", sig)) 
        .removeCachedMethod("coerce<-", sig)
    evv <- findClass(class, .GlobalEnv)
    mname <- classMetaName(class)
    for (where in evv) {
        if (!is.null(cdef <- where[[mname]])) {
            newdef <- .deleteSuperClass(cdef, superclass)
            if (!is.null(newdef)) {
                assignClassDef(class, newdef, where, TRUE)
            }
        }
    }
    NULL
}
