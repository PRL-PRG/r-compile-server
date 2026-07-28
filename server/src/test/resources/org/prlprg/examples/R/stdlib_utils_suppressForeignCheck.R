#? stdlib
`suppressForeignCheck` <- function (names, package, add = TRUE) 
registerNames(names, package, ".__suppressForeign__", add)
