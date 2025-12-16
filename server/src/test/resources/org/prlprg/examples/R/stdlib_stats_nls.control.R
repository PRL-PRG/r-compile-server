#? stdlib
`nls.control` <- function (maxiter = 50, tol = 1e-05, minFactor = 1/1024, printEval = FALSE, 
    warnOnly = FALSE, scaleOffset = 0, nDcentral = FALSE) 
{
    stopifnot(is.numeric(tol), length(tol) == 1L, tol > 0, is.numeric(minFactor), 
        length(minFactor) == 1L, is.numeric(scaleOffset), length(scaleOffset) == 
            1L, is.logical(nDcentral), length(nDcentral) == 1L, 
        !is.na(nDcentral))
    list(maxiter = maxiter, tol = tol, minFactor = minFactor, 
        printEval = printEval, warnOnly = warnOnly, scaleOffset = scaleOffset, 
        nDcentral = nDcentral)
}

# Examples
nls.control(minFactor = 1/2048)

