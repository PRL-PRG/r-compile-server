#? stdlib
`eigen` <- function (x, symmetric, only.values = FALSE, EISPACK = FALSE) 
{
    x <- unname(as.matrix(x))
    n <- nrow(x)
    if (n != ncol(x)) 
        stop("non-square matrix in 'eigen'")
    if (!n) 
        stop("0 x 0 matrix")
    n <- as.integer(n)
    if (is.na(n)) 
        stop("invalid nrow(x)")
    complex.x <- is.complex(x)
    if (!all(is.finite(x))) 
        stop("infinite or missing values in 'x'")
    if (missing(symmetric)) 
        symmetric <- isSymmetric.matrix(x)
    if (symmetric) {
        z <- if (!complex.x) 
            .Internal(La_rs(x, only.values))
        else .Internal(La_rs_cmplx(x, only.values))
        ord <- rev(seq_along(z$values))
    }
    else {
        z <- if (!complex.x) 
            .Internal(La_rg(x, only.values))
        else .Internal(La_rg_cmplx(x, only.values))
        ord <- sort.list(Mod(z$values), decreasing = TRUE)
    }
    if (only.values) 
        list(values = z$values[ord], vectors = NULL)
    else structure(class = "eigen", list(values = z$values[ord], 
        vectors = z$vectors[, ord, drop = FALSE]))
}

# Examples
eigen(cbind(c(1,-1), c(-1,1)))
eigen(cbind(c(1,-1), c(-1,1)), symmetric = FALSE)
# same (different algorithm).

eigen(cbind(1, c(1,-1)), only.values = TRUE)
eigen(cbind(-1, 2:1)) # complex values
eigen(print(cbind(c(0, 1i), c(-1i, 0)))) # Hermite ==> real Eigenvalues
## 3 x 3:
eigen(cbind( 1, 3:1, 1:3))
eigen(cbind(-1, c(1:2,0), 0:2)) # complex values


