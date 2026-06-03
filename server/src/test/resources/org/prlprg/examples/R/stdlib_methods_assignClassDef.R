#? stdlib
`assignClassDef` <- function (Class, def, where = .GlobalEnv, force = FALSE, doSubclasses = is(def, 
    "ClassUnionRepresentation")) 
{
    if (!is(def, "classRepresentation")) 
        stop(gettextf("trying to assign an object of class %s as the definition of class %s: must supply a \"classRepresentation\" object", 
            dQuote(class(def)), dQuote(Class)), domain = NA)
    clName <- def@className
    attributes(clName) <- NULL
    if (!.identC(Class, clName)) 
        stop(gettextf("assigning as %s a class representation with internal name %s", 
            dQuote(Class), dQuote(def@className)), domain = NA)
    where <- as.environment(where)
    mname <- classMetaName(Class)
    if (exists(mname, envir = where, inherits = FALSE) && bindingIsLocked(mname, 
        where)) {
        if (force) 
            .assignOverBinding(mname, def, where, FALSE)
        else stop(gettextf("class %s has a locked definition in package %s", 
            dQuote(Class), sQuote(getPackageName(where))))
    }
    else assign(mname, def, where)
    if (cacheOnAssign(where)) 
        .cacheClass(clName, def, doSubclasses, where)
}
