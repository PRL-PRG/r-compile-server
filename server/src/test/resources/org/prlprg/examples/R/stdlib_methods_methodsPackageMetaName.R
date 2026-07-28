#? stdlib
`methodsPackageMetaName` <- function (prefix, name, package = "") 
.Call(C_R_methodsPackageMetaName, prefix, name, package)
