#? stdlib
`inheritedSubMethodLists` <- function (object, thisClass, mlist, ev) 
{
    .MlistDefunct("inheritedSubMethodLists()")
    methods <- slot(mlist, "methods")
    defaultMethod <- methods[["ANY"]]
    classes <- names(methods)
    value <- list()
    if (.identC(thisClass, "missing")) {
    }
    else {
        classDef <- getClassDef(thisClass, ev)
        useSuperClasses <- !is.null(classDef) && !classDef@sealed
        if (useSuperClasses) {
            superClasses <- names(classDef@contains)
            classes <- superClasses[!is.na(match(superClasses, 
                classes))]
            for (which in seq_along(classes)) {
                tryClass <- classes[[which]]
                if (is.null(object) || is(object, tryClass)) {
                  value[[tryClass]] <- methods[[tryClass]]
                }
            }
        }
        else {
            for (which in seq_along(classes)) {
                tryClass <- classes[[which]]
                tryClassDef <- getClassDef(tryClass, ev)
                if (!is.null(tryClassDef) && !is.na(match(thisClass, 
                  names(tryClassDef@subclasses)))) 
                  value[[tryClass]] <- methods[[which]]
            }
        }
    }
    if (!is.null(defaultMethod)) 
        value[["ANY"]] <- defaultMethod
    value
}
