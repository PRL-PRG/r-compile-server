#? stdlib
`pt` <- function (q, df, ncp, lower.tail = TRUE, log.p = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_pt, q, df, lower.tail, log.p)
    else .Call(C_pnt, q, df, ncp, lower.tail, log.p)
}
