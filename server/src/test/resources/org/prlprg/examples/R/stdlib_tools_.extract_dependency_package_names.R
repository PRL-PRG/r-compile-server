#? stdlib
`.extract_dependency_package_names` <- function (x) 
.Call(C_package_dependencies_scan, x)
