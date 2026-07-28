#? stdlib
`namespaceImport` <- function (self, ..., from = NULL, except = character(0L)) 
for (ns in list(...)) namespaceImportFrom(self, asNamespace(ns), 
    from = from, except = except)
