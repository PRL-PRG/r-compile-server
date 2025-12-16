#? stdlib
`safe_pf` <- function (q, df1, ...) 
{
    df1[df1 <= 0] <- NA
    pf(q = q, df1 = df1, ...)
}
