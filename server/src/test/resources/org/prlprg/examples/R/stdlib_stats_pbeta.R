#? stdlib
`pbeta` <- function (q, shape1, shape2, ncp = 0, lower.tail = TRUE, log.p = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_pbeta, q, shape1, shape2, lower.tail, log.p)
    else .Call(C_pnbeta, q, shape1, shape2, ncp, lower.tail, 
        log.p)
}
