#? stdlib
`completeExtends` <- function (ClassDef, class2, extensionDef, where) 
{
    ext <- ClassDef@contains
    for (i in seq_along(ext)) {
        if (.isIndirectExtension(ext[[i]])) {
            ClassDef <- .uncompleteClassDefinition(ClassDef, 
                "contains")
            break
        }
    }
    exts <- .walkClassGraph(ClassDef, "contains", where, attr(ext, 
        "conflicts"))
    if (length(exts)) {
        if ("oldClass" %in% names(exts) && length(ClassDef@slots) > 
            1L) 
            exts <- .S3Extends(ClassDef, exts, where)
    }
    if (!missing(class2) && length(ClassDef@subclasses)) {
        strictBy <- TRUE
        subclasses <- .transitiveSubclasses(ClassDef@className, 
            class2, extensionDef, ClassDef@subclasses, strictBy)
        for (i in seq_along(subclasses)) {
            obji <- subclasses[[i]]
            if (!extends(obji@subClass, class2)) 
                setIs(obji@subClass, class2, extensionObject = obji, 
                  doComplete = FALSE, where = where)
        }
    }
    exts
}
