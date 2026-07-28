#? stdlib
`getNamespaceVersion` <- function (ns) 
{
    ns <- asNamespace(ns)
    if (isBaseNamespace(ns)) 
        c(version = paste(R.version$major, R.version$minor, sep = "."))
    else .getNamespaceInfo(ns, "spec")["version"]
}
