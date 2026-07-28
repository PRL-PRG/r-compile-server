#? stdlib
`getExportedValue` <- function (ns, name) 
.Internal(getNamespaceValue(ns, name, TRUE))
