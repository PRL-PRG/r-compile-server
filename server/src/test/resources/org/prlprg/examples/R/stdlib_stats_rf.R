#? stdlib
`rf` <- function (n, df1, df2, ncp) 
{
    if (missing(ncp)) 
        .Call(C_rf, n, df1, df2)
    else (rchisq(n, df1, ncp = ncp)/df1)/(rchisq(n, df2)/df2)
}
