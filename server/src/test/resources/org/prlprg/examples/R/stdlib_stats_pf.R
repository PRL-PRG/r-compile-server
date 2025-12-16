#? stdlib
`pf` <- function (q, df1, df2, ncp, lower.tail = TRUE, log.p = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_pf, q, df1, df2, lower.tail, log.p)
    else .Call(C_pnf, q, df1, df2, ncp, lower.tail, log.p)
}
