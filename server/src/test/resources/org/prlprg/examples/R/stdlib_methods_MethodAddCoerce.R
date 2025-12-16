#? stdlib
`MethodAddCoerce` <- function (method, argName, thisClass, methodClass) 
{
    if (.identC(thisClass, methodClass)) 
        return(method)
    ext <- possibleExtends(thisClass, methodClass)
    if (is.logical(ext) || ext@simple) 
        return(method)
    methodInsert <- function(method, addExpr) {
        if (is.function(method)) {
            newBody <- substitute({
                firstExpr
                secondExpr
            }, list(firstExpr = addExpr, secondExpr = body(method)))
            body(method, envir = environment(method)) <- newBody
        }
        else if (is(method, "MethodsList")) {
            .MlistDefunct()
            methods <- method@allMethods
            for (i in seq_along(methods)) methods[[i]] <- Recall(methods[[i]], 
                addExpr)
            method@allMethods <- methods
        }
        method
    }
    addExpr <- substitute(XXX <- as(XXX, CLASS), list(XXX = argName, 
        CLASS = methodClass))
    methodInsert(method, addExpr)
}
