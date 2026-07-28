#? stdlib
`.copyEnv` <- function (env) 
{
    list2env(as.list(env, all.names = TRUE), hash = TRUE, parent = parent.env(env))
}
