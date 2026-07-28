#? stdlib
`undebug` <- function (fun, signature = NULL) 
{
    if (is.null(signature)) 
        .Internal(undebug(fun))
    else if (requireNamespace("methods")) 
        methods:::.undebugMethod(fun, signature = signature)
    else stop("failed to load methods package for undebugging by signature")
}
