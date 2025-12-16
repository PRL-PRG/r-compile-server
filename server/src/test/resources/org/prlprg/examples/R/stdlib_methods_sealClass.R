#? stdlib
`sealClass` <- function (Class, where = topenv(parent.frame())) 
{
    if (missing(where)) 
        where <- findClass(Class, unique = "sealing the class", 
            where = where)[[1L]]
    classDef <- getClassDef(Class, where)
    if (!classDef@sealed) {
        classDef@sealed <- TRUE
        assignClassDef(Class, classDef, where)
    }
    invisible(classDef)
}
