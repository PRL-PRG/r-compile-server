#? stdlib
`.deleteSubClass` <- function (cdef, subclass) 
{
    subclasses <- cdef@subclasses
    ii <- match(subclass, names(subclasses), 0)
    if (ii > 0) {
        cdef@subclasses <- subclasses[-ii]
        cdef
    }
    else NULL
}
