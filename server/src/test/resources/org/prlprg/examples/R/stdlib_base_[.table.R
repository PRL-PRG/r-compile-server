#? stdlib
`[.table` <- function (x, i, j, ..., drop = TRUE) 
{
    ret <- NextMethod()
    ldr <- length(dim(ret))
    if ((ldr > 1L) || (ldr == length(dim(x)))) 
        class(ret) <- "table"
    ret
}
