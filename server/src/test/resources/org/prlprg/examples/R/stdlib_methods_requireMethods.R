#? stdlib
`requireMethods` <- function (functions, signature, message = "", where = topenv(parent.frame())) 
{
    for (f in functions) {
        method <- getMethod(f, optional = TRUE)
        if (!is.function(method)) 
            method <- getGeneric(f, where = where)
        body(method) <- substitute(stop(methods:::.missingMethod(FF, 
            MESSAGE, if (exists(".Method")) .Method), domain = NA), 
            list(FF = f, MESSAGE = message))
        environment(method) <- .GlobalEnv
        setMethod(f, signature, method, where = where)
    }
    NULL
}
