#? stdlib
`getSrcFilename` <- function (x, full.names = FALSE, unique = TRUE) 
{
    srcref <- getSrcref(x)
    if (is.list(srcref)) 
        result <- sapply(srcref, getSrcFilename, full.names, 
            unique)
    else {
        srcfile <- attr(srcref, "srcfile")
        if (is.null(srcfile)) 
            result <- character()
        else result <- srcfile$filename
    }
    result <- if (full.names) 
        result
    else basename(result)
    if (unique) 
        unique(result)
    else result
}
