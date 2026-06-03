#? stdlib
`rchisq` <- function (n, df, ncp = 0) 
{
    if (missing(ncp)) 
        .Call(C_rchisq, n, df)
    else .Call(C_rnchisq, n, df, ncp)
}
