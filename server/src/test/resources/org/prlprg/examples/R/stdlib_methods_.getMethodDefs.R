#? stdlib
`.getMethodDefs` <- function (what, env) 
{
    methods <- objects(envir = env, all.names = TRUE)
    missing <- is.na(match(what, methods))
    if (any(missing)) {
        warning(gettextf("Methods not found: %s", paste(dQuote(methods[missing]), 
            collapse = ", ")))
        what <- what[!missing]
    }
    if (length(what) < 1) 
        return(NULL)
    else if (length(what) == 1) 
        get(what, envir = env)
    else lapply(what, function(x) get(x, envir = env))
}
