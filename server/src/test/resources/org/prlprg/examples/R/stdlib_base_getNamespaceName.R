#? stdlib
`getNamespaceName` <- function (ns) 
{
    ns <- asNamespace(ns)
    if (isBaseNamespace(ns)) 
        "base"
    else .getNamespaceInfo(ns, "spec")["name"]
}
