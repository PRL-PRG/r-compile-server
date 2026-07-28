#? stdlib
`setLoadAction` <- function (action, aname = "", where = topenv(parent.frame())) 
{
    currentAnames <- .assignActionListNames(where)
    if (!nzchar(aname)) 
        aname <- paste0(".", length(currentAnames) + 1)
    .assignActions(list(action), aname, where)
    if (is.na(match(aname, currentAnames))) {
        actionListName <- .actionMetaName("")
        assign(actionListName, c(currentAnames, aname), envir = where)
    }
}
