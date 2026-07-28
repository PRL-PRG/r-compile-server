#? stdlib
`toString` <- function (x, ...) 
UseMethod("toString")

# Examples
x <- c("a", "b", "aaaaaaaaaaa")
toString(x)
toString(x, width = 8)

