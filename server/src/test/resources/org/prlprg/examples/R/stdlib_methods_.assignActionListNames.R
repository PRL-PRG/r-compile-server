#? stdlib
`.assignActionListNames` <- function (where) 
{
    actionListName <- .actionMetaName("")
    if (exists(actionListName, envir = where, inherits = FALSE)) 
        get(actionListName, envir = where)
    else character()
}
