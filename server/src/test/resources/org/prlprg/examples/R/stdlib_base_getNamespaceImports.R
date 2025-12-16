#? stdlib
`getNamespaceImports` <- function (ns) 
{
    ns <- asNamespace(ns)
    if (isBaseNamespace(ns)) 
        NULL
    else .getNamespaceInfo(ns, "imports")
}
