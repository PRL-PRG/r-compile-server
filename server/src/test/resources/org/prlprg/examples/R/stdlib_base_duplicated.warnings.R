#? stdlib
`duplicated.warnings` <- function (x, incomparables = FALSE, ...) 
duplicated(paste(names(x), as.character(x)), incomparables, ...)
