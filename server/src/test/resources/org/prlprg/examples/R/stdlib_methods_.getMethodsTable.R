#? stdlib
`.getMethodsTable` <- function (fdef, env = environment(fdef), check = TRUE, inherited = FALSE) 
{
    name <- if (inherited) 
        ".AllMTable"
    else ".MTable"
    if (check && !exists(name, envir = env, inherits = FALSE)) {
        .setupMethodsTables(fdef, initialize = TRUE)
        if (!exists(name, envir = env, inherits = FALSE)) 
            stop("invalid methods table request")
    }
    get(name, envir = env)
}
