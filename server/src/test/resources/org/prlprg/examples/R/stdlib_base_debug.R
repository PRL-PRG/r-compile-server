#? stdlib
`debug` <- function (fun, text = "", condition = NULL, signature = NULL) 
{
    if (is.null(signature)) 
        .Internal(debug(fun, text, condition))
    else if (requireNamespace("methods")) 
        methods:::.debugMethod(fun, text, condition, signature, 
            once = FALSE)
    else stop("failed to load the methods package for debugging by signature")
}

# Examples



