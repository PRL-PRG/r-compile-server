#? stdlib
`.get_S4_methods_list` <- function (f, env) 
{
    env <- as.environment(env)
    tab <- get(methods:::.TableMetaName(f, attr(f, "package")), 
        envir = env)
    mlist <- as.list(tab, all.names = TRUE, sorted = TRUE)
    if (any(ind <- vapply(mlist, methods::is, NA, "derivedDefaultMethod"))) 
        mlist <- mlist[!ind]
    if (length(mlist)) {
        namespace <- if (isNamespace(env)) 
            env
        else .get_namespace_from_package_env(env)
        mlist <- if (!is.null(namespace)) 
            Filter(function(m) identical(environment(m), namespace), 
                mlist)
        else Filter(function(m) environmentName(environment(m)) == 
            "", mlist)
    }
    mlist
}
