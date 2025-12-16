#? stdlib
`quarters.Date` <- function (x, ...) 
{
    x <- as.POSIXlt(x)$mon%/%3L
    paste0("Q", x + 1L)
}
