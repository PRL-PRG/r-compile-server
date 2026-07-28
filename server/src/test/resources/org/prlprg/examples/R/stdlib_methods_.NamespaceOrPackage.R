#? stdlib
`.NamespaceOrPackage` <- function (what) 
{
    name <- as.name(what)
    ns <- .getNamespace(name)
    if (!is.null(ns)) 
        asNamespace(ns)
    else {
        i <- match(paste0("package:", what), search())
        if (is.na(i)) 
            .GlobalEnv
        else as.environment(i)
    }
}
