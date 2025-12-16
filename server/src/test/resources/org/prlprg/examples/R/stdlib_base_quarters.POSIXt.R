#? stdlib
`quarters.POSIXt` <- function (x, ...) 
{
    x <- (as.POSIXlt(x)$mon)%/%3
    paste0("Q", x + 1)
}
