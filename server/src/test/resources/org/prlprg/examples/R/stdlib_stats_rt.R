#? stdlib
`rt` <- function (n, df, ncp) 
{
    if (missing(ncp)) 
        .Call(C_rt, n, df)
    else rnorm(n, ncp)/sqrt(rchisq(n, df)/df)
}
