#? stdlib
`summary.loess` <- function (object, ...) 
{
    class(object) <- "summary.loess"
    object
}
