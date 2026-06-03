#? stdlib
`isSymmetric.matrix` <- function (object, tol = 100 * .Machine$double.eps, tol1 = 8 * 
    tol, ...) 
{
    if (!is.matrix(object)) 
        return(FALSE)
    d <- dim(object)
    if ((n <- d[1L]) != d[2L]) 
        return(FALSE)
    iCplx <- is.complex(object)
    if (n > 1L && length(tol1)) {
        Cj <- if (iCplx) 
            Conj
        else identity
        for (i in unique(c(1L, 2L, n - 1L, n))) if (is.character(all.equal(object[i, 
            ], Cj(object[, i]), tolerance = tol1, ...))) 
            return(FALSE)
    }
    test <- if (iCplx) 
        all.equal.numeric(object, Conj(t(object)), tolerance = tol, 
            ...)
    else all.equal(object, t(object), tolerance = tol, ...)
    isTRUE(test)
}
