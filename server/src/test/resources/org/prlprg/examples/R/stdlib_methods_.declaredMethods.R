#? stdlib
`.declaredMethods` <- function (method) 
{
    methods <- character()
    if (!.hasCodeTools()) 
        return(methods)
    .theseMethods <- function(e, w) {
        if (length(e) < 2) 
            character()
        else sapply(as.list(e)[-1], function(what) methods <<- c(methods, 
            if (is.symbol(what)) as.character(what) else if (is.character(what)) what else character()))
    }
    walker <- codetools::makeCodeWalker(handler = function(v, 
        w) {
        if (identical(v, "usingMethods")) 
            .theseMethods
        else NULL
    }, leaf = function(e, w) NULL)
    codetools::walkCode(body(method), walker)
    unique(methods)
}
