#? stdlib
`determinant.matrix` <- function (x, logarithm = TRUE, ...) 
{
    if ((n <- ncol(x)) != nrow(x)) 
        stop("'x' must be a square matrix")
    if (n < 1L) 
        return(structure(list(modulus = structure(if (logarithm) 0 else 1, 
            logarithm = logarithm), sign = 1L), class = "det"))
    if (is.complex(x)) 
        stop("'determinant' not currently defined for complex matrices")
    .Internal(det_ge_real(x, logarithm))
}
