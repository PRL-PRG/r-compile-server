#? stdlib
`.getImportsEnv` <- function (pkg) 
{
    iname = paste0("imports:", pkg)
    empty = emptyenv()
    env = asNamespace(pkg)
    while (!identical(env, empty)) {
        if (identical(attr(env, "name"), iname)) 
            return(env)
        env = parent.env(env)
    }
    NULL
}
