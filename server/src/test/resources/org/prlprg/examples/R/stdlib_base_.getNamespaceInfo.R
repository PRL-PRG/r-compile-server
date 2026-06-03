#? stdlib
`.getNamespaceInfo` <- function (ns, which) 
{
    ns[[".__NAMESPACE__."]][[which]]
}
