#? stdlib
`.thisClassMethods` <- function (methodsEnv, className) 
{
    value <- list()
    for (what in names(methodsEnv)) {
        def <- get(what, envir = methodsEnv)
        if (is(def, "refMethodDef") && def@refClassName == className) 
            value[[what]] <- def@.Data
    }
    value
}
