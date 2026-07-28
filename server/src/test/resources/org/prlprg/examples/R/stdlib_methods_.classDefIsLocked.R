#? stdlib
`.classDefIsLocked` <- function (classDef) 
{
    what <- classMetaName(classDef@className)
    env <- .NamespaceOrEnvironment(classDef@package)
    is.environment(env) && exists(what, envir = env, inherits = FALSE) && 
        bindingIsLocked(what, env)
}
