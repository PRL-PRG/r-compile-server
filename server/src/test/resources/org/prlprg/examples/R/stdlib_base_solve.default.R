#? stdlib
`solve.default` <- function (a, b, tol = .Machine$double.eps, LINPACK = FALSE, ...) 
{
    if (!missing(LINPACK)) 
        stop("the LINPACK argument has been defunct since R 3.1.0")
    if (inherits(a, "qr")) {
        warning("solve.default called with a \"qr\" object: use 'qr.solve'")
        return(solve.qr(a, b))
    }
    a <- as.matrix(a)
    isc <- is.complex(a)
    if (missing(b)) {
        b <- diag(if (isc) 
            1 + (0+0i)
        else 1, nrow(a))
        colnames(b) <- rownames(a)
    }
    if (isc || (!missing(b) && is.complex(b))) 
        .Internal(La_solve_cmplx(a, b, tol))
    else .Internal(La_solve(a, b, tol))
}
