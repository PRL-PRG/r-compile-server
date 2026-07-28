#? stdlib
`.filldfcols` <- function (df, srcdf) 
{
    srcnames <- names(srcdf)
    dfnames <- names(df)
    newcols <- setdiff(srcnames, dfnames)
    df[, newcols] <- srcdf[integer(), newcols]
    df <- df[, unique(c(srcnames, dfnames))]
    df
}
