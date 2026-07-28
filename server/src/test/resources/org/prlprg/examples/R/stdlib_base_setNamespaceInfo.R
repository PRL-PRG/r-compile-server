#? stdlib
`setNamespaceInfo` <- function (ns, which, val) 
{
    ns <- asNamespace(ns, base.OK = FALSE)
    info <- ns[[".__NAMESPACE__."]]
    info[[which]] <- val
}
