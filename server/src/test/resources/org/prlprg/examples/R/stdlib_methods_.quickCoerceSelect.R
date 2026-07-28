#? stdlib
`.quickCoerceSelect` <- function (from, to, fdef, methods, where) 
{
    if (is.null(methods)) 
        return(NULL)
    else if (is.environment(methods)) {
        method <- .findMethodInTable(c(from, to), methods)
        if (is.environment(method)) 
            NULL
        else method
    }
    else {
        allMethods <- methods@allMethods
        i <- match(from, names(allMethods))
        if (is.na(i)) 
            NULL
        else {
            methodsi <- allMethods[[i]]
            j <- match(to, names(methodsi))
            if (is.na(j)) 
                NULL
            else methodsi[[j]]
        }
    }
}
