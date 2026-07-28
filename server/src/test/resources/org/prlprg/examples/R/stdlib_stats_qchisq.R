#? stdlib
`qchisq` <- function (p, df, ncp = 0, lower.tail = TRUE, log.p = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_qchisq, p, df, lower.tail, log.p)
    else .Call(C_qnchisq, p, df, ncp, lower.tail, log.p)
}
