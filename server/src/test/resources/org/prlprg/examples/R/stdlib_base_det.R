#? stdlib
`det` <- function (x, ...) 
{
    z <- determinant(x, logarithm = TRUE, ...)
    c(z$sign * exp(z$modulus))
}

# Examples
(x <- matrix(1:4, ncol = 2))
unlist(determinant(x))
det(x)

det(print(cbind(1, 1:3, c(2,0,1))))

