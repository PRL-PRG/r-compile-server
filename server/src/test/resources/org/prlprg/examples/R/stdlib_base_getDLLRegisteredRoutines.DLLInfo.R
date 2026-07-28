#? stdlib
`getDLLRegisteredRoutines.DLLInfo` <- function (dll, addNames = TRUE) 
{
    if (!inherits(dll, "DLLInfo")) 
        stop(gettextf("must specify DLL via a %s object. See getLoadedDLLs()", 
            dQuote("DLLInfo")), domain = NA)
    info <- dll[["info"]]
    els <- .Internal(getRegisteredRoutines(info))
    if (addNames) {
        els <- lapply(els, function(x) {
            if (length(x)) 
                names(x) <- vapply(x, function(z) z$name, "")
            x
        })
    }
    class(els) <- "DLLRegisteredRoutines"
    els
}
