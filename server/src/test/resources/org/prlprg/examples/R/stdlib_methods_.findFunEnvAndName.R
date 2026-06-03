#? stdlib
`.findFunEnvAndName` <- function (what, where, signature = NULL) 
{
    pname <- character()
    if (is.null(signature)) {
        whereF <- findFunction(what, where = where)
        if (length(whereF) > 0) 
            whereF <- whereF[[1L]]
        else return(list(pname = pname, whereF = baseenv()))
    }
    else whereF <- .genEnv(what, where)
    if ("name" %in% names(attributes(whereF))) 
        pname <- gsub("^.*:", "", attr(whereF, "name"))
    else if (isNamespace(whereF)) 
        pname <- .searchNamespaceNames(whereF)
    list(pname = pname, whereF = whereF)
}
