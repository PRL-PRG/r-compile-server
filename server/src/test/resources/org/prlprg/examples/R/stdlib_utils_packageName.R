#? stdlib
`packageName` <- function (env = parent.frame()) 
{
    if (!is.environment(env)) 
        stop("'env' must be an environment")
    env <- topenv(env)
    get0(".packageName", envir = env, inherits = FALSE) %||% 
        if (identical(env, .BaseNamespaceEnv)) 
            "base"
}

# Examples
packageName()
packageName(environment(mean))

