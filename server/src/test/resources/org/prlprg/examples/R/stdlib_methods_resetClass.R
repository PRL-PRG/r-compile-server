#? stdlib
`resetClass` <- function (Class, classDef, where) 
{
    if (is(Class, "classRepresentation")) {
        classDef <- Class
        Class <- Class@className
        if (missing(where)) 
            where <- .classDefEnv(classDef)
    }
    else {
        if (missing(where)) {
            if (missing(classDef)) 
                where <- findClass(Class, unique = "resetting the definition")[[1L]]
            else where <- .classDefEnv(classDef)
        }
        if (missing(classDef)) {
            classDef <- getClassDef(Class, where)
            if (is.null(classDef)) {
                warning(gettextf("class %s not found on %s; 'resetClass' will have no effect", 
                  dQuote(Class), sQuote(getPackageName(where))), 
                  domain = NA)
                return(classDef)
            }
        }
        else if (!is(classDef, "classRepresentation")) 
            stop(gettextf("argument 'classDef' must be a string or a class representation; got an object of class %s", 
                dQuote(class(classDef))), domain = NA)
    }
    if (classDef@sealed) 
        warning(gettextf("class %s is sealed; 'resetClass' will have no effect", 
            dQuote(Class)), domain = NA)
    else {
        classDef <- .uncompleteClassDefinition(classDef)
        classDef <- completeClassDefinition(Class, classDef, 
            where)
        assignClassDef(Class, classDef, where)
    }
    classDef
}
