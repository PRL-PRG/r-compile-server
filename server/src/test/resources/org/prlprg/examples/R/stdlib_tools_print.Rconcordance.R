#? stdlib
`print.Rconcordance` <- function (x, ...) 
{
    df <- data.frame(srcFile = x$srcFile, srcLine = x$srcLine)
    rownames(df) <- seq_len(nrow(df)) + x$offset
    print(df)
    invisible(x)
}
