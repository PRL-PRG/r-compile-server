#? stdlib
`invokeRestart` <- function (r, ...) 
{
    if (!isRestart(r)) {
        res <- findRestart(r)
        if (is.null(res)) 
            stop(gettextf("no 'restart' '%s' found", as.character(r)), 
                domain = NA)
        r <- res
    }
    .Internal(.invokeRestart(r, list(...)))
}
