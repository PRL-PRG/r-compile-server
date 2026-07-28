#? stdlib
`setRefClass` <- function (Class, fields = character(), contains = character(), 
    methods = list(), where = topenv(parent.frame()), inheritPackage = FALSE, 
    ...) 
{
    fields <- inferProperties(fields, "field")
    info <- refClassInformation(Class, contains, fields, methods, 
        where)
    superClasses <- refSuperClasses <- fieldClasses <- fieldPrototypes <- refMethods <- NULL
    for (what in c("superClasses", "refSuperClasses", "fieldClasses", 
        "fieldPrototypes", "refMethods")) assign(what, info[[what]])
    classFun <- setClass(Class, contains = superClasses, where = where, 
        ...)
    classDef <- new("refClassRepresentation", getClassDef(Class, 
        where = where), fieldClasses = fieldClasses, refMethods = as.environment(refMethods), 
        fieldPrototypes = as.environment(fieldPrototypes), refSuperClasses = refSuperClasses)
    .setObjectParent(classDef@refMethods, if (inheritPackage) 
        refSuperClasses
    else NULL, where)
    assignClassDef(Class, classDef, where)
    generator <- new("refGeneratorSlot")
    env <- as.environment(generator)
    env$def <- classDef
    env$className <- Class
    .declareVariables(classDef, where)
    value <- new("refObjectGenerator", classFun, generator = generator)
    invisible(value)
}
