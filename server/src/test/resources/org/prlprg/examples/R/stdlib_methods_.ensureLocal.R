#? stdlib
`.ensureLocal` <- function (object, where) 
{
    if (!is(object, "envRefClass")) 
        stop(gettextf("Class %s is not a subclass of %s; functional semantics not defined for this class", 
            dQuote(class(object)), dQuote("envRefClass")))
    selfEnv <- as.environment(object)
    if (exists(".localRefObjects", envir = where, inherits = FALSE)) {
        locals <- get(".localRefObjects", envir = where)
        for (i in rev(seq_along(locals))) if (identical(selfEnv, 
            locals[[i]])) 
            return(object)
    }
    else locals <- list()
    what <- NULL
    for (obj in as.list(where, all.names = TRUE)) {
        if (is(obj, "envRefClass") && identical(selfEnv, as.environment(obj))) {
            what <- obj
            break
        }
    }
    if (is.null(what)) 
        stop("Could not find local object in supplied environment")
    value <- .shallowCopy(object, selfEnv)
    locals[[length(locals) + 1]] <- as.environment(value)
    assign(".localRefObjects", locals, envir = where)
    value
}
