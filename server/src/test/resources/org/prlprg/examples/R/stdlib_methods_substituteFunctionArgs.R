#? stdlib
`substituteFunctionArgs` <- function (def, newArgs, args = formalArgs(def), silent = FALSE, 
    functionName = "a function") 
{
    if (!identical(args, newArgs)) {
        if (!missing(functionName)) 
            functionName <- paste("for", functionName)
        n <- length(args)
        if (n != length(newArgs)) 
            stop(sprintf("trying to change the argument list of %s with %d arguments to have arguments (%s)", 
                functionName, n, paste(newArgs, collapse = ", ")), 
                domain = NA)
        bdy <- body(def)
        checkFor <- newArgs[is.na(match(newArgs, args))]
        locals <- all.vars(bdy)
        if (length(checkFor) && any(!is.na(match(checkFor, locals)))) 
            stop(sprintf("get rid of variables in definition %s (%s); they conflict with the needed change to argument names (%s)", 
                functionName, paste(checkFor[!is.na(match(checkFor, 
                  locals))], collapse = ", "), paste(newArgs, 
                  collapse = ", ")), domain = NA)
        ll <- vector("list", 2L * n)
        for (i in seq_len(n)) {
            ll[[i]] <- as.name(args[[i]])
            ll[[n + i]] <- as.name(newArgs[[i]])
        }
        names(ll) <- c(args, newArgs)
        body(def, envir = environment(def)) <- substituteDirect(bdy, 
            ll)
        if (!silent) {
            msg <- sprintf("NOTE: arguments in definition %s changed from (%s) to (%s)", 
                functionName, paste(args, collapse = ", "), paste(newArgs, 
                  collapse = ", "))
            message(msg, domain = NA)
        }
    }
    def
}
