#? stdlib
`.find_owner_env` <- function (v, env, last = NA, default = NA) 
{
    while (!identical(env, last)) if (exists(v, envir = env, 
        inherits = FALSE)) 
        return(env)
    else env <- parent.env(env)
    default
}
