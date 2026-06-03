#? stdlib
`mean` <- function (x, ...) 
UseMethod("mean")

# Examples
x <- c(0:10, 50)
xm <- mean(x)
c(xm, mean(x, trim = 0.10))

