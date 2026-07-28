#? stdlib
`existsFunction` <- function (f, generic = TRUE, where = topenv(parent.frame())) 
length(findFunction(f, generic, where)) > 0L
