#? stdlib
`.lockedForMethods` <- function (fdef, env) 
{
    if (is.null(env) || !environmentIsLocked(env)) 
        return(FALSE)
    if (!is(fdef, "genericFunction")) 
        return(TRUE)
    name <- fdef@generic
    package <- fdef@package
    objs <- c(name, .TableMetaName(name, package))
    for (obj in objs) {
        hasIt <- exists(obj, env, inherits = FALSE)
        if ((!hasIt || bindingIsLocked(obj, env))) 
            return(TRUE)
    }
    FALSE
}
