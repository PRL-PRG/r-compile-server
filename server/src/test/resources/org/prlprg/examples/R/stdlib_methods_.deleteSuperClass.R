#? stdlib
`.deleteSuperClass` <- function (cdef, superclass) 
{
    superclasses <- cdef@contains
    ii <- match(superclass, names(superclasses), 0L)
    if (ii) {
        cdef@contains <- superclasses[-ii]
        for (subclass in names(cdef@subclasses)) .removeSuperClass(subclass, 
            superclass)
        cdef
    }
    else NULL
}
