#? stdlib
`debugonce` <- function (fun, text = "", condition = NULL, signature = NULL) 
{
    if (is.null(signature)) 
        .Internal(debugonce(fun, text, condition))
    else if (requireNamespace("methods")) 
        methods:::.debugMethod(fun, text, condition, signature, 
            once = TRUE)
    else stop("failed to load the methods package for debugging by signature")
}
