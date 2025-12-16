#? stdlib
`dchisq` <- function (x, df, ncp = 0, log = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_dchisq, x, df, log)
    else .Call(C_dnchisq, x, df, ncp, log)
}
