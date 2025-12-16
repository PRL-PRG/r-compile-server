#? stdlib
`coef` <- function (object, ...) 
UseMethod("coef")

# Examples
x <- 1:5; coef(lm(c(1:3, 7, 6) ~ x))

