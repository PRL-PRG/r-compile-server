#? stdlib
`namespaceImportClasses` <- function (self, ns, vars, from = NULL) 
{
    for (i in seq_along(vars)) vars[[i]] <- methods::classMetaName(vars[[i]])
    namespaceImportFrom(self, asNamespace(ns), vars, from = from)
}
