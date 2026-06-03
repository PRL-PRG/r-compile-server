#? stdlib
`loadedNamespaces` <- function () 
names(.Internal(getNamespaceRegistry()))
