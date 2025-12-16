#? stdlib
`.envSearch` <- function (env = topenv(parent.frame())) 
{
    if (identical(env, .GlobalEnv)) 
        seq_along(search())
    else if (isNamespace(env) && !isBaseNamespace(env)) {
        value <- list(env)
        repeat {
            if (identical(env, emptyenv())) 
                stop("botched namespace: failed to find 'base' namespace in its parents", 
                  domain = NA)
            env <- parent.env(env)
            value <- c(value, list(env))
            if (isBaseNamespace(env)) 
                break
        }
        value
    }
    else list(env)
}
