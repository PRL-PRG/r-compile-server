#? stdlib
`na.action` <- function (object, ...) 
UseMethod("na.action")

# Examples
na.action(na.omit(c(1, NA)))

