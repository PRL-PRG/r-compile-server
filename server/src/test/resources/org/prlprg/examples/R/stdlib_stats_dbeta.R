#? stdlib
`dbeta` <- function (x, shape1, shape2, ncp = 0, log = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_dbeta, x, shape1, shape2, log)
    else .Call(C_dnbeta, x, shape1, shape2, ncp, log)
}
