#? stdlib
`completeClassDefinition` <- function (Class, ClassDef = getClassDef(Class), where, doExtends = TRUE) 
{
    ClassDef <- .completeClassSlots(ClassDef, where)
    immediate <- ClassDef@contains
    properties <- ClassDef@slots
    prototype <- makePrototypeFromClassDef(properties, ClassDef, 
        immediate, where)
    virtual <- ClassDef@virtual
    extends <- if (doExtends) 
        completeExtends(ClassDef, where = where)
    else ClassDef@contains
    subclasses <- if (doExtends) 
        completeSubclasses(ClassDef, where = where)
    else ClassDef@subclasses
    if (is.na(virtual)) 
        virtual <- testVirtual(properties, immediate, prototype, 
            where)
    ClassDef <- .mergeClassDefSlots(ClassDef, slots = properties, 
        contains = extends, prototype = prototype, virtual = virtual, 
        subclasses = subclasses)
    if (any(!is.na(match(names(ClassDef@subclasses), names(ClassDef@contains)))) && 
        getOption("warn") > 0) {
        bad <- names(ClassDef@subclasses)[!is.na(match(names(ClassDef@subclasses), 
            names(ClassDef@contains)))]
        warning(gettextf("potential cycle in class inheritance: %s has duplicates in superclasses and subclasses (%s)", 
            dQuote(Class), paste(bad, collapse = ", ")), domain = NA)
    }
    ClassDef
}
