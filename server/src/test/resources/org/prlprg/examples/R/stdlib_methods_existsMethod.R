#? stdlib
`existsMethod` <- function (f, signature = character(), where = topenv(parent.frame())) 
{
    if (missing(where)) 
        method <- getMethod(f, signature, optional = TRUE)
    else method <- getMethod(f, signature, where = where, optional = TRUE)
    !is.null(method)
}
