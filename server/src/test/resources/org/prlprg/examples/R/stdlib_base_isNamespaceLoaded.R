#? stdlib
`isNamespaceLoaded` <- function (name) 
.Internal(isRegisteredNamespace(name))
