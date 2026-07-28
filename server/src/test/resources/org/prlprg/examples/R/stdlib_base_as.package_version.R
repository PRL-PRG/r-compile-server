#? stdlib
`as.package_version` <- function (x) 
if (is.package_version(x)) x else package_version(x)
