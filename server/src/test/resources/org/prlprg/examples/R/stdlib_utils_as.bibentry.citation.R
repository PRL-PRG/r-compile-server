#? stdlib
`as.bibentry.citation` <- function (x) 
{
    class(x) <- "bibentry"
    x
}
