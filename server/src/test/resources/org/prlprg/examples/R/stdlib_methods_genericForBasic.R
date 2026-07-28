#? stdlib
`genericForBasic` <- function (f, where = topenv(parent.frame()), mustFind = TRUE) 
{
    ans <- .BasicFunsList[[f]]
    if (mustFind && isFALSE(ans)) 
        stop(gettextf("methods may not be defined for primitive function %s in this version of R", 
            sQuote(f)), domain = NA)
    ans
}
