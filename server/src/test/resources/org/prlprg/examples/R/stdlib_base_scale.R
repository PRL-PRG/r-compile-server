#? stdlib
`scale` <- function (x, center = TRUE, scale = TRUE) 
UseMethod("scale")

# Examples
require(stats)
x <- matrix(1:10, ncol = 2)
(centered.x <- scale(x, scale = FALSE))
cov(centered.scaled.x <- scale(x)) # all 1

