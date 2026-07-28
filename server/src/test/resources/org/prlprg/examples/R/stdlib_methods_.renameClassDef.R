#? stdlib
`.renameClassDef` <- function (def, className) 
{
    validObject(def)
    def@className <- className
    comp <- def@contains
    for (i in seq_along(comp)) comp[[i]]@subClass <- className
    def@contains <- comp
    comp <- def@subclasses
    for (i in seq_along(comp)) comp[[i]]@superClass <- className
    def@subclasses <- comp
    def
}
