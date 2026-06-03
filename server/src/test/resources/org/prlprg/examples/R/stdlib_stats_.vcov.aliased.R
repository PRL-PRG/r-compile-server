#? stdlib
`.vcov.aliased` <- function (aliased, vc, complete = TRUE) 
{
    if (complete && NROW(vc) < (P <- length(aliased)) && any(aliased)) {
        cn <- names(aliased)
        VC <- matrix(NA_real_, P, P, dimnames = list(cn, cn))
        j <- which(!aliased)
        VC[j, j] <- vc
        VC
    }
    else vc
}
