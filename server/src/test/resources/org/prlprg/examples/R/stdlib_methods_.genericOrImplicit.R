#? stdlib
`.genericOrImplicit` <- function (name, pkg, env) 
{
    fdef <- .getGenericFromCache(name, env, pkg)
    if (is.null(fdef)) {
        penv <- tryCatch(getNamespace(pkg), error = function(e) e)
        if (!isNamespace(penv)) {
            pname <- paste0("package:", pkg)
            penv <- if (pname %in% search()) 
                as.environment(pname)
            else env
        }
        fdef <- getFunction(name, TRUE, FALSE, penv)
        if (!is(fdef, "genericFunction")) {
            if (is.primitive(fdef)) 
                fdef <- genericForBasic(name, penv)
            else fdef <- implicitGeneric(name, penv)
        }
    }
    fdef
}
