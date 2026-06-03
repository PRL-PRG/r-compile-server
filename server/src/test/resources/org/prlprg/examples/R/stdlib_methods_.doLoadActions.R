#? stdlib
`.doLoadActions` <- function (where, attach) 
{
    if (!attach) 
        return()
    actionListName <- .actionMetaName("")
    if (!exists(actionListName, envir = where, inherits = FALSE)) 
        return(list())
    actions <- get(actionListName, envir = where)
    for (what in actions) {
        aname <- .actionMetaName(what)
        if (!exists(aname, envir = where, inherits = FALSE)) {
            warning(gettextf("missing function for load action: %s", 
                what))
            next
        }
        f <- get(aname, envir = where)
        value <- eval(substitute(tryCatch(FUN(WHERE), error = function(e) e), 
            list(FUN = f, WHERE = where)), where)
        if (is(value, "error")) {
            callString <- deparse(value$call)[[1]]
            stop(gettextf("error in load action %s for package %s: %s: %s", 
                aname, getPackageName(where), callString, value$message))
        }
    }
}
