#? stdlib
`getNamespaceUsers` <- function (ns) 
{
    nsname <- getNamespaceName(asNamespace(ns))
    users <- character()
    for (n in loadedNamespaces()) {
        inames <- names(getNamespaceImports(n))
        if (match(nsname, inames, 0L)) 
            users <- c(n, users)
    }
    users
}
