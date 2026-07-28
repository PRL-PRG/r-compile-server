#? stdlib
`qf` <- function (p, df1, df2, ncp, lower.tail = TRUE, log.p = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_qf, p, df1, df2, lower.tail, log.p)
    else .Call(C_qnf, p, df1, df2, ncp, lower.tail, log.p)
}
