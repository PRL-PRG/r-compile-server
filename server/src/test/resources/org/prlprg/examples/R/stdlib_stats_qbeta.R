#? stdlib
`qbeta` <- function (p, shape1, shape2, ncp = 0, lower.tail = TRUE, log.p = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_qbeta, p, shape1, shape2, lower.tail, log.p)
    else .Call(C_qnbeta, p, shape1, shape2, ncp, lower.tail, 
        log.p)
}
