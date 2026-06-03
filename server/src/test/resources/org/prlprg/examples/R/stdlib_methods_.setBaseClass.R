#? stdlib
`.setBaseClass` <- function (cl, ..., where) 
{
    setClass(cl, ..., where = where)
    def <- getClassDef(cl, where)
    def@className <- as.character(def@className)
    def@prototype <- .notS4(def@prototype)
    assignClassDef(cl, def, where = where)
}
