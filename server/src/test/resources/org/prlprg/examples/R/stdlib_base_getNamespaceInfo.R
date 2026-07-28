#? stdlib
`getNamespaceInfo` <- function (ns, which) 
{
    ns <- asNamespace(ns, base.OK = FALSE)
    get(which, envir = ns[[".__NAMESPACE__."]])
}
