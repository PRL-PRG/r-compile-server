#? stdlib
`pchisq` <- function (q, df, ncp = 0, lower.tail = TRUE, log.p = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_pchisq, q, df, lower.tail, log.p)
    else .Call(C_pnchisq, q, df, ncp, lower.tail, log.p)
}
