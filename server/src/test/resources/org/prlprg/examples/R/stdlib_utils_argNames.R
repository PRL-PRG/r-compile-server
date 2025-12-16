#? stdlib
`argNames` <- function (fname, use.arg.db = .CompletionEnv$settings[["argdb"]]) 
{
    if (use.arg.db) 
        args <- .FunArgEnv[[fname]]
    if (!is.null(args)) 
        return(args)
    args <- do.call(argsAnywhere, list(fname))
    if (is.null(args)) 
        character()
    else if (is.list(args)) 
        unlist(lapply(args, function(f) names(formals(f))))
    else names(formals(args))
}
