#? stdlib
`.getFromStandardPackages` <- function (name) 
{
    namespaces <- as.list(.standardPackageNamespaces, all.names = TRUE)
    if (length(namespaces) == 0L) {
        namespaces <- lapply(.standardPackages, function(pkg) {
            tryCatch(loadNamespace(pkg), error = function(e) new.env())
        })
        names(namespaces) <- .standardPackages
        list2env(namespaces, .standardPackageNamespaces)
    }
    else {
        for (ns in namespaces) {
            obj <- ns[[name]]
            if (is.function(obj)) 
                return(obj)
        }
    }
    return(NULL)
}
