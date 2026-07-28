#? stdlib
`c.POSIXlt` <- function (..., recursive = FALSE) 
{
    as.POSIXlt(do.call(c, lapply(list(...), as.POSIXct)))
}
