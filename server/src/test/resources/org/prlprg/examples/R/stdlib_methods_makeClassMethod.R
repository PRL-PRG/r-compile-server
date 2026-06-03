#? stdlib
`makeClassMethod` <- function (def, name, Class, superClassMethod = "", allMethods) 
{
    if (identical(formalArgs(def)[[1]], ".self")) 
        def <- externalRefMethod(def)
    if (is(def, "externalRefMethod")) {
        def@name <- name
        def@refClassName <- Class
        def@superClassMethod <- superClassMethod
        return(def)
    }
    depends <- .getGlobalFuns(def)
    if ("usingMethods" %in% depends) {
        declared <- .declaredMethods(def)
        if (length(declared) && any(!declared %in% allMethods)) 
            warning(gettextf("methods declared in usingMethods() but not found: %s", 
                paste0(declared[!declared %in% allMethods], collapse = ", ")))
        depends <- c(declared, depends)
    }
    depends <- depends[match(depends, allMethods, 0) > 0]
    new("refMethodDef", def, mayCall = depends, name = name, 
        refClassName = Class, superClassMethod = superClassMethod)
}
