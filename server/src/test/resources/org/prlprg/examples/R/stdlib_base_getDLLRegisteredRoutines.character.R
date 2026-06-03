#? stdlib
`getDLLRegisteredRoutines.character` <- function (dll, addNames = TRUE) 
{
    dlls <- getLoadedDLLs()
    w <- vapply(dlls, function(x) x[["name"]] == dll || x[["path"]] == 
        dll, NA)
    if (!any(w)) 
        stop(gettextf("No DLL currently loaded with name or path %s", 
            sQuote(dll)), domain = NA)
    dll <- which.max(w)
    if (sum(w) > 1L) 
        warning(gettextf("multiple DLLs match '%s'. Using '%s'", 
            names(dll), dlls[[dll]][["path"]]), domain = NA)
    getDLLRegisteredRoutines(dlls[[dll]], addNames)
}
