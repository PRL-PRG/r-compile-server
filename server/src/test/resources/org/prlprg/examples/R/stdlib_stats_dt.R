#? stdlib
`dt` <- function (x, df, ncp, log = FALSE) 
{
    if (missing(ncp)) 
        .Call(C_dt, x, df, log)
    else .Call(C_dnt, x, df, ncp, log)
}
