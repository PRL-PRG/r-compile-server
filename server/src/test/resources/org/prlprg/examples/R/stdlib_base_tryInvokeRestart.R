#? stdlib
`tryInvokeRestart` <- function (r, ...) 
{
    if (!isRestart(r)) 
        r <- findRestart(r)
    if (is.null(r)) 
        invisible(NULL)
    else .Internal(.invokeRestart(r, list(...)))
}
