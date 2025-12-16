#? stdlib
`qt` <- function (p, df, ncp, lower.tail = TRUE, log.p = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_qt, p, df, lower.tail, log.p)
    else .Call(C_qnt, p, df, ncp, lower.tail, log.p)
}
