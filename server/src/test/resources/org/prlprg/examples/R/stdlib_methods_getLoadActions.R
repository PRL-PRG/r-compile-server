#? stdlib
`getLoadActions` <- function (where = topenv(parent.frame())) 
{
    actionListName <- .actionMetaName("")
    if (!exists(actionListName, envir = where, inherits = FALSE)) 
        return(list())
    actions <- get(actionListName, envir = where)
    if (length(actions)) {
        allExists <- sapply(actions, function(what) exists(.actionMetaName(what), 
            envir = where, inherits = FALSE))
        if (!all(allExists)) {
            warning(gettextf("some actions are missing: %s", 
                paste(actions[!allExists], collapse = ", ")), 
                domain = NA)
            actions <- actions[allExists]
        }
        allFuns <- lapply(actions, function(what) get(.actionMetaName(what), 
            envir = where))
        names(allFuns) <- actions
        allFuns
    }
    else list()
}
