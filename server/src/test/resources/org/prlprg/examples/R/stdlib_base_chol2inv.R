#? stdlib
`chol2inv` <- function (x, size = NCOL(x), LINPACK = FALSE) 
{
    if (!missing(LINPACK)) 
        stop("the LINPACK argument has been defunct since R 3.1.0")
    .Internal(La_chol2inv(x, size))
}

# Examples
cma <- chol(ma  <- cbind(1, 1:3, c(1,3,7)))
ma %*% chol2inv(cma)

