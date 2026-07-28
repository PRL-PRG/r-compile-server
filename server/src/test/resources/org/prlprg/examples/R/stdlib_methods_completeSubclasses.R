#? stdlib
`completeSubclasses` <- function (classDef, class2, extensionDef, where, classDef2 = getClassDef(class2, 
    where)) 
{
    ext <- classDef@subclasses
    for (i in seq_along(ext)) {
        if (.isIndirectExtension(ext[[i]])) {
            classDef <- .uncompleteClassDefinition(classDef, 
                "subclasses")
            break
        }
    }
    subclasses <- .walkClassGraph(classDef, "subclasses", where)
    if (!missing(class2) && length(classDef@contains)) {
        strictBy <- TRUE
        contains <- .transitiveExtends(class2, classDef@className, 
            extensionDef, classDef@contains, strictBy)
        for (i in seq_along(contains)) {
            obji <- contains[[i]]
            cli <- contains[[i]]@superClass
            cliDef <- getClassDef(cli)
            subcl <- cliDef@subclasses[[class2]]
            if (is.null(subcl)) {
                exti <- extends(classDef2, cliDef, fullInfo = TRUE)
                if (identical(exti, FALSE) || (is(exti, "SClassExtension") && 
                  exti@distance > 1L && classDef@className == 
                  exti@by)) 
                  setIs(class2, cli, extensionObject = obji, 
                    doComplete = FALSE, where = where)
            }
        }
    }
    subclasses
}
