#? stdlib
`packageHasNamespace` <- function (package, package.lib) 
file.exists(file.path(package.lib, package, "NAMESPACE"))
