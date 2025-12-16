#? stdlib
`getSrcfile` <- function (x) 
{
    if (!is.null(r <- attr(x, "srcfile"))) 
        return(r)
    srcref <- attr(x, "wholeSrcref")
    if (is.null(srcref)) {
        srcref <- getSrcref(x)
        if (is.list(srcref) && length(srcref)) 
            srcref <- srcref[[length(srcref)]]
    }
    attr(srcref, "srcfile")
}
