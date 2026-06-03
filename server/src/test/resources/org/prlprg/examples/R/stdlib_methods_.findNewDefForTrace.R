#? stdlib
`.findNewDefForTrace` <- function (what, signature, env, package) 
{
    if (is.null(signature)) {
        if (exists(what, envir = env, inherits = FALSE)) 
            newObject <- get(what, envir = env)
        else stop(gettextf("no definition for object %s found in tracing environment", 
            sQuote(what)), domain = NA)
    }
    else {
        table <- .TableMetaName(what, "")
        allObjects <- sort(names(env))
        i <- grep(table, allObjects, fixed = TRUE)
        if (length(i) == 1) 
            table <- env[[allObjects[[i]]]]
        else if (length(i) > 1) {
            table <- allObjects[[i[[1]]]]
            warning(gettextf("multiple generics match pattern, using table %s", 
                table), domain = NA)
            table <- env[[table]]
        }
        else stop(gettextf("does not seem to be a method table for generic %s in tracing environment", 
            sQuote(what)), domain = NA)
        if (exists(signature, envir = table, inherits = FALSE)) 
            newObject <- get(signature, envir = table)
        else stop(gettextf("no method in methods table for %s for signature %s", 
            sQuote(what), sQuote(signature)), domain = NA)
    }
    newObject
}
