#? stdlib
`.clean_up_dependencies` <- function (x) 
unique.default(tools:::.extract_dependency_package_names(x))
