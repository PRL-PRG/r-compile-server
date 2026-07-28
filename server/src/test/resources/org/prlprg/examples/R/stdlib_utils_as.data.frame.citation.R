#? stdlib
`as.data.frame.citation` <- function (x, row.names = NULL, optional = FALSE, ...) 
{
    x <- as.bibentry(x)
    NextMethod()
}
