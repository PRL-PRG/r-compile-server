#? stdlib
`duplicated.POSIXlt` <- function (x, incomparables = FALSE, ...) 
{
    x <- as.POSIXct(x)
    NextMethod("duplicated", x)
}
