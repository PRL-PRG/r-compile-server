#? stdlib
`removeClass` <- function (Class, where = topenv(parent.frame())) 
{
    if (missing(where)) {
        classEnv <- .classEnv(Class, where, FALSE)
        classWhere <- findClass(Class, where = classEnv)
        if (length(classWhere) == 0L) {
            warning(gettextf("class definition for %s not found (no action taken)", 
                dQuote(Class)), domain = NA)
            return(FALSE)
        }
        if (length(classWhere) > 1L) 
            warning(gettextf("class %s has multiple definitions visible; only the first removed", 
                dQuote(Class)), domain = NA)
        classWhere <- classWhere[[1L]]
    }
    else classWhere <- where
    classDef <- getClassDef(Class, where = classWhere)
    if (length(classDef@subclasses)) {
        subclasses <- names(classDef@subclasses)
        found <- vapply(subclasses, isClass, NA, where = where, 
            USE.NAMES = TRUE)
        for (what in subclasses[found]) .removeSuperClass(what, 
            Class)
    }
    .removeSuperclassBackRefs(Class, classDef, classWhere)
    .uncacheClass(Class, classDef)
    .undefineMethod("initialize", Class, classWhere)
    what <- classMetaName(Class)
    rm(list = what, pos = classWhere)
    TRUE
}
