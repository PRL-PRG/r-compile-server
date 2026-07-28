#? stdlib
`isdebugged` <- function (fun, signature = NULL) 
{
    if (is.null(signature)) 
        .Internal(isdebugged(fun))
    else if (requireNamespace("methods")) 
        methods:::.isMethodDebugged(fun, signature)
    else stop("failed to load methods package for handling signature")
}
