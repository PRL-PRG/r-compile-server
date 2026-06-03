#? stdlib
`.rmpkg` <- function (pkg) 
sub("package:", "", pkg, fixed = TRUE)
