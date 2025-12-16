#? stdlib
`.removeSuperclassBackRefs` <- function (Class, classDef, classWhere) 
{
    if (length(classDef@contains)) {
        superclasses <- names(classDef@contains)
        for (what in superclasses) {
            cdef <- .getClassFromCache(what, classWhere, resolve.confl = "all")
            if (is(cdef, "classRepresentation")) 
                .removeSubClass(what, Class, cdef)
            else if (is.list(cdef)) 
                lapply(cdef, function(cl) .removeSubClass(what, 
                  Class, cl))
        }
    }
    NULL
}
