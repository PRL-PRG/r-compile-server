#? stdlib
`.getOrMakeMethodsList` <- function (f, where, genericFun) 
{
    allMethods <- getMethodsMetaData(f, where = where)
    if (is.null(allMethods)) {
        argName <- genericFun@signature[[1L]]
        warning("\"MethodsList\" is defunct; allMethods now are empty")
    }
    allMethods
}
