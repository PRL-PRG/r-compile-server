#? stdlib
`as.function` <- function (x, ...) 
UseMethod("as.function")

# Examples
as.function(alist(a = , b = 2, a+b))
as.function(alist(a = , b = 2, a+b))(3)

