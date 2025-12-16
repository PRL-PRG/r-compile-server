#? stdlib
`getNamespaceExports` <- function (ns) 
{
    ns <- asNamespace(ns)
    names(if (isBaseNamespace(ns)) .BaseNamespaceEnv else .getNamespaceInfo(ns, 
        "exports"))
}
