#? stdlib
`chol.default` <- function (x, pivot = FALSE, LINPACK = FALSE, tol = -1, ...) 
{
    if (!missing(LINPACK)) 
        stop("the LINPACK argument has been defunct since R 3.1.0")
    if (is.complex(x)) 
        stop("complex matrices not permitted at present")
    .Internal(La_chol(as.matrix(x), pivot, tol))
}
